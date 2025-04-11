#include <stdlib.h>
#define SIZE 16
int main(){
    char* ptr = (char*)malloc (SIZE);
if (ptr) { free(ptr); }
        free(ptr);
    }
    free(ptr);
    return 0;
}
