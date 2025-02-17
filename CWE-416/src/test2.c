#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#define SIZE 64

int main (){
    int abrt=0;
    int err=1;
    char* ptr = (char*) malloc(SIZE*sizeof(char));
strncpy(ptr, "This string is in the heap", SIZE - 1); ptr[SIZE - 1] = '\0';
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
