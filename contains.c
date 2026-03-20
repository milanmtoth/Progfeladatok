#include <stdio.h>

int contains(int tomb[],int meret, int keresettelem){
    for(int i = 0; i < meret; i++){
        if(tomb[i]==keresettelem){
            return 1;
        }
    }
    return 0;
}

int main(){
    int szamok[5]={23,45,12,68,99};
    int felhasznalo_szam;

    printf("Melyik számot keresed a tombben: ");
    scanf("%d",&felhasznalo_szam);

    if(contains(szamok, 5, felhasznalo_szam)){
        printf("A %d szam benne van\n", felhasznalo_szam);
    }
    else {
        printf("A %d szam nincs benne \n", felhasznalo_szam);
    }
    return 0;
}