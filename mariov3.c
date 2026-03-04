#include <stdio.h>

int main (){
    int m;
    printf("Kerem a magassagot: ");
    scanf("%d",&m);
    for(int i = 1; i <= m; i++){

        for(int y = 1; y <= m-i;y++){
            printf(" ");
        }

        for(int y = 1; y <= i; y++){
            printf("#");
        }
        printf("  ");

        for(int y = 1; y <= i; y++){
                printf("#");
        }

        printf("\n");
        
    }

    return 0;
}