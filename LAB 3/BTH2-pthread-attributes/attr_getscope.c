// pthread_attr_getscope: lay pham vi tranh chap CPU cua thread.
#include <pthread.h>
#include <stdio.h>

int main(void) {
    pthread_attr_t attr;
    int scope;
    pthread_attr_init(&attr);
    int rc = pthread_attr_getscope(&attr, &scope); // Ghi scope vao bien scope.
    printf("scope = %s, rc = %d\n",
           scope == PTHREAD_SCOPE_SYSTEM ? "PTHREAD_SCOPE_SYSTEM" : "PTHREAD_SCOPE_PROCESS", rc);
    pthread_attr_destroy(&attr);
    return rc != 0;
}
