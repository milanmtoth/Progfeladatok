#include <stdio.h>

int main() {
     int a;
     int b;
     int kerulet;
     int terulet;
     printf("Kerem adja meg az a oldal hosszat cm-ben: ");
     scanf("%d",&a);

     printf("Kerem adja meg a b oldal hosszat cm-ben: ");
     scanf("%d",&b);

     kerulet = 2*(a+b);
     terulet = a*b;

     printf("A teglalap kerulete: %d cm\n", kerulet );
     printf("A teglalap terulete: %d cm^2\n", terulet);

     return 0;
}