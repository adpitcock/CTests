#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include "RandOut.h"
#include "timer.h"
#include "handler.h"
#include "queue.h"

queue_t in_q;
queue_t out_q;

void handle()
{
    queue_init(&in_q);
    queue_init(&out_q);

    int index;
    for(index = 0; index < QUEUE_SIZE; index++)
    {
        int num = numOut();
        queue_in(&in_q,num);
    }

    while(1)
    {
        int temp;
        queue_out(&in_q,&temp);
        queue_in(&out_q,temp);
        timer(1);
    }
}