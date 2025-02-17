#include <stdlib.h>
#define SIZE 16
int main(){
    #include <stdlib.h>
    #define SIZE 16
    int main(){
        char* ptr = (char*)malloc (SIZE);
        if (ptr) {
            free(ptr);
        }
        return 0;
    }
    if (1) {
        free(ptr);
    }
    free(ptr);
    return 0;
}
