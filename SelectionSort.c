#include <stdio.h>
#include <string.h>
#define N 10
/*Ojetivo del programa: Metodo de ordenamiento SelectionSort(Seleccion)*/

void Rellena (int Arr[N]);
void SelectionSort(int Arr[N], int n);
void Imprime(int Arr[N]);

int main(){
    int Arr[N];
    int n = sizeof(Arr)/sizeof(Arr[0]);

    Rellena(Arr);
    SelectionSort(Arr, n);
    Imprime(Arr);

    printf("\n\nHecho por Emanuel Rico Martinez\n");

    return 0;
}

void Rellena (int Arr[N]){
    int i;

    for(i=0;i<N;i++){
        Arr[i]=rand()%31;
    }

    printf("Arreglo original: \n");
    for(i=0;i<N;i++){
        printf("%d ",Arr[i]);
    }
}

void swap(int *a, int *b){
    int aux=0;

    aux=*a;
    *a=*b;
    *b=aux;
}

void SelectionSort(int Arr[N], int n){
    int i, j, min_idx;

    for(i=0;i<n-1;i++){
        min_idx = i;
        for(j=i+1;j<n;j++){
            if(Arr[j] < Arr[min_idx]){
            min_idx=j;
            }

        swap(&Arr[min_idx], &Arr[i]);
        }
    }
}

void Imprime(int Arr[N]){
    int i;

    printf("\nArreglo ordenado: \n");
    for(i=0;i<N;i++){
    printf("%d ",Arr[i]);
    }
}
