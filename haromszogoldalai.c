#include <stdio.h>

int haromszog(int a, int b, int c) {
    if (a > 0 && b > 0 && c > 0) {
        if ( a + b > c && a + c > b && c + b > a) {
            return 1;
        }
        else{
            return 0;
        }   
    }
}
int main() {
    int a, b, c;
    printf("Adja meg a haromszog 3 oldalat:");
    if(scanf("%d %d %d", &a , &b, &c) != 3) {
        return 0;
    }
    if (haromszog(a,b,c) == 1) {
        printf("A haromszog megszerkesztheto.\n");
    }
    else{
        printf("A haromszoget nem lehet megszerkeszteni.\n");
    }
    return 0;
}