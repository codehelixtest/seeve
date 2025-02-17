#include <unistd.h>
#include <stdlib.h>
#define BLOCK_SIZE 16

char* getBlock(int fd) {
    char* buf = (char*) malloc(BLOCK_SIZE);
    if (!buf) {
        return NULL;
    }
    if (read(fd, buf, BLOCK_SIZE) != BLOCK_SIZE) {
char* getBlock(int fd) {
    char* buf = (char*) malloc(BLOCK_SIZE);
    if (!buf) {
        return NULL;
    }
    ssize_t bytesRead = read(fd, buf, BLOCK_SIZE);
    if (bytesRead != BLOCK_SIZE) {
        free(buf);
        return NULL;
    }
    return buf;
}
    }
    return buf;
}

int main(){
    char *buff;
    buff=getBlock(0);
    return 0;
}
