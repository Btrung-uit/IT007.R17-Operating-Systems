// pthread_attr_getschedparam: lay priority trong thuoc tinh lich trinh.
#include <pthread.h>
#include <sched.h>
#include <stdio.h>

int main(void) {
    pthread_attr_t attr;
    struct sched_param param;
    pthread_attr_init(&attr);
    int rc = pthread_attr_getschedparam(&attr, &param); // Ghi priority vao param.
    printf("sched_priority = %d, rc = %d\n", param.sched_priority, rc);
    pthread_attr_destroy(&attr);
    return rc != 0;
}
