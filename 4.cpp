#include <iostream>

int main()
{
    int gasto, imposto;
    
    printf("informe o valor gasto: ");
    scanf("%d", &gasto);
    
    if(gasto > 500)
    {
        imposto = (gasto - 500) / 2;
    }
    else
    {
        imposto = 0;
    }
    
    printf("o valor do imposto e: %d", imposto);

    return 0;
}
