#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

int main() {
    int n;
    int also;
    int felso;

    printf("Hany db kulonbozo random szamot kersz?\n");
    scanf("%d", &n);
    printf("Also hatar: ");
    scanf("%d", &also);
    printf("Felso hatar: ");
    scanf("%d", &felso);


    if (n > (felso - also + 1)) {
        printf("Hiba: Nem lehet %d kulonbozo szamot generalni ebbol az intervallumbol!\n", n);
        return 1;
    }

    int *szamok = (int *)malloc(n * sizeof(int));
    srand(time(NULL));

    int db = 0; 
    int tartomany = felso - also + 1;

    while (db < n) {
        int uj_szam = rand() % tartomany + also;
        
        bool mar_szerepel = false;
        for (int i = 0; i < db; i++) {
            if (szamok[i] == uj_szam) {
                mar_szerepel = true;
                break;
            }
        }

        if (!mar_szerepel) {
            szamok[db] = uj_szam;
            db++;
        }
    }

    // Rendezés (Buborékrendezés az előző feladat alapján)
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (szamok[j] > szamok[j + 1]) {
                int seged = szamok[j];
                szamok[j] = szamok[j + 1];
                szamok[j + 1] = seged;
            }
        }
    }

    printf("\nA generalt kulonbozo szamok rendezve: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", szamok[i]);
    }
    printf("\n");

    return 0;
}