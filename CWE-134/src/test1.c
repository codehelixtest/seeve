#include <stdio.h>
#include <string.h>

void printWrapper(char *string) {
if (argv[1] != NULL) { printWrapper(argv[1]); }
}

int main(int argc, char **argv) {
    char buf[5012];
    memcpy(buf, argv[1], 5012);
    printWrapper(argv[1]);
    return 0;
}
