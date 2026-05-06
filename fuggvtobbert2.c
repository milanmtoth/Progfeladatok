#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef struct {
    int min;
    int max;
    double atlag;
} Statisztika;


Statisztika szamitas(int tomb[], int meret) {
    Statisztika eredmeny; 
    
    eredmeny.min = tomb[0];
    eredmeny.max = tomb[0];
    int osszeg = 0;

    for (int i = 0; i < meret; i++) {
        if (tomb[i] < eredmeny.min) eredmeny.min = tomb[i];
        if (tomb[i] > eredmeny.max) eredmeny.max = tomb[i];
        osszeg += tomb[i];
    }

    eredmeny.atlag = (double)osszeg / meret;
    
    return eredmeny; 
}

int main() {
    
    srand(123); 

    int szamok[10];

    printf("A tomb elemei: ");
    for (int i = 0; i < 10; i++) {
        szamok[i] = rand() % 90 + 10;
        printf("%d%s", szamok[i], (i == 9 ? "" : ", "));
    }
    printf("\n");

    
    Statisztika s = szamitas(szamok, 10);

    printf("Legkisebb elem: %d\n", s.min);
    printf("Legnagyobb elem: %d\n", s.max);
    printf("Az elemek atlaga: %.1f\n", s.atlag);

    return 0;
}