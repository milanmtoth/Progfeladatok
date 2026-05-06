#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int n;
    int also;
    int felso;

    printf("Hany db random szamot kersz?\n");
    scanf("%d",&n);

    printf("Also hatar: ");
    scanf("%d",&also);

    printf("Felso hatar: ");
    scanf("%d", &felso);

    srand(time(NULL));

    printf("\nA generalt szamok: ");

    for(int i = 0; i < n; i++){
        int tartomany = felso - also + 1;
        int random = rand() % tartomany + also;

        printf("%d ", random);
    }
    printf("\n");

    return 0;
}