#include <stdio.h>


void mergesort(int vetor[], int tamanho);
void mergesort_recursivo(int vetor[], int esq, int dir);
void mergesorted_vetores(int vetor[], int esq, int mei, int dir);

int main(){

    int vetor[] = {8, 3, 5, 2, 1, 9, 7, 6, 4, 0};
    int tamanho = 10;

    mergesort(vetor, tamanho);

    for (int i = 0; i < tamanho; i++)
        printf("%d", vetor[i]);
    printf("\n");

    return 0;
}

void mergesort(int vetor[], int tamanho)
{
    mergesort_recursivo(vetor, 0, tamanho - 1);
}

void mergesort_recursivo(int vetor[], int esq, int dir)
{
    if (esq < dir){
        int mei  = esq + (dir - esq) / 2;

        mergesort_recursivo(vetor, esq, mei);
        mergesort_recursivo(vetor, mei + 1, dir);

        mergesorted_vetores(vetor, esq, mei, dir);

    }
}

void mergesorted_vetores(int vetor[], int esq, int mei, int dir)
{
    int tamanho_esq = mei - esq + 1;
    int tamanho_dir = dir - mei;

    int temp_esq[tamanho_esq];
    int temp_dir[tamanho_dir];

    int i, j, k;

    for (i = 0; i < tamanho_esq; i++)
        temp_esq[i] = vetor[esq + i];

    for (i = 0; i < tamanho_dir; i++)
        temp_dir[i] = vetor[mei + 1 + i];

    for (i = 0, j = 0, k = esq; k <= dir; k++)
    {
        if ((i < tamanho_esq) &&
            (j >= tamanho_dir) || temp_esq[i] <= temp_dir[j])
        {
            vetor[k] = temp_esq[i];
            i++;
        }
        else
        {
            vetor[k] = temp_dir[j];
            j++;
        }
    }
}