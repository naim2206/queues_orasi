#include <stdlib.h>
#include "queue.h"


Queue* create()
{
    Queue* queue = malloc(sizeof(Queue));
    queue->top = NULL;
    return queue;
}

void enqueue(Queue* queue, void* value)
{
    Node* node = malloc(sizeof(Node));

    node->value = value;
    node->prior = queue->top;
    queue->top = node;
}

void* dequeue(Queue* queue)
{

    if (queue->top == NULL)
        return NULL;

    Node* toDequeue;
    Node* prev = queue->top;
    void* toReturn;

    if (prev->prior == NULL)
    {
        toReturn = prev->value;
        queue->top = NULL;
        free(prev);
        return toReturn;
    }


    while (prev->prior->prior != NULL)
    {
        prev = prev->prior;
    }
    toDequeue = prev->prior;

    prev->prior = NULL;

    toReturn = toDequeue->value;

    free(toDequeue);
    return toReturn;

}

void* next(Queue* queue)
{
    if (queue->top == NULL)
        return NULL;

    Node* toNext = queue->top;

    while (toNext->prior != NULL)
    {
        toNext = toNext->prior;
    }


    return toNext->value;

}