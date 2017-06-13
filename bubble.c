#include <stdio.h>

int main(){
	int vetor[10] = {5, 0, 7, 8, 1, 4, 3, 6, 2, 9};

    int i;
    int j;
    int aux;
    for(i = 0; i < 10; ++i){
        for(j = 0; j < 10; ++j){
            if(vetor[i] < vetor[j]){
                aux = vetor[i];
                vetor[i] = vetor[j];
                vetor[j] = aux;
            }
        }
    }
    vetor_imprime(vetor, 10);

	return 0;
}
/*
int swap(int vetor[], int i, int j){

}
*/

int vetor_imprime(int vetor[], int tamanho){
    int i;
    for(i = 0; i < 10; ++i){
        printf("%d ", vetor[i]);
    }
}
