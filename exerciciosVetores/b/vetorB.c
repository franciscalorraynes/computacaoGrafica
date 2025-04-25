#include <stdio.h>
#include <stdlib.h>

#define altura 255
#define largura 255

// Função para desenhar uma linha usando o algoritmo de Bresenham
void drawLine(unsigned char image[altura][largura][3], int x0, int y0, int x1, int y1){
    int dx = abs(x1-x0), sx = x0 < x1 ? 1:-1;
    int dy = abs(y1 -y0), sy = y0 <y1? 1:-1;
    int error = dx +dy, error2;

    while (1)
    {
        
    }
    
}