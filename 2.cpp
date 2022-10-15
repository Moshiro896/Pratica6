#include <iostream>

int main()
{
    int i0, i1;
    
    printf("informe a primeira idade: ");
    scanf("%d", &i0);
    printf("informe a segunda idade: ");
    scanf("%d", &i1);
    
    if(i0 % 2 != 0 || i1 % 2 != 0)
    {
        printf("desconto");
    }

    return 0;
}
