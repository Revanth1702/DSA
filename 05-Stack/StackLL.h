#ifndef __STACK_LINKEDLIST_H
#define __STACKL_LINKEDLIST_H

typedef double ElementType;

struct Node;
typedef struct Node* NodePtr;
typedef NodePtr Stack;

struct Node {
    ElementType Elem;
    NodePtr Next;
};

#endif
