#ifndef GRAPE_NODE_LIST_H
#define GRAPE_NODE_LIST_H

typedef struct node_list node;
node *init(char data);
node *attach(char data, node *head);
void *push(char data, node *head);
node *push_n(char data, int n, node *head);
node *clear(node *head);
node *pop(char data, node head);

#endif //GRAPE_NODE_LIST_H
