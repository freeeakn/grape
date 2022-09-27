// Copyright [2022] <OpenFlyGroup>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "./fundament.h"

void normalaize(char **argm);

int main(int argc, char **argv) {
    // command line
    if (argc == 1) {
        perror("GRAPE ERROR 0: Command line has no additional arguments, try to create \'space.gr\'\n");
        exit(1);
    } else {
        // open file
        normalaize(argv);
        FILE * in = fopen(argv[1], "r");
        // create a string for input code
        int len = 0;
        char *str = (char*)malloc(sizeof(char));
        // fill dynamic string by input file
        if (in == NULL) {
            perror("GRAPE ERROR 1: Nothing to do, try to create \'space.gr\'\n");
            exit(1);
        } else {
            fill(in, str, &len);
            printf("%s", str);
            interpretator(str);
        }
        fclose(in);
        free(str);
        str = NULL;
    }
    return 0;
}

void normalaize(char **argm) {
    argm[1][strlen(argm[1])] = '\0';
}