#ifndef STACK_H
#define STACK_H

struct queue
{
    struct node* top;
};
typedef struct queue Queue;

struct node
{
    void* value;
    struct node* prior;
};
typedef struct node Node;


Queue* create();

void enqueue(Queue* queue, void* value);

void* dequeue(Queue* queue);

void* next(Queue* queue);

#endif