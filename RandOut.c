#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include "RandOut.h"

int numOut()
{
    int out;
    //out = srand() * RANDNUMAX;
    out = rand() % 1000;
    return out;
}

void timer(int a)
{
    int index1, index2,index3;
    for(index1 = 0; index1 < a; index1++)
    {
        for(index2 = 0; index2 < 133333333; index2++)
        {
            for(index3 = 0; index3 < 5; index3++)
            {
                ;
            }
        }
    }
}