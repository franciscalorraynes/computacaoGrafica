#include <stdio.h>
#include <math.h> 

double norma2D(int vetor[]) {
    return sqrt(vetor[0]*vetor[0] + vetor[1]*vetor[1]);
}

double norma3D(int vetor[]) {
    return sqrt(vetor[0]*vetor[0] + vetor[1]*vetor[1] + vetor[2]*vetor[2]);
}

void normalizar2D(int vetor[], float resultado[]) {
    double normaVetor = norma2D(vetor);  
    resultado[0] = vetor[0] / normaVetor;
    resultado[1] = vetor[1] / normaVetor;
}

void normalizar3D(int vetor[], float resultado[]) {
    double normaVetor = norma3D(vetor);  
    resultado[0] = vetor[0] / normaVetor;
    resultado[1] = vetor[1] / normaVetor;
    resultado[2] = vetor[2] / normaVetor;
}

void multiplicarPorEscalar2D(int vetor[], int escalar, int resultado[]) {
    resultado[0] = vetor[0] * escalar;
    resultado[1] = vetor[1] * escalar;
}

void multiplicarPorEscalar3D(int vetor[], int escalar, int resultado[]) {
    resultado[0] = vetor[0] * escalar;
    resultado[1] = vetor[1] * escalar;
    resultado[2] = vetor[2] * escalar;
}

int main() {

    
    int vetor2d[] = {2, 4};  
    int vetor3d[] = {1, 7, 5}; 

    int escalar2d = 3;   
    int escalar3d = -5;  
    int resultado2d[2];
    int resultado3d[3];

    float normalizado2d[2];
    float normalizado3d[3];

    int vetorNormalizar2d[] = {12, 3};  
    int vetorNormalizar3d[] = {-3, 4, -5};  

    multiplicarPorEscalar2D(vetor2d, escalar2d, resultado2d);
    multiplicarPorEscalar3D(vetor3d, escalar3d, resultado3d);

    normalizar2D(vetorNormalizar2d, normalizado2d);
    normalizar3D(vetorNormalizar3d, normalizado3d);

    printf("Multiplicacao 2D: (%d, %d)\n", resultado2d[0], resultado2d[1]);
    printf("Multiplicacao 3D: (%d, %d, %d)\n", resultado3d[0], resultado3d[1], resultado3d[2]);

    printf("Normalizado 2D: (%.2f, %.2f)\n", normalizado2d[0], normalizado2d[1]);
    printf("Normalizado 3D: (%.2f, %.2f, %.2f)\n", normalizado3d[0], normalizado3d[1], normalizado3d[2]);

    return 0;
}
