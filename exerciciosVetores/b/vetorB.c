#include <stdio.h>
#include <stdlib.h>

#define altura 255
#define largura 255

// Função para desenhar uma linha usando o algoritmo de Bresenham
void drawLine(unsigned char image[altura][largura][3], int x0, int y0, int x1, int y1){
    int dx = abs(x1-x0), sx = x0 < x1 ? 1:-1;
    int dy = abs(y1 -y0), sy = y0 <y1? 1:-1;
    int err = dx +dy, e2;

    while (1)
    {
        if(x0 >= 0 && x0 < largura && y0 >= 0 && y0 < altura){
            image[y0][x0][0]= 0;
            image[y0][x0][1] = 0;
            image[y0][x0][2] = 0;
        }
        if(x0 == x1 && y0 ==y1) break;
        e2 = 2*err;
        if(e2 >= dy){ err += dy; x0 += sx;}
        if(e2 >= dx){ err += dx; x0 += sy;}
    }  
}

int main()
{
    FILE *fp = fopen("imagem.ppm", "w");
    if(fp == NULL){
        fprintf(stderr, "Erro ao criar o arquivo ppm\n");
        return 1;
    }

  unsigned char  image[altura][largura][3];
    for(int y =0; y < altura; y++)
        for(int x =0; x < largura; x++)
        image[y][x][0] = image[y][x][1] = image[y][x][2] = 255;

    // Desenha o vetor de (6,7) até (-1,-2)
    drawLine(image, 6, 7, -1, -2);
    fprintf(fp, "P3\n%d %d\n255\n", largura, altura);

    for(int y =0; y < altura; y++){
        for( int x =0; x <largura; x++ ){
            fprintf(fp, " %d %d %d", image[y][x][0], image[y][x][1], image[y][x][2]);

        }
        fprintf(fp, "\n");
        return 0;
    }




}

