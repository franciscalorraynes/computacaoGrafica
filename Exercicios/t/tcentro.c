#include <stdio.h>



int main()
{

    int height = 100;
    int width = 100;

    printf("P3\n%d %d\n255\n", width, height);

    for (int i = 0; i < height; i++)
    {
        
    for (int j = 0; j < width; j++)
    {
        if ((i==30 && j >= 30 && j<=70) ||(j==50 && i>=30 && i<=80))
        {
            printf("255 0 0\n");
        }
        else
        {
            printf("255 255 255\n");
        }
        
    }
    
}
return 0;

}