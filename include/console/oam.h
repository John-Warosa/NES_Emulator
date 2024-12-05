#ifndef OAM_H
#define OAM_H

#include "defines.h"

#define SIZE_OAM    256
#define SIZE_OAM_2  32
#define STEP_OAM    4


struct OAM {
    u8 mem[SIZE_OAM];
    u8 buffer[SIZE_OAM_2];
}


#endif //OAM_H
