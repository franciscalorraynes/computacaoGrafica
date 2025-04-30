#include <stdio.h>
#include <math.h>  // Necessário para usar sqrt()


double norma2D(int vetor []) {
    return sqrt(vetor[0]*vetor[0] + vetor[1]*vetor[1]);
}

double norma3D(int vetor []) {
    return sqrt(vetor[0]*vetor[0] + vetor[1]*vetor[1] + vetor[2]*vetor[2]);
}

int main()
{
    int a1[] = {2, -5};
    int b1[] = {4, 2};
    int a2[] = {3, 5, -6};
    int b2[] = {6, -2, 1};

    printf("Norma do vetor 2D A1: %.2f\n", norma2D(a1));
    printf("Norma do vetor 2D B1: %.2f\n", norma2D(b1));
    printf("Norma do vetor 3D A2: %.2f\n", norma3D(a2));
    printf("Norma do vetor 3D B2: %.2f\n", norma3D(b2));
    return 0;
}
