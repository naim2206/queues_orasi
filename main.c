#include <stdio.h>
#include <stdlib.h>
#include "queue.h"

int main()
{
    /*Queue* queue = create();
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
    return 0;*/

    Queue* q = create();
    int nums[] = { 1, 2, 3, 4, 5, 6 };

    for (int i = 0; i < 6; i++)
    {
        enqueue(q, nums + i);
    }

    void* marker = next(q);

    do
    {
        void* d = next(q);
        printf("%d ", *(int*)d);
        enqueue(q, dequeue(q));
    } while (marker != next(q));

    return 0;

}