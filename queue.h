#ifndef QUEUE_H
#define QUEU_H

#define QUEUE_SIZE 5
#define QUEUE_EMPTY_VALUE -1

typedef struct{
    int items[QUEUE_SIZE];
    int head;
    int tail;
    int size;
} queue_t;

int queue_init(queue_t *queue);
int queue_in(queue_t *queue, int item);
int queue_out(queue_t *queue, int *item);

#endif