// Copyright [2022] <OpenFlyGroup>
#include <stdio.h>
#include "./stack.h"

void push(stack **head, node value) {
    stack *temp = malloc(sizeof(stack));
    if (temp == NULL)
        exit(STACK_OVERFLOW);
    temp -> next = *head;
    temp -> value = value;
    *head = temp;
}

stack pop(stack **head) {
    stack *out;
    if ((*head) == NULL) {
        exit(STACK_UNDERFLOW);
    }
    out = *head;
    *head = (*head) -> next;
    return out;
}