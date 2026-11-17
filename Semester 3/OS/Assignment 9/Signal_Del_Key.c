//Create a process that will generate the signal when del key is pressed.
#include <signal.h>
#include <stdio.h>
#include <stdlib.h>
void abc(int sig);
int main() {
    printf("Press <del> key\n");
    signal(SIGINT, abc);
    for(;;); // Infinite loop waiting for the signal
    return 0;
}
void abc(int sig) {
    printf("\nYou have pressed the <del> key\n");
    exit(0);
}
