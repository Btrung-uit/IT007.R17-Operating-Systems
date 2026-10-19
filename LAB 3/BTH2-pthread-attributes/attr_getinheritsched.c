// pthread_attr_getinheritsched: lay cach thread moi nhan lich trinh.
#include <pthread.h>
#include <stdio.h>

int main(void) {
    pthread_attr_t attr;
    int inherit;
    pthread_attr_init(&attr);
    int rc = pthread_attr_getinheritsched(&attr, &inherit); // Ghi gia tri vao inherit.
    printf("inherit sched = %s, rc = %d\n",
           inherit == PTHREAD_INHERIT_SCHED ? "INHERIT_SCHED" : "EXPLICIT_SCHED", rc);
    pthread_attr_destroy(&attr);
    return rc != 0;
}
