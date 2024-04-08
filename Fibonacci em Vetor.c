//
// Created by João on 06/04/2024.
//

#include <stdio.h>
#include <stdlib.h>

int main(){
    // criando o vetor com números de fibonacci
    int i;
    unsigned long long int fibonacci[61];
    i = 2;
    while (i < 61){
        fibonacci[0] = 0; fibonacci[1] = 1;
        fibonacci[i] = fibonacci[i-1] + fibonacci[i-2];
        i++;
    }

    unsigned int qnt, *query;
    scanf("%d", &qnt);
    query = (unsigned int*)malloc(sizeof(unsigned int) * qnt );
    for (i = 0; i < qnt; i++){
        scanf("%d", &query[i]);
        }
    for (i = 0; i < qnt; i++){
        printf("Fib(%d) = %lld\n", query[i], fibonacci[query[i]]);
    }
    free (query);
    return 0;
}
