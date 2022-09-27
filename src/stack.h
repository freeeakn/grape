// Copyright [2022] <OpenFlyGroup>
#ifndef GRAPE_STACK_H
#define GRAPE_STACK_H
#define STACK_OVERFLOW  -100
#define STACK_UNDERFLOW -101
#define OUT_OF_MEMORY   -102
 
typedef int node;

typedef struct Stack {
    node value;
    struct Stack *next;
} stack;

void push(stack **head, node value);

#endif //GRAPE_STACK_H