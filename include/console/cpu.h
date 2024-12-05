#ifndef CPU_H
#define CPU_H

#include <defines.h>


struct CPU {
    // registers
    u8 accumulator;
    u8 xRegister;
    u8 yRegister;

    // pointers
    u8 stackPointer;
    u16 programCounter;

    struct {
        flag carry      :   1;
        flag zero       :   1;
        flag interrupt  :   1;
        flag decimal    :   1;
        flag overflow   :   1;
        flag ngative    :   1;
        flag unused     :   2;
    } flags;
};


struct CPU *CPU_init();

void CPU_free(struct CPU *cpu);

void CPU_startup(struct CPU *cpu);

void CPU_reset(struct CPU *cpu);


#endif //CPU_H
