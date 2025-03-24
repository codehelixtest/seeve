#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#define SIZE 64

int main (){
    int abrt=0;
    int err=1;
char* ptr = (char*) malloc(SIZE*sizeof(char));
if (ptr == NULL) {
    fprintf(stderr, "Memory allocation failed\n");
    exit(EXIT_FAILURE);
}
    strcpy(ptr,"This string is in the heap");
    if (err) {
        abrt = 1;
        free(ptr);
        char* ptr2 = (char*) malloc(2*sizeof(char));
    }
    if (abrt) {
        printf("operation aborted before commit. Pointer value is ptr: %s",ptr);
    }
    return 0;
}
