#include <stdio.h>

int main() {
    int n;
    printf("Irjon be egy pozitiv egesz szamot:\n ");
    scanf("%d", &n);
    printf("A %d alatti neggyel oszthato szamok:\n", n);
    for(int i = 1; i < n; i++) { 
        if (i % 4 == 0) {
            printf("%d\n", i);
        }
    }
    
    return 0;


}