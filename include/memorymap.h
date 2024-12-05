#ifndef MEMORYMAP_H
#define MEMORYMAP_H


enum MemoryMap {
    BEGIN_RAM               = 0x0000,   END_RAM             = 0x07ff,
    BEGIN_PPU               = 0x2000,   END_PPU             = 0x2007,
    BEGIN_APU_IO            = 0x4000,   END_PPU_IO          = 0x4017,
    BEGIN_APU_IO_DISABLED   = 0x4018,   END_PPU_IO_DISABLED = 0x401f,
    BEGIN_UNMAPPED          = 0x4200,   END_UNMAPPED        = 0xffff,
};


#endif //MEMORYMAP_H
