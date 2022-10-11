#ifndef GRAPE_NODE_LIST_H
#define GRAPE_NODE_LIST_H

typedef struct node node;
node *init(char *type, char *data);
node *attach(char *type, char *data, node *head);
void push(char *type, char *data, node *head);
node *push_n(char *type, char *data, int n, node *head);
node *clear(node *head);
node *pop(char *data, node *head);

#endif //GRAPE_NODE_LIST_H
