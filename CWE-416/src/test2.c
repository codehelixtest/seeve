#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#define SIZE 64

int main (){
    int abrt=0;
    int err=1;
if (err) {
    abrt = 1;
    free(ptr);
    ptr = NULL; // Set ptr to NULL after freeing
    char* ptr2 = (char*) malloc(2*sizeof(char));
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
