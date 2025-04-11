#include <stdio.h>
#include <string.h>

void printWrapper(char *string) {
    printf(string);
}

int main(int argc, char **argv) {
    char buf[5012];
if (argv[1] != NULL) { printWrapper(argv[1]); }
    printWrapper(argv[1]);
    return 0;
}
