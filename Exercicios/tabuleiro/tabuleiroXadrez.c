#include <stdio.h>


int main()
{
    int altura = 256;
    int largura = 256;

    int bloco = 32; // tamanho do bloco

    printf("P3\n%d %d\n255\n", altura, largura);

    for (size_t i = 0; i < altura; i++)
    {
        for (size_t j = 0; j < largura; j++)
        {
            int bloco_linha = i / bloco; // linha do bloco
            int bloco_coluna = j / bloco; // coluna do bloco
            if ((bloco_linha + bloco_coluna) % 2 == 0)
            {
                printf("255 255 255\n"); // branco
            }
            else
            {
                printf("0 0 0\n"); // preto
            }
            
          
        }
    }
    


    return 0;
}
