#include <stdlib.h>
#include <stdio.h>
#include "queue.h"

int queue_init(queue_t *queue)
{
    int index;
    for(index = 0; index < QUEUE_SIZE; index++)
    {
        queue -> items[index] = QUEUE_EMPTY_SIZE;
    }

    queue -> head = 0;
    queue -> tail = 0;
    queue -> size = 0;

    return 0;
}

int queue_in(queue_t *queue, int item)
{
    if(queue->size == QUEUE_SIZE)
    queue -> items[queue -> tail] = item;
    ++queue->tail;
    if(queue->tail >= QUEUE_SIZE)
        queue->tail = 0;
    ++queue->size;
    return 0;
}

int queue_out(queue_t *queue, int *item)
{
    if(queue->size == 0)
        return -1;
    *item = queue->items[queue->head];
    queue->items[queue->head] = QUEUE_EMPTY_VALUE;
    ++queue->head;
    if(queue->head >= QUEUE_SIZE)
        queue->head = 0;
    --queue->size;
}