#include <stdio.h>

int kulonbseg_osszeg(int magassagok[]) {
    int osszeg = 0;
    int i = 0;

    while (magassagok[i + 1] != -1) {
        int a = magassagok[i];
        int b = magassagok[i + 1];
        
        int diff = a - b;
        if (diff < 0) {
            diff = -diff;
        }
        
        osszeg += diff;
        i++;
    }
    
    return osszeg;
}

int main() {
    int pelda[] = {2, 4, 8, 3, 9, 7, 1, -1};

    printf("Eredmeny: %d\n", kulonbseg_osszeg(pelda));

    int felhokarcolok[] = {1, 7, 9, 7, 6, 9, 3, 1, 3, 4, 8, 6, 2, 3, 1, 5, 7, -1};
    printf("Nagy szam eredmeny: %d\n", kulonbseg_osszeg(felhokarcolok));

    return 0;
}