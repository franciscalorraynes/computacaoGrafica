#include <stdio.h>


int main()
{
    int width = 256;
    int height = 256;

    printf("P3\n %d \t %d\n 255\n", width, height);

    for (size_t i = 0; i < height; i++)
    {
        for (size_t j = 0; j < width; j++)
        {
            printf("255 255 255\n");
        }
    }
    
    return 0;
}
