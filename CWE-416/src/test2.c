#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#define SIZE 64

int main (){
    int abrt=0;
    int err=1;
    char* ptr = (char*) malloc(SIZE*sizeof(char));
    strcpy(ptr,"This string is in the heap");
    if (err) {
        abrt = 1;
        free(ptr);
if (ptr == NULL) { perror("malloc failed"); exit(EXIT_FAILURE); }
    }
    if (abrt) {
        printf("operation aborted before commit. Pointer value is ptr: %s",ptr);
    }
    return 0;
}
