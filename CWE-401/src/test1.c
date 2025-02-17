#include <unistd.h>
#include <stdlib.h>
#define BLOCK_SIZE 16

char* getBlock(int fd) {
char* getBlock(int fd) {
    char* buf = (char*) malloc(BLOCK_SIZE);
    if (!buf) {
        return NULL;
    }
    if (read(fd, buf, BLOCK_SIZE) != BLOCK_SIZE) {
        free(buf); // Freeing the buffer on read failure
        return NULL;
    }
    return buf;
}

int main(){
    char *buff;
    buff = getBlock(0);
    if (buff) {
        // Use the buffer
        free(buff); // Freeing the buffer after use
    }
    return 0;
}
    if (!buf) {
        return NULL;
    }
    if (read(fd, buf, BLOCK_SIZE) != BLOCK_SIZE) {
        return NULL;
    }
    return buf;
}

int main(){
    char *buff;
    buff=getBlock(0);
    return 0;
}
