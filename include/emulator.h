#ifndef EMULATOR_H
#define EMULATOR_H

#include "console.h"
#include <stdio.h>


struct Emulator {
    struct Console *console;
    FILE *gameFile;

    bool running;
};


struct Emulator *Emulator_init();

void Emulator_free(struct Emulator *emu);

void Emulator_startup(struct Emulator *emu, char *filename);

void Emulator_loop(struct Emulator *emu);


#endif //EMULATOR_H
