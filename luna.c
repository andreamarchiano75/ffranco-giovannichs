#include <stdio.h>

int main()
{
    int anno;

    printf("inserire un eta\n");
    scanf("%d", &anno);

    if(anno < 1969)
    {
        int anniprima = 1969 - anno;
        printf("anni prima allunaggio: %d\n", anniprima);
        
    }
   else if(anno == 1969)
   {
    printf("stesso anno\n");
   }
    else 
    {
       int annidopo = anno - 1969;
       printf("anni dopo allunaggio: %d\n", annidopo);
    } 

   
    

  
}