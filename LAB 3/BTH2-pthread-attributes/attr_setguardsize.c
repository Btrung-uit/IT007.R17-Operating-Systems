// Minh hoa pthread_attr_setguardsize: dat vung bao ve o cuoi stack.
#include <pthread.h>
#include <stdio.h>

int main(void) {
    pthread_attr_t attr;
    size_t before, after;
    int rc;

    pthread_attr_init(&attr);
    pthread_attr_getguardsize(&attr, &before);
    rc = pthread_attr_setguardsize(&attr, 4096);      // Dat guard size la 1 trang 4 KiB.
    pthread_attr_getguardsize(&attr, &after);         // Doc lai de chung minh thay doi.
    printf("Guard size: %zu -> %zu bytes (rc = %d)\n", before, after, rc);
    pthread_attr_destroy(&attr);
    return rc != 0;
}
