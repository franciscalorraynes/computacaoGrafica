#include <stdio.h>


int main()
{
    int width = 100;
    int height = 100;

    printf("P3\n%d %d\n255\n", width, height);

    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
        {
           if(i == height/2 && j==width/2){
            printf("255 0 0\n"); 
           }
           else{
            printf("0 0 0\n");
           }
        }
    }
    

    return 0;
}
