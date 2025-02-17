#include <stdio.h>
#include <stdlib.h>
void dangerous_func ( int* ptr , int a, int b) {
     int val = 0;
     if (! ptr) return;
     if(a) {
         *ptr+= 2;
     } else {
         val=*ptr ; /* uFP: Use of null pointer detected : ptr */
         free(ptr) ;
     }
     if(b) {
         val += 5;
     } else {
         val += *ptr ; /* TP: use after free detected : ptr */
     }
     if(a) free(ptr) ;
     printf ("val = %i\n", val) ;
     }

int main () {
     /* Unsafe function call */
void dangerous_func ( int* ptr , int a, int b) {
     int val = 0;
     if (!ptr) return;
     if(a) {
         *ptr += 2;
     } else {
         val = *ptr;
         free(ptr);
         return; // Exit after freeing to prevent further use
     }
     if(b) {
         val += 5;
     } else {
         // Do not dereference ptr here as it has been freed
         return; // Exit to prevent use after free
     }
     if(a) free(ptr);
     printf ("val = %i\n", val);
 }
     return 0;
}
