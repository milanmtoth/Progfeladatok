#include <stdio.h>

void read_from_keyboard(char c[], int size) {
    fgets(c, size, stdin);
}

int main() {
    char szo[100];
    int db = 0;
    int max_hossz = 0;

    printf("Adj meg szavakat '*' vegjelig: \n");

    while(1) {
        read_from_keyboard(szo, 100);

        int i = 0;
        while (szo[i] != '\0') {
            if (szo[i] == '\n') {
                szo[i] = '\0'; 
                break;
            }
            i++;
        }
        
        int akt_hossz = i;

        if (szo[0] == '*' && szo[1] == '\0') {
            break;
        }

        db++;
        if (akt_hossz > max_hossz) {
            max_hossz = akt_hossz;
        }
    }

    printf("\n%d db szot adtal meg. A leghosszabb szo %d karakterbol all.\n", db, max_hossz);

    return 0;
}