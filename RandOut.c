#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include "RandOut.h"

int numOut()
{
    int out;
    //out = srand() * RANDNUMAX;
    out = rand() % RANDNUMMAX;
    return out;
}