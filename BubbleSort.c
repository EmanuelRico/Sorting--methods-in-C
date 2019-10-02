#include <stdio.h>
#include <string.h>
#define N 10
/*Ojetivo del programa: Metodo de ordenamiento BubbleSort*/

void Rellena (int Arr[N]);
void BubbleSort(int Arr[N]);
void Imprime(int Arr[N]);

int main(){
    int Arr[N];

    Rellena(Arr);
    BubbleSort(Arr);
    Imprime(Arr);

    printf("\n\nHecho por Emanuel Rico Martinez\n");

    return 0;
}

void Rellena (int Arr[N]){  //Rellena el arreglo con numeros aleatorios
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

void BubbleSort(int Arr[N]){
    int i,j,aux=0;

    for(i=1;i<=N;i++){
        for(j=N;j>=i;j--){
            if(Arr[j-1]>Arr[j]){
                swap(&Arr[j],&Arr[j-1]);
            }
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
