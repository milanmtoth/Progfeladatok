#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]){
    if(argc < 2){
        fprintf(stderr, "Nem adtál meg egyetlen szót sem!\n");
        return 1;
    }

    int minhossz = strlen(argv[1]);
    for(int i = 2; i < argc; i++){
        int akthossz = strlen(argv[i]);
        if(akthossz < minhossz){
            minhossz = akthossz;
        }
    }

    for(int i = 0; i < argc; i++){
        if(strlen(argv[i]) == minhossz){
            printf("%s\n", argv[i]);
        }
    }

    return 0;
}