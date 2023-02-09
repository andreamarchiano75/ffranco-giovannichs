#include <stdio.h>

int main()
{
    int a;
    
    printf("inserisci un numero intero\n");
    scanf("%d", &a);
    int b = a - 1;
   
    while(b >= 1)
    {
    a = a * b;
    b = b - 1;
    }
    printf("%d\n", a);
}