//Retorna o maior e o menor entre 5 números.

#include <stdio.h>


/

int main() {
    int vet[3] = {3,10,24};
    for(int i=0; i<4;i++){
      if(vet[i]>vet[i+1]){
        vet[i] = vet[i+1];
        printf("%i",vet[i]);
      }
    }
    return 0;

    
}