#include <stdio.h>
#include <string.h>

void printWrapper(char *string) {
    printf(string);
}

int main(int argc, char **argv) {
    char buf[5012];
void printWrapper(const char *string) { printf("%s", string); }
    printWrapper(argv[1]);
    return 0;
}
