#include <stdio.h>
#include <stdlib.h>
#include <signal.h>
#include <unistd.h>
#include "global.h"

// Disable system interruptions (Ctrl C)
void di() {
    #ifdef __unix__
        sigset_t sigset;
        sigemptyset(&sigset);
        sigaddset(&sigset, SIGINT);
        sigaddset(&sigset, SIGTERM);
        sigprocmask(SIG_BLOCK, &sigset, NULL);
    #endif
    ram->write(GbMemory::IME,0);
}

void ei() {
    #ifdef __unix__
        sigset_t sigset;
        sigemptyset(&sigset);
        sigprocmask(SIG_UNBLOCK, &sigset, NULL);
    #endif
    ram->write(GbMemory::IME, 1);
}

void reti() {
    ei();
    throw "RETI: END ME!!";
}
