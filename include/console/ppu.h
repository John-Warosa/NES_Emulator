#ifndef PPU_H
#define PPU_H

#include <defines.h>

#define NUM_PPU_REG 9


enum PPU_REGISTERS {
    PPUCTRL,
    PPUMASK,
    PPUSTATUS,
    OAMADDR,
    OAMDATA,
    PPUSCROLL,
    PPUADDR,
    PPUDATA,
    OAMDMA,
};


struct PPU {
    // registers
    u8 registers[NUM_PPU_REG];

    // internal registers
    u8 vRegister;
    u8 tRegister;
    u8 xRegister;
    u8 wRegister;

    // OAM
};


#endif //PPU_H
