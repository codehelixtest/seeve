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
void dangerous_func ( int* ptr , int a, int b) {
     int val = 0;
     if (!ptr) return;
     if(a) {
         *ptr += 2;
     } else {
         val = *ptr;
         free(ptr);
         ptr = NULL; // Set ptr to NULL after free to avoid use after free
     }
     if(b) {
         val += 5;
     } else {
         if (ptr) { // Check if ptr is not NULL before dereferencing
             val += *ptr;
         }
     }
     if(a) {
         free(ptr);
     }
     printf ("val = %i\n", val);
 }
         val += 5;
     } else {
         val += *ptr ; /* TP: use after free detected : ptr */
     }
     if(a) free(ptr) ;
     printf ("val = %i\n", val) ;
     }

int main () {
     /* Unsafe function call */
     dangerous_func(malloc(sizeof ( int)),0,0) ;
     return 0;
}
