#include <stdlib.h>
#define SIZE 16
int main(){
char* ptr = (char*)malloc(SIZE);
if (ptr == NULL) {
    // Handle memory allocation failure
    return 1;
}
if (1) {
    free(ptr);
}
free(ptr);
    if (1) {
        free(ptr);
    }
    free(ptr);
    return 0;
}
