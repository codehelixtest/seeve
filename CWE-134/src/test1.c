#include <stdio.h>
#include <string.h>

void printWrapper(char *string) {
    printf(string);
}

int main(int argc, char **argv) {
    char buf[5012];
void printWrapper(const char *string) {
    printf("%s", string);
}

int main(int argc, char **argv) {
    char buf[5012];
    if (argc > 1 && strlen(argv[1]) < sizeof(buf)) {
        memcpy(buf, argv[1], strlen(argv[1]) + 1);
        printWrapper(buf);
    }
    return 0;
}
    printWrapper(argv[1]);
    return 0;
}
