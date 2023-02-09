#include <stdio.h>

int main()
{
   float base;
   float esponente;
   float potenza = 1;

printf("inserisci due numeri\n");
scanf("%f %f", &base, &esponente);

if(esponente < 0)
{
    while(esponente != 0)
    {
        potenza = 1 / potenza * base;
        esponente = esponente + 1;
    }
    printf("%f\n", potenza);
}
else
{
    printf("1\n");
}

}