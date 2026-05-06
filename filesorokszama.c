#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    if (argc < 2) {
        fprintf(stderr, "Hiba! Adja meg egy szoveges allomany nevet!\n");
        return 1;
    }
 
    FILE *fajl = fopen(argv[1], "r");
    if (fajl == NULL) {
        fprintf(stderr, "Hiba! A %s nevu file-t nem sikerult megnyitni!\n", argv[1]);
        return 1;
    }

    int sorok_szama = 0;
    char karakter;

    while ((karakter = fgetc(fajl)) != EOF) {
        if (karakter == '\n') {
            sorok_szama++;
        }
    }


    printf("%d\n", sorok_szama);

    fclose(fajl);

    return 0;
}