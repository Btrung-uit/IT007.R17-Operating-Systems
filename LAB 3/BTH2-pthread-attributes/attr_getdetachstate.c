// pthread_attr_getdetachstate: lay trang thai JOINABLE hoac DETACHED.
#include <pthread.h>
#include <stdio.h>

int main(void) {
    pthread_attr_t attr;
    int state;
    pthread_attr_init(&attr);
    int rc = pthread_attr_getdetachstate(&attr, &state); // Ghi trang thai vao state.
    printf("detach state = %s, rc = %d\n",
           state == PTHREAD_CREATE_JOINABLE ? "JOINABLE" : "DETACHED", rc);
    pthread_attr_destroy(&attr);
    return rc != 0;
}
