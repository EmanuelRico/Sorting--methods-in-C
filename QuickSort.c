#include <stdio.h>
#include <string.h>
#define N 10
/*Ojetivo del programa: Metodo de ordenamiento QuickSort*/

void Rellena (int Arr[N]);
void QuickSort(int Arr[N], int low, int high);
void Imprime(int Arr[N]);

int main(){
    int Arr[N];
    int n = sizeof(Arr)/sizeof(Arr[0]);

    Rellena(Arr);
    QuickSort(Arr,0,n-1);
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


/*Esta función toma el último elemento como pivote, lugares
el elemento pivote en su posición correcta en orden
matriz y coloca todos los más pequeños (más pequeños que el pivote)
a la izquierda del pivote y todos los elementos mayores a la derecha
de pivote*/
int partition (int Arr[N], int ini, int fin){
    int pivot=Arr[fin];
    int i=(ini-1);
    int j;

    for(j=ini;j<=fin-1;j++){
        if (Arr[j]<pivot){
            i++;
            swap(&Arr[i], &Arr[j]);
        }
    }

    swap(&Arr[i+1],&Arr[fin]);
    return(i+1);
}

/*Los parametros de esta funcion son:
Arr[N] --> Arreglo que va a ser ordenado,
ini --> Elemento inicial del arreglo,
fin --> Elemento final del arreglo*/
void QuickSort(int Arr[N], int ini, int fin){
    int pi;

    if(ini<fin){
        pi=partition(Arr,ini,fin);

        QuickSort(Arr,ini,pi-1);
        QuickSort(Arr,pi+1,fin);
    }
}

void Imprime(int Arr[N]){
    int i;

    printf("\nArreglo ordenado: \n");
    for(i=0;i<N;i++){
    printf("%d ",Arr[i]);
    }
}
