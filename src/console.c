#include "console.h"
#include <stdlib.h>
#include <stdio.h>


struct Console *Console_init() {
    struct Console *console = malloc(sizeof(*console));

    if (console == nullptr) {
        fprintf(stderr, "alloc fail");
        exit(-1);
    }

    

    return console;
}

void Console_free(struct Console *console) {
    free(console);
}

void Console_startup(struct Console *console) {

}

void Console_reset(struct Console *console);
