#include <stdio.h>

int main(int argc, char const *argv[])
{
    int height = 256;
    int width = 256;

    printf("P3\n%d %d\n255\n", width, height);

    for (size_t i = 0; i < height; i++)
    {
        for (size_t j = 0; j < width; j++)

            {
                {
                    
                    if (i<2 || j<2 || i>=height-2 || j>=width-2)
                    {
                        printf("255 0 0\n");
                    }else{
                        printf("0 0 0\n");
                    }
                    
                    
                }
            }
        }
    
    return 0;
}
