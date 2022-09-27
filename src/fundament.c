// Copyright [2022] <OpenFlyGroup>
#include "./fundament.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void interpretator(char *str) {
    int i = 0;
    char buf[10];
    while (str[i] != ' ') {
        buf[i] = str[i];
        i++;
    }
    // print
    if (buf[0] == '-' && (buf[1] == 'p' || buf[1] == 'P')) {
        int k = strlen(buf);
        while (str[k] != '\n') {
            printf("%c", str[k]);
            k++;
        }
    }
    // input
    if (buf[0] == '-' && (buf[1] == 'i' || buf[1] == 'I')) {
        char *write = input();
        printf("%s", write);
        free(write);
        write = NULL;
    }
}

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