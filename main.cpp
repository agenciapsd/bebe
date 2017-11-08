#include <stdio.h>

int main()
{
    int idade;

    printf("Informe sua idade");
    scanf("%d" ,&idade);

    if (idade<0)
    {
    printf("Sua idade inesistente!");
    }
    else
    if (idade<=3)
    {
    printf("Voce e um Bebe!");
    }
    else
    {
    printf("Voce nao e um Bebe!");

    }
}

