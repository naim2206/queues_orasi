#include <stdio.h>
#include <stdlib.h>
#include "queue.h"

int main()
{
    Queue* queue = create();
    int x = 3;
    int y = 1;
    int* a = &x;
    int* b = &y;

    enqueue(queue, a);

    printf("next a: %d\n", *((int*)next(queue)));
    printf("dequeue: %d\n", *((int*)dequeue(queue)));

    enqueue(queue, a);
    enqueue(queue, b);
    printf("next a: %d\n", *((int*)next(queue)));

    printf("dequeue a: %d\n", *((int*)dequeue(queue)));
    printf("next b: %d\n", *((int*)next(queue)));

    printf("dequeue b: %d\n", *((int*)dequeue(queue)));
    return 0;
}