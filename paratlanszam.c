#include <stdio.h>

int main() {
    int n;
    printf("Irjon be egy pozitiv egész számot: ");
    scanf("%d", &n);
    for(int i = n; i >= 1; i--){
        if (i % 2 != 0) {
            printf("%d\n", i);
        }
    
    }
    return 0;
}