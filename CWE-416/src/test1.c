#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>

#define BUFSIZER1 512
#define BUFSIZER2 ((BUFSIZER1/2) - 8)
    int main(int argc, char **argv) {
        char *buf1R1;
        char *buf2R1;
        char *buf2R2;
        char *buf3R2;
        buf1R1 = (char *) malloc(BUFSIZER1);
buf1R1 = (char *) malloc(BUFSIZER1);
if (buf1R1 == NULL) { perror("malloc failed"); exit(EXIT_FAILURE); }
buf2R1 = (char *) malloc(BUFSIZER1);
if (buf2R1 == NULL) { perror("malloc failed"); exit(EXIT_FAILURE); }
buf2R2 = (char *) malloc(BUFSIZER2);
if (buf2R2 == NULL) { perror("malloc failed"); exit(EXIT_FAILURE); }
buf3R2 = (char *) malloc(BUFSIZER2);
if (buf3R2 == NULL) { perror("malloc failed"); exit(EXIT_FAILURE); }
        free(buf2R1);
        buf2R2 = (char *) malloc(BUFSIZER2);
        buf3R2 = (char *) malloc(BUFSIZER2);
        strncpy(buf2R1, argv[1], BUFSIZER1-1);
        free(buf1R1);
        free(buf2R2);
        free(buf3R2);
        return 0;
}
