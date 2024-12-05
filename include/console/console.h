#ifndef CONSOLE_H
#define CONSOLE_H

#include "cpu.h"
#include "ppu.h"
#include "ram.h"
#include "apu.h"


struct Console {
    struct CPU *cpu;
    struct PPU *ppu;
    struct APU *apu;
    struct RAM *ram;
};


struct Console *Console_init();

void Console_free(struct Console *console);

void Console_startup(struct Console *console);

void Console_reset(struct Console *console);


#endif //CONSOLE_H
