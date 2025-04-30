#include <stdio.h>



void deslocamento2DPositivo(int x[], int y[], int resultado []) {
   
    resultado[0] = x [0] + y [0];
    resultado[1] = x [1] + y [1];

}


void deslocamento2DNegativo(int x[], int y[], int resultado []) {
     
    resultado[0] = x [0] - y [0];
    resultado[1] = x [1] - y [1];

}

void deslocamento3DPositivo(int x[], int y[],  int resultado [] ){
   
    resultado[0] = x [0] + y [0];
    resultado[1] = x [1] + y [1];
    resultado[2] = x [2] + y [2];

}

void deslocamento3DNeg(int x[], int y[],  int resultado [] ){
   
    resultado[0] = x [0] - y [0];
    resultado[1] = x [1] - y [1];
    resultado[2] = x [2] - y [2];

}

int main() {
    int vetor[3]; 
   
       
    int a1[] = {2, -5}, b1 []={2, 4};
    int a3[] = {3,  2}, b3 []={1,7};

    int a2[] = {3,5,-6}, b2[] ={-3, 2, -3};
    int a4[] = {5,5,1}, b4[] ={3,1,7};


    deslocamento2DPositivo(a1, b1, vetor);
    printf("Resultado da soma deslocamento 2D: (%d, %d)\n", vetor[0], vetor[1]);
    deslocamento2DNegativo(a3, b3, vetor);
    printf("Resultado da subtração do deslocamento 2D: (%d, %d)\n", vetor[0], vetor[1]);
    deslocamento3DPositivo(a2, b2, vetor);
    printf("Resultado da soma deslocamento 3D: (%d, %d, %d)\n", vetor[0], vetor[1], vetor[2]);
    deslocamento3DNeg(a4, b4, vetor);
    printf("Resultado da subtração do deslocamento 3D: (%d, %d, %d)\n", vetor[0], vetor[1], vetor[2]);
       return 0;
   }

// int dx, int d