// pthread_attr_getguardsize: lay kich thuoc vung bao ve stack.
#include <pthread.h>
#include <stdio.h>

int main(void) {
    pthread_attr_t attr;
    size_t size;
    pthread_attr_init(&attr);
    int rc = pthread_attr_getguardsize(&attr, &size); // Ghi guard size vao size.
    printf("guard size = %zu bytes, rc = %d\n", size, rc);
    pthread_attr_destroy(&attr);
    return rc != 0;
}
