// pthread_attr_init: khoi tao doi tuong thuoc tinh truoc khi su dung.
#include <pthread.h>
#include <stdio.h>

int main(void) {
    pthread_attr_t attr;
    int rc = pthread_attr_init(&attr);  // Tao attr voi cac gia tri mac dinh.
    printf("pthread_attr_init tra ve %d\n", rc);
    if (rc == 0) pthread_attr_destroy(&attr); // Don dep sau khi khoi tao thanh cong.
    return rc != 0;
}
