#include <stdio.h>

#define h 256
#define w 256

unsigned char image[h][w][3];

void setPixel(int x, int y, unsigned char r, unsigned char g, unsigned char b) {
        image[y][x][0] = r;
        image[y][x][1] = g;
        image[y][x][2] = b;
}

void clearImage() {
   for (int i = 0; i < h; i++)
   {
    for ( int j = 0; j < w; j++)
    {
        for ( int c = 0; c < 3; c++)
        {
            image[i][j][c] = 0; // Preenche a imagem com preto
        }
        
    }
    
   }
}
   
   void saveImage() {
    printf("P3\n%d %d\n255\n", w, h);

    for (int i = 0; i < h; i++)
    {
        for (int j = 0; j < w; j++)
        {
            for ( int c = 0; c < 3; c++){
                printf("%d ", image[i][j][c]);
            }
            printf("\n");
        }
        
    }
    
   }

   int main()
   {
    clearImage();

    setPixel((int)(w/2), (int)(h/2), 255, 0, 0); // Define o pixel do meio da imagem como vermelho

    saveImage();

    return 0;
   }
   

