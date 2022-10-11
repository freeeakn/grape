#include <stdlib.h>
#include "node_list.h"

struct node {
    char *id;
    void *cap;
    node *next;
};

node *init(char type, char data) {
    node *temp = (node*)malloc(sizeof(node));
    temp -> id = type;
    temp -> cap = data;
    temp -> next = NULL;
    return(temp);
}

node *attach(char type, char data, node *head) {
    node *temp = (node*)malloc(sizeof(node));
    temp -> id = type;
    temp -> cap = data;
    temp -> next = head;
    return(temp);
}

void *push(char type, char data, node *head) {
    node *temp = (node*)malloc(sizeof(node));
    temp -> id = type;
    temp -> cap = data;
    temp -> next = NULL;
    node *past = head;
    while (past -> next != NULL) past = past -> next;
    past -> next = temp;
}

node *push_n(char type, char data, int n, node *head) {
    node *past = head;
    int count = 1;
    while (count < n - 1 && past -> next != NULL) {
        past = past -> next;
        count++;
    }
    node *temp = (node*)malloc(sizeof(node));
    temp -> id = type;
    temp -> cap = data;
    temp -> next = past -> next;
    past -> next = temp;
    return head;
}

node *clear(node *head) {
    while (head != NULL) {
        node *past = head;
        head = head -> next;
        free(past); // Надо че то с этим делать)
    }
    return NULL;
}

node *pop(char data, node head) {
    void capacity = head;
    node *temp = head, *past = NULL;
    if (head == NULL) capacity = NULL;
    while (temp && temp -> cap != data) {
        past = temp;
        temp = temp -> next;
    }
    if (temp == head){
        capacity = temp -> next;
        free(head);
    }
    if (!temp) capacity = head;
    past -> next = temp -> next;
    free(temp);
    return capacity;
}