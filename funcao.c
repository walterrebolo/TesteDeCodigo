#include <stdio.h>
#include <stdlib.h>

#include "funcao.h"

int FatorialInt (int n){
    int fat;

    for(fat=1; n>1; n-=1){
        fat*=n;
    }
    return fat;
    }
