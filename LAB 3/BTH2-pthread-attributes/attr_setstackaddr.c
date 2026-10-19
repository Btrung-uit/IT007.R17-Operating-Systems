// pthread_attr_setstackaddr: dat dia chi stack. API nay da loi thoi trong POSIX.
#define _GNU_SOURCE
#include <pthread.h>
#include <stdio.h>
#include <stdlib.h>

int main(void) {
    pthread_attr_t attr;
    void *address = malloc(1024 * 1024);
    if (address == NULL) return puts("Khong du bo nho."), 1;
    pthread_attr_init(&attr);
    int rc = pthread_attr_setstackaddr(&attr, address); // Chi dat dia chi; code moi dung pthread_attr_setstack.
    printf("Da dat stack address = %p, rc = %d\n", address, rc);
    pthread_attr_destroy(&attr);
    free(address);
    return rc != 0;
}
