#include <stdio.h>
#include <stdlib.h>
#include "fun.h"
void func()
{
    int mat[5][7];
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 7; j++)
	{
            mat[i][j] = rand()%100-50;
	    printf("%d ", mat[i][j]);
	}
        printf("\n");
    }
    int cou = 0;
    for (int i = 0; i < 5; i++)
        for (int j = 0; j < 7; j++)
            if (mat[i][j]%3==0 && mat[i][j]%5 !=0)
                cou++;
    printf("count of elements !%5 and %3: %d", cou);
}
