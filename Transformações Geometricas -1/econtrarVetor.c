#include <stdio.h>

// Função para calcular o vetor 2D
void calcular_Vetor2D(int a[], int b[], int resultado[]) {
    resultado[0] = b[0] - a[0];
    resultado[1] = b[1] - a[1];
}

// Função para calcular o vetor 3D
void calcular_Vetor3D(int a[], int b[], int resultado[]) {
    resultado[0] = b[0] - a[0];
    resultado[1] = b[1] - a[1];
    resultado[2] = b[2] - a[2];
}


int main() {
 int vetor[3]; 

    // Exercícios em 2D
    int a1[] = {2, 4}, b1[] = {6, 2};
    int a2[] = {6, 7}, b2[] = {-1, -2};

    // Exercícios em 3D
    int a3[] = {1, 2, 3}, b3[] = {4, 5, 6};
    
    calcular_Vetor2D(a1, b1, vetor);
    printf("Vetor 2D A1: (%d, %d)\n", vetor[0], vetor[1]);
    calcular_Vetor2D(a2, b2, vetor);
    printf("Vetor 2D B1: (%d, %d)\n", vetor[0], vetor[1]);
    calcular_Vetor3D(a3, b3, vetor);
    printf("Vetor 3D C1: (%d, %d, %d)\n", vetor[0], vetor[1], vetor[2]);

    return 0;
}
