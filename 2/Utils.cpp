#include <iostream>
#include "Utils.h"
#include "Stack.h"

void reverse(int* nums, unsigned int size)
{
    Stack* stack = new Stack;
    initStack(stack);
    int i = 0;
    for (i = 0; i < size; i++)
    {
        push(stack, (unsigned int)(nums[i]));
    }
    for (i = 0; i < size; i++)
    {
        nums[i] = pop(stack);
    }
    cleanStack(stack);
    delete stack;
}

int* reverse10()
{
    int* arr = new int[SIZE_ARRAY];
    int i = 0;
    int temp = 0;
    Stack* stack = new Stack;
    initStack(stack);
    for (i = 0; i < SIZE_ARRAY; i++)
    {
        std::cin >> temp;
        push(stack, (unsigned int)temp);
    }
    for (i = 0; i < SIZE_ARRAY; i++)
    {
        arr[i] = pop(stack);
    }
    cleanStack(stack);
    delete stack;
    return arr;
}
