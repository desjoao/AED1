//
// Created by João on 06/04/2024.
//
#include <stdio.h>

int main(){
    int vetor[20], i, temp;

    for (i = 0; i < 20; i++)
        scanf("%d", &vetor[i]);

    for (i = 0; i <20; i++){
        if (i >= 19-i)
            break;
        else{
            temp = vetor[i];
            vetor[i] = vetor[19-i];
            vetor[19-i] = temp;
        }
    }
    for (i = 0; i < 20; i++)
        printf("N[%d] = %d\n", i, vetor[i]);
    return 0;
}
