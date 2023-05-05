#pragma once

class GbMemory {
    private:
        int memory[0x10000]; // Simulates the GameBoy memory (mods can expand it so it's like adding more ram)

    public:
        //lists specific memory maps.
        enum RAM_VALS {

            // IO RAM
            LCDC = 0xFF40,

            IME = 0xFFFF
        };

        int read(int addr);
        void write(int addr, int val);
};
