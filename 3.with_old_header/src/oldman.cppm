module;
#define STRIP_PREFIX
#include "oldman.h"
export module oldman;

export namespace oldman {
void say() {
    print_hello();
}
}  // namespace oldman
