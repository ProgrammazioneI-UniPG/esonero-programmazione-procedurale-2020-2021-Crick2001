#include <string.h>
#include <time.h>
#include <stdlib.h>
#include <stdio.h>

int main(void){
  int a = 0;
  char K[128];
  time_t t;
  printf("immettere una stringa di massimo ");
  printf("128 caratteri.\n");
  fgets(K, 128, stdin);
        printf("Scegliere se usare l'opzione 1 o 2:\n 1)scegliere da per se una ");
        printf("stringa di valore uguale o superiore alla stringa immessa \n 2)");
        printf("il programma genererà automaticamente una stringa\n");

                  scanf("%d", &a);
          while (a!=1 && a!=2) {
                  printf("Immettere solo 1 o 2 \n");
                  scanf("%d", &a);
                  }
  if(a==1){
    char T[strlen(K)];
    char G[strlen(K)];
      char P[128];
        fgets(P, 128, stdin);
    printf("immettere una nuova stringa: \n");
    while (strlen(P)< strlen(K)){
        fgets(P, 128, stdin);
      if (strlen(P)< strlen(K))  {
        printf ("la stringa è troppo corta immetterne una più lunga \n");
        printf ("per favore!\n");}
                                }
      for(int j = 0; j<strlen(K); j++){
        T [j] = P[j] ^ K[j];
        G [j] = T[j] ^ P[j];                            }
        printf("\n");
        printf("la stringa codificata è questa: %s", T);
        printf("\n");
        printf("la stringa iniziale è questa: %s", G);
          }
    if(a==2){
    char L[strlen(K)];
    char D[strlen(K)];
    char F[strlen(K)];
          srand((unsigned) time(&t));
      for(int j = 0; j<strlen(K); j++){
          D[j] = 32 + (rand() %96);
          F[j] = D[j] ^ K[j];
          L[j] = F[j] ^ D[j];
                                      }
        printf("\n");
        printf("la stringa codificata è questa: %s", D);
        printf("\n");
        printf("la stringa iniziale è questa: %s", L);
        printf("\n");
            }
return 0;
}
