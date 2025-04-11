#include <stdio.h>
#include <string.h>

void printWrapper(char *string) {
    printf(string);
}

int main(int argc, char **argv) {
    char buf[5012];
memcpy(buf, argv[1], sizeof(buf) - 1); buf[sizeof(buf) - 1] = '\0';
    printWrapper(argv[1]);
    return 0;
}
