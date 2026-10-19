// pthread_attr_getschedpolicy: lay chinh sach lich trinh cua attr.
#include <pthread.h>
#include <sched.h>
#include <stdio.h>

int main(void) {
    pthread_attr_t attr;
    int policy;
    pthread_attr_init(&attr);
    int rc = pthread_attr_getschedpolicy(&attr, &policy); // Ghi policy vao bien policy.
    printf("policy = %d (SCHED_OTHER = %d), rc = %d\n", policy, SCHED_OTHER, rc);
    pthread_attr_destroy(&attr);
    return rc != 0;
}
