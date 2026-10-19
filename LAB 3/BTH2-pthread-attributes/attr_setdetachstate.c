// Minh hoa pthread_attr_setdetachstate: dat thread o che do DETACHED.
#include <pthread.h>
#include <stdio.h>
#include <unistd.h>

static void *worker(void *arg) {
    (void)arg;
    puts("Thread da chay xong.");
    return NULL;
}

int main(void) {
    pthread_attr_t attr;
    pthread_t tid;
    int state, rc;

    pthread_attr_init(&attr);                         // Tao doi tuong thuoc tinh.
    pthread_attr_getdetachstate(&attr, &state);
    printf("Truoc: %s\n", state == PTHREAD_CREATE_JOINABLE ? "JOINABLE" : "DETACHED");

    rc = pthread_attr_setdetachstate(&attr, PTHREAD_CREATE_DETACHED);
    if (rc != 0) return printf("Loi setdetachstate: %d\n", rc), 1;
    pthread_attr_getdetachstate(&attr, &state);       // Kiem tra gia tri vua dat.
    printf("Sau: %s\n", state == PTHREAD_CREATE_JOINABLE ? "JOINABLE" : "DETACHED");

    pthread_create(&tid, &attr, worker, NULL);        // Thread tao ra se tu giai phong tai nguyen.
    pthread_attr_destroy(&attr);
    sleep(1);                                         // Khong pthread_join() voi detached thread.
    return 0;
}
