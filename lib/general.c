// Copyright [2022] <OpenFlyGroup>
#include "./general.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *input() {
    int len = 0;
    int capacity = 1;
    char *s = (char*) malloc(sizeof(char));
    char c = getchar();
    while (c != '\n') {
        s[(len)++] = c;
        if (len >= capacity) {
            capacity *= 2;
            s = (char*) realloc(s, capacity * sizeof(char));
        }
        c = getchar();
    }
    s[len] = '\0';
    return s;
}

void fill(FILE *in, char *str, int *len) {
    int capacity = 1;
    char c = fgetc(in);
    while (c != EOF) {
        str[(*len)++] = c;
        if (*len >= capacity) {
            capacity *= 2;
            str = (char*) realloc(str, capacity * sizeof(char));
        }
        c = fgetc(in);
    }
    str[*len] = '\0';
}

void normalaize(char **argm) {
    argm[1][strlen(argm[1])] = '\0';
}