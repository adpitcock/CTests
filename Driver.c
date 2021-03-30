#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include "RandOut.h"

int main(void)
{
    while(1)
    {
        timer(1);
        printf("%d \n", numOut());
    }
}