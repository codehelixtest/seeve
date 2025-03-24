#include <stdlib.h>
#define SIZE 16
int main(){
free(ptr); ptr = NULL; // Ensure ptr is not freed again
    if (1) {
        free(ptr);
    }
    free(ptr);
    return 0;
}
