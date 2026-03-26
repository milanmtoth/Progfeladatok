#include <stdio.h>

int main(){
    int szam;
    int kul_db = 0;
    int volt_mar[100] = {0};


    printf("Adj meg egy szamot az [1, 99] intervallumból!\n");

    while(1){
        printf("Szam:");
        scanf("%d", &szam);

        if(szam == 0) break;

        if(szam < 1 || szam > 99){
            printf("A szám nincs benne az adott intervallumban!\n");
        } else {
            if(volt_mar[szam] == 0){
                volt_mar[szam] = 1;
                kul_db++;
            }
        }
    }

    printf("\n%d db különböző szám lett megadva.\n", kul_db);
    printf("Ezek (növekvő sorrendben): ");

    int elso = 1;
    for(int i = 1; i < 100 ; i++){
        if(volt_mar[i] == 1){
            if(!elso){
                printf(", ");
            } 
            printf("%d",i);
            elso = 0;
        }
    }
    printf("\n");

    return 0;
}