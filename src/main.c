#include "emulator.h"
#include <stdio.h>


int main(int argc, char **argv) {
    if (argc == 1) {
        fprintf(stderr, "No game file was provided.");
        return 1;
    }

    if (argc > 2) {
        fprintf(stderr, "Too many game files were provided");
        return 1;
    }

    struct Emulator *emu = Emulator_init();
    Emulator_startup(emu, argv[1]);

    Emulator_loop(emu);
    Emulator_free(emu);

    return 0;
}
