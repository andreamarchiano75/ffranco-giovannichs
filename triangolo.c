#include <stdio.h>

int main()
{
    int a;
    int b;
    int c;

    printf("inserire tre valori");
    scanf("%d %d %d", &a, &b, &c);

    if(a + b > c && a + c > b && b + c > a) 
    {
        printf("triangolo\n");
        
        if(a == b && a == c && b == c)
        {
            printf("equilatero\n");
        }
        else if(a == b || a == c || b == c)
        {
            printf("isoscele\n");
        }
        else
        {
            printf("scaleno\n");
        }
    }
    else
    {
        printf("no triangolo\n");
    }
}