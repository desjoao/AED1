//
// Created by João on 06/04/2024.
//
#include <stdio.h>
#include <stdlib.h>

void entradas(int a, int b){
    int j, *population, *consultas;
    long long  *array, *query, i;
    population = &a;
    array = (long long *)calloc(*population+1, sizeof(long long));
    i = 1;
    while (scanf("%lld", &array[i]) != EOF) {
        i++;
        if (i == *population+1)
            break;
    }
    consultas = &b;
    query = (long long *)calloc(*consultas, sizeof(long long));
    for (i = 0; i < *consultas; i++){
        scanf("%lld", &query[i]);
        while (query[i] >= *population+1){
            scanf("%lld", &query[i]);
        }
    }
    for (i = 2; i < *population+1; i++){
        j = i;
        array[0] = array[i];
        while (array[j-1] < array[0]){
            array[j] = array[j-1];
            j = j -1;
        }
        array[j] = array[0];
    }
    long long c;
    for (i = 0; i < *consultas; i++){
        c = query[i];
        printf("%lld\n", array[c]);
    }
    free (array);
    free(query);
}

int main(){
    int query, population;
    while (scanf("%d %d", &population, &query) != EOF) {
        while (population < query) {
            scanf("%d", &query);
            scanf("%d", &population);
        }
        entradas(population, query);
        return 0;
    }
}