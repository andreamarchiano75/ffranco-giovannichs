#include <stdio.h>

int main()
{
    int x;

    

    printf("iserisci un numero intero\n");
    scanf("%d", &x);
    int y = x - 1;
    while(x % y != 0 && y > 1)
    {
        y = y - 1;
    }

    if (y == 1)
    {
        printf("il numero e primo\n");
    }
    else
    {
        printf("il numero non e primo\n");
    }



    
}