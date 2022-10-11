#include <stdio.h>
#include <stdlib.h>
#include "fun.h"
void func()
{
    int mas[35];
    for (int i = 0; i < 35; i++)
    {
        mas[i] = rand()%100-50;
        printf("%d ", mas[i]);
    }
    int cou = 0;
    for (int i = 0; i < 35; i++)
        if (mas[i]%3 == 0 && mas[i]%5 != 0)
            cou++;
    printf("\ncount elements kr 3 and  ne kr 5: %d", cou);
}
