#pragma once
#include <signal.h>

void disable_interrupts() {
    sigset_t mask;
    sigfillset(&mask);
    sigprocmask(SIG_BLOCK, &mask, NULL);
}

/**
 * Ativa a interrupção por fatores externos como
 * Ctrl C ou um erro
 */
void enable_interrupts() {
    sigset_t mask;
    sigemptyset(&mask);
    sigprocmask(SIG_SETMASK, &mask, NULL);
}