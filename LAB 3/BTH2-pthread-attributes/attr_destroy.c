// pthread_attr_destroy: huy doi tuong thuoc tinh sau khi dung xong.
#include <pthread.h>
#include <stdio.h>

int main(void) {
    pthread_attr_t attr;
    pthread_attr_init(&attr);           // Phai khoi tao truoc khi huy.
    int rc = pthread_attr_destroy(&attr); // Huy attr, khong dung attr nua sau dong nay.
    printf("pthread_attr_destroy tra ve %d\n", rc);
    return rc != 0;
}
