#include "emulator.h"
#include <stdlib.h>


struct Emulator *Emulator_init() {
    struct Emulator *emu = malloc(sizeof(*emu));

    if (emu == nullptr) {
        fprintf(stderr, "alloc fail");
        exit(-1);
    }

    emu->console = Console_init();

    return emu;
}


void Emulator_free(struct Emulator *emu) {
    Console_free(emu->console);
    fclose(emu->gameFile);

    free(emu);
}


void Emulator_startup(struct Emulator *emu, char *filename) {
    FILE *file = fopen("r", filename);

    if (file == nullptr) {
        fprintf(stderr, "File does not exist.");
        exit(-1);
    }

    Console_startup(emu->console);
    emu->gameFile = file;
    emu->running = true;
}


void Emulator_loop(struct Emulator *emu) {

}
