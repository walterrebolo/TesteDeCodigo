#include <stdio.h>
#include <stdlib.h>

#include "funcao.h"

int main()
{
    int n;
    printf("insira um numero: \n");
    scanf("%d", &n);
    printf("O fatorial de %d = %d", n, FatorialInt(n));

    return 0;
}
