// pthread_attr_getstacksize: lay kich thuoc stack cua thread se tao.
#include <pthread.h>
#include <stdio.h>

int main(void) {
    pthread_attr_t attr;
    size_t size;
    pthread_attr_init(&attr);
    int rc = pthread_attr_getstacksize(&attr, &size); // Ghi kich thuoc stack vao size.
    printf("stack size = %zu bytes, rc = %d\n", size, rc);
    pthread_attr_destroy(&attr);
    return rc != 0;
}
