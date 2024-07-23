#include <stdio.h>
#include <stdlib.h>
#include <time.h>

char *TERMO = NULL;
size_t getline_size = 5 + 1 ;

int dict_size(FILE *f){
    int c = 0 ;
    while(!feof(f)) if(fgetc(f) == '\n') c++ ;
    rewind(f) ;
    return c ;
}

int main(int argc, char **argv) {
    srand(time(0)) ;
    FILE *f = fopen("DICT.TXT", "r") ;
    int c = dict_size(f) ;
    int rd = random()%c ;

    for(int i = 0 ; i<rd; i++) getline(&TERMO, &getline_size, f) ;
    printf("%s", TERMO) ;

    fclose(f) ;
    free(TERMO) ;
    return 0 ;
}
