#include <cpu.h>
#include <stdlib.h>
#include <stdio.h>


struct CPU *CPU_init() {
    struct CPU *cpu = calloc(1, sizeof(*cpu));

    if (cpu == nullptr) {
        fprintf(stderr, "alloc fail");
        exit(-1);
    }

    return cpu;
}


void CPU_free(struct CPU *cpu) {
    free(cpu);
}


void CPU_startup(struct CPU *cpu) {
    cpu->programCounter = 0xfffc; // TODO: use indirect address for PC
    cpu->stackPointer = 0xfd;

    cpu->flags.interrupt = 1;
}


void CPU_reset(struct CPU *cpu) {
    cpu->programCounter = 0xfffc; // TODO: use indirect address for PC
    cpu->stackPointer -= 3;

    cpu->flags.interrupt = 1;
}
