#include <iostream>
#include "Stack.h"

void push(Stack* s, unsigned int element)
{
    if (isFull(s))
    {
        s->elements = s->elements + 1;
        s->size = s->size + 1;
    }
    else
    {
        s->elements = s->elements + 1;
    }
    addToList(&(s->stack), element);
}

// Return -1 if stack is empty
int pop(Stack* s)
{
    int value = 0;
    if (isEmpty(s))
    {
        return -1;
    }
    else
    {
        s->elements = s->elements - 1;
        value = (int)(s->stack->value);
        removeFromList(&(s->stack));
        return value;
    }
}


void initStack(Stack* s)
{
    s->stack = nullptr;
    s->size = 0;
    s->elements = 0;
}

void cleanStack(Stack* s)
{
    List* tempListPtr = nullptr;
    while (s->stack != nullptr)
    {
        tempListPtr = s->stack;
        s->stack = s->stack->next;
        removeFromList(&tempListPtr);
    }
    s->elements = 0;
    s->size = 0;
}


bool isEmpty(Stack* s)
{
    if (s->elements == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool isFull(Stack* s)
{
    if (s->elements == s->size)
    {
        return true;
    }
    else
    {
        return false;

    }
}
