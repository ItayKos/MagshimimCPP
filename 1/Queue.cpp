#include <iostream>
#include "Queue.h"

void initQueue(Queue* q, unsigned int size)
{
    q->queue = new unsigned int[size];
    q->size = size;
    q->length = 0;
    q->front = 0;
    q->rear = 0;
}

void cleanQueue(Queue* q)
{
    delete[] q->queue;
}


void enqueue(Queue* q, unsigned int newValue)
{
    if (!isFull(q))
    {
        q->queue[q->rear] = newValue;
        q->rear = (q->rear + 1) % q->size;
        q->length = (q->length + 1);
    }
}

// return element in top of queue, or -1 if empty
int dequeue(Queue* q)
{
    int tempIndex = 0;
    if (isEmpty(q))
    {
        return -1;
    }
    else
    {
        q->length = q->length - 1;
        tempIndex = (int)q->front;
        q->front = (q->front + 1) % q->size;
        return (int)q->queue[tempIndex];
    }
}


bool isEmpty(Queue* s)
{
    if (s->length == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool isFull(Queue* s)
{
    if (s->length == s->size)
    {
        return true;
    }
    else
    {
        return false;
    }
}
