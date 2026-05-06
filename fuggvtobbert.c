#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void stat(int tomb[], int meret, int *min, int *max, double *atlag){
    *min = tomb[0];
    *max = tomb[0];
    int osszeg = 0;

    for( int i = 0; i < meret; i++){
        if(tomb[i] < *min) *min = tomb[i];
        if(tomb[i] > *max) *max = tomb[i];
        osszeg += tomb[i];
    }

    *atlag = (double)osszeg / meret;
}


int main(){
    srand(time(0));

    int szamok[10];
    int legkisebb;
    int legnagyobb;
    double atlag;

    printf("Tömb elemei: ");
    for(int i = 0; i < 10; i++){
        szamok[i] = rand() % 90 + 10;
        printf("%d%s", szamok[i], (i == 9 ? "" : ", "));
    }

    printf("\n");

    // 3. Függvény hívása (átadjuk a változók címeit)
    stat(szamok, 10, &legkisebb, &legnagyobb, &atlag);

    // 4. Eredmények kiíratása
    printf("Legkisebb elem: %d\n", legkisebb);
    printf("Legnagyobb elem: %d\n", legnagyobb);
    printf("Az elemek atlaga: %.1f\n", atlag);

    return 0;
}
