#include <stdio.h>

int main()
{
   int width = 256;
   int height = 256;

   printf("P3\n %d \t %d\n 255\n", width, height);


   for (int i = 0; i < width; i++)
   {
    for (int j = 0; j < height; j++)
    {
        printf("%d \t %d \t %d \n", i, j, 63);
    }
    
   }
   
return 0;

}
