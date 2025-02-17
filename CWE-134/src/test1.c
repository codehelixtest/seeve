#include <stdio.h>
#include <string.h>

void printWrapper(char *string) {
if (argc > 1 && argv[1] != NULL) { memcpy(buf, argv[1], 5012); printWrapper(argv[1]); } else { printf("No input provided\n"); }
}

int main(int argc, char **argv) {
    char buf[5012];
    memcpy(buf, argv[1], 5012);
    printWrapper(argv[1]);
    return 0;
}
