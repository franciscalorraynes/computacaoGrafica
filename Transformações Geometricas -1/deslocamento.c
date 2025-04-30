#include <stdio.h>



void deslocamento2D(int x[], int y[], int resultado []) {
   
    resultado[0] = x [0] + y [0];
    resultado[1] = x [1] + y [1];

}

void deslocamento3D(int x[], int y[],  int resultado [] ){
   
    resultado[0] = x [0] + y [0];
    resultado[1] = x [1] + y [1];
    resultado[2] = x [2] + y [2];

}


int main() {
    int vetor[3]; 
   
       
    int a1[] = {2, -5}, b1 []={2, 4};

    int a2[] = {3,5,-6}, b2[] ={-3, 2, -3};


    deslocamento2D(a1, b1, vetor);
    printf("Resultado do deslocamento 2D: (%d, %d)\n", vetor[0], vetor[1]);
    deslocamento3D(a2, b2, vetor);
    printf("Resultado do deslocamento 3D: (%d, %d, %d)\n", vetor[0], vetor[1], vetor[2]);
       return 0;
   }

// int dx, int d