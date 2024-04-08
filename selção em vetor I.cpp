//
// Created by João on 06/04/2024.
//
#include <stdio.h>

int main(){
    float vetor[10];
    int i, c;
    c = 0;
    for (i = 0; i < 10; i++) {
        scanf("%f", &vetor[i]);
        if (vetor[i] <= 10)
            c ++;
    }
    int position[c];
    c = 0;
    for (i = 0; i < 10; i++){
        if (vetor[i] <= 10){
            position[c] = i;
            c++;
        }
    }
    for (i = 0; i < c; i++){
        printf("A[%d] = %.1f\n", position[i], vetor[position[i]]);
    }
    return 0;
}