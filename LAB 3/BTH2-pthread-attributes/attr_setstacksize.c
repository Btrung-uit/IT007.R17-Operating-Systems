// Minh hoa pthread_attr_setstacksize: dat kich thuoc stack cho thread tao sau do.
#include <pthread.h>
#include <stdio.h>

int main(void) {
    pthread_attr_t attr;
    size_t before, after;
    int rc;

    pthread_attr_init(&attr);
    pthread_attr_getstacksize(&attr, &before);
    rc = pthread_attr_setstacksize(&attr, 1024 * 1024); // Dat stack 1 MiB, lon hon PTHREAD_STACK_MIN.
    pthread_attr_getstacksize(&attr, &after);
    printf("Stack size: %zu -> %zu bytes (rc = %d)\n", before, after, rc);
    pthread_attr_destroy(&attr);
    return rc != 0;
}
