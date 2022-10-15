#include <iostream>

int main()
{
    int hora;
    
    printf("informe a hora: ");
    scanf("%d", &hora);
    
    if(hora >= 18 || hora <= 5)
    {
        printf("escuro");
    }

    return 0;
}
