#include <stdio.h>
int legnagyobb(int n){
    if(n < 2) return 0;

    for(int i = n / 2; i >= 1; i--){
        if(n % 2 == 0){
            return i;
        }
    }
    return 1;
}

int main(){
    printf("Az elso 50 szam legnagyobb osztoja:\n");

    for(int i = 1; i <= 50; i++){
        int oszto = legnagyobb(i);
        if(oszto == 0){
            printf("%2d Nincs ertelmezve",i);
        }
        else{
            printf("%2d: %d\n", i, oszto);
        }
        
    }
}