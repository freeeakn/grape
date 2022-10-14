#include "lexer.h"
#include "node_list.h"
#include <string.h>

node *lexer(char *str) {
    char *buff = (char*)malloc(sizeof(char) * strlen(str));
    char *test = "test";
    node *temp = NULL;
    int count1 = 0;
    int count2 = 0;
    while (count1 < strlen(str)) {
        if (str[count] = 32) {
            push(test, buff, temp);
            buff = NULL;
            count2 = 0;
        }
        buff[count2] = str[count1];
        count1++;
    }
    free(buff);
    buff = NULL;
    return temp:
}