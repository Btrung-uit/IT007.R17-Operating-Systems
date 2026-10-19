// pthread_attr_getstackaddr: lay dia chi stack. API nay da loi thoi trong POSIX.
#define _GNU_SOURCE
#include <pthread.h>
#include <stdio.h>

int main(void) {
    pthread_attr_t attr;
    void *address;
    pthread_attr_init(&attr);
    int rc = pthread_attr_getstackaddr(&attr, &address); // Ghi dia chi stack vao address.
    printf("stack address = %p, rc = %d (nen dung pthread_attr_getstack)\n", address, rc);
    pthread_attr_destroy(&attr);
    return rc != 0;
}
