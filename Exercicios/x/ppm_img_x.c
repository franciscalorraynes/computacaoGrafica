#include <stdio.h>

int main(int argc, char const *argv[])
{
    int height = 100;
    int width = 100;

    printf("P3\n%d %d\n255\n", width, height);

    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
        {
            //verificar se o pixel está na diagonal ou anti-diagonal
            // Diagonal: i == j 
            // Anti-diagonal: i + j == width - 1
            // Definir a cor como vermelho (255, 0, 0) para os pixels da diagonal e anti-diagonal
            // Definir a cor como branco (255, 255, 255) para todos os outros pixels
            if (i == j || i + j == width - 1)
            {
               printf("255 0 0\n");
            }
            else{
                printf("255 255 255\n");
            }            
            
        }
    }

    return 0;
}
