// Copyright [2022] <OpenFlyGroup>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "../lib/general.h"
#include "../lib/lexer.h"

int main(int argc, char **argv) {
    switch (argc) {
        case 2:
            // open file
            normalaize(argv);
            FILE * in = fopen(argv[argc - 1], "r");
            // create a string for input code
            char *str = (char*)malloc(sizeof(char));
            // fill dynamic string by input file
            if (in == NULL) {
                perror("GRAPE ERROR 1: Nothing to do, try to create \'space.gr\'\n");
                exit(1);
            } else {
                int len = 0;
                fill(in, str, &len);
                printf("%s", str);
                lexer(str);
            }
            fclose(in);
            free(str);
            str = NULL;
            break;
        default:
            // while has no valid path
            perror("GRAPE ERROR 0: Command line has no additional arguments, try to create \'space.gr\'\n");
            exit(1);
            break;
    }
    return 0;
}