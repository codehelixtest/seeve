#include <stdlib.h>
#define SIZE 16
int main(){
    char* ptr = (char*)malloc (SIZE);
int main(){
    char* ptr = (char*)malloc(SIZE);
    if (ptr) {
        free(ptr);
        ptr = NULL; // Prevent double free
    }
    return 0;
}
        free(ptr);
    }
    free(ptr);
    return 0;
}
