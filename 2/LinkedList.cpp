#include <iostream>
#include "LinkedList.h"

void addToList(List** head, unsigned int newValue)
{
    List* newNode = nullptr;
    newNode = new List;
    newNode->value = newValue;
    if (*head == nullptr)
    {
        newNode->next = nullptr;
    }
    else
    {
        newNode->next = *head;
    }
    *head = newNode;
}

void removeFromList(List** head)
{
    List* tempNode = nullptr;
    if (*head != nullptr)
    {
        tempNode = *head;
        *head = tempNode->next;
        delete tempNode;
    }
}
