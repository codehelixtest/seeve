/* An example of an ERROR for some 64-bit architectures,
if "unsigned int" is 32 bits and "size_t" is 64 bits: */
#include <unistd.h>
#include <stdlib.h>
#include <stdlib.h>
void *mymalloc(unsigned int size) { return malloc(size); }

int main()
{
    char *buf;
    size_t len;
    if (read(0, &len, sizeof(len)) <= 0 || len > UINT_MAX) {
        // Handle error: invalid length
        return 1;
    }
    buf = mymalloc(len);
    if (buf == NULL) {
        // Handle malloc failure
        return 1;
    }
    read(0, buf, len);
    return 0;
}

int main()
{
    char *buf;
    size_t len;
    read(0, &len, sizeof(len));
    /* we forgot to check the maximum length */
    /* 64-bit size_t gets truncated to 32-bit unsigned int */
    buf = mymalloc(len);
    read(0, buf, len);
    return 0;
}
