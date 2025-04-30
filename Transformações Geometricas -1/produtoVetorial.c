#include <stdio.h>

int produtoVetorial2D(int a[], int b[]) {
    return a[0]*b[1] - a[1]*b[0];
}

void produtoVetorial3D(int a[], int b[], int resultado[]) {
    resultado[0] = a[1]*b[2] - a[2]*b[1]; // i
    resultado[1] = -(a[0]*b[2] - a[2]*b[0]); // j
    resultado[2] = a[0]*b[1] - a[1]*b[0]; // k
}

int main() {
    int a2D[] = {2, -4};
    int b2D[] = {5, 3};
    
    int a3D[] = {1, 7, 5};
    int b3D[] = {2, 4, 5};
    int resultado3D[3];

    int produto2D = produtoVetorial2D(a2D, b2D);
    printf("Produto vetorial 2D (escalar): %d\n", produto2D);

    produtoVetorial3D(a3D, b3D, resultado3D);
    printf("Produto vetorial 3D (vetor): <%d, %d, %d>\n",
        resultado3D[0], resultado3D[1], resultado3D[2]);

    return 0;
}
