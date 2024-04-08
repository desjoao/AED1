#include<stdio.h>
#include <stdlib.h>

 int main() {
     int i, qnt, soma, *num;

     printf("Insira a quantidade de numeros que deseja somar: ");
     scanf("%d", &qnt);

     soma = 0;
     num = (int *) calloc(qnt, sizeof(int));

     for (i = 0; i < qnt; i++) {
         printf("Insira o %d numero", i + 1);
         scanf("%d", &num[i]);
         soma = soma + num[i];
     }
     printf("A soma eh %d", soma);
     free(num);
     return 0;
 }