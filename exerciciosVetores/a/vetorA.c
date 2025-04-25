#include <stdio.h>
#include <stdlib.h>

#define ALTURA 255
#define LARGURA 255

// Função para desenhar uma linha usando o algoritmo de Bresenham
void drawLine(unsigned char image[ALTURA][LARGURA][3], int x0, int y0, int x1, int y1) {
    int dx = abs(x1 - x0), sx = x0 < x1 ? 1 : -1;
    int dy = -abs(y1 - y0), sy = y0 < y1 ? 1 : -1;
    int err = dx + dy, e2;

    while (1) {
        if (x0 >= 0 && x0 < LARGURA && y0 >= 0 && y0 < ALTURA) {
            image[y0][x0][0] = 0;   // R
            image[y0][x0][1] = 0;   // G
            image[y0][x0][2] = 0;   // B
        }
        if (x0 == x1 && y0 == y1) break;
        e2 = 2 * err;
        if (e2 >= dy) { err += dy; x0 += sx; }
        if (e2 <= dx) { err += dx; y0 += sy; }
    }
}

int main() {
    FILE *fp = fopen("imagem.ppm", "w");
    if (fp == NULL) {
        fprintf(stderr, "Erro ao criar o arquivo ppm\n");
        return 1;
    }

    unsigned char image[ALTURA][LARGURA][3];

    // Preenche a imagem com branco
    for (int y = 0; y < ALTURA; y++)
        for (int x = 0; x < LARGURA; x++)
            image[y][x][0] = image[y][x][1] = image[y][x][2] = 255;

    // Desenha o vetor de (2,4) até (6,2)
    drawLine(image, 2, 4, 6, 2);

    // Escreve o cabeçalho PPM
    fprintf(fp, "P3\n%d %d\n255\n", LARGURA, ALTURA);

    // Escreve os dados da imagem
    for (int y = 0; y < ALTURA; y++) {
        for (int x = 0; x < LARGURA; x++) {
            fprintf(fp, "%d %d %d ", image[y][x][0], image[y][x][1], image[y][x][2]);
        }
        fprintf(fp, "\n");
    }

    fclose(fp);
    return 0;
}
