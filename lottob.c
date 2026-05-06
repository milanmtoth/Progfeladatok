#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int n;
    int also;
    int felso;

    
    printf("Hany db random szamot kersz?\n");
    scanf("%d", &n);

    printf("Also hatar: ");
    scanf("%d", &also);

    printf("Felso hatar (zart intervallum): ");
    scanf("%d", &felso);


    int *szamok = (int *)malloc(n * sizeof(int));
    srand(time(NULL));

    int tartomany = felso - also + 1;
    for (int i = 0; i < n; i++) {
        szamok[i] = rand() % tartomany + also;
    }

    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (szamok[j] > szamok[j + 1]) {
                // Csere
                int seged = szamok[j];
                szamok[j] = szamok[j + 1];
                szamok[j + 1] = seged;
            }
        }
    }

    printf("\nA generalt szamok: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", szamok[i]);
    }
    printf("\n");


    return 0;
}