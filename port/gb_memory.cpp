#include <bits/stdint-uintn.h>
#include "gb_memory.h"

int GbMemory::read(const int addr) {
    return memory[addr];
}

void GbMemory::write(int addr, int val)
{
    memory[addr] = val;
}
