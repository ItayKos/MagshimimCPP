#ifndef LINKEDLIST_H
#define LINKEDLIST_H

typedef struct List
{
    unsigned int value;
    struct List* next;
} List;

// function adds a new node to the list
void addToList(List** head, unsigned int newValue);

// function removes the head node of the list
void removeFromList(List** head);

#endif // LINKEDLIST_H