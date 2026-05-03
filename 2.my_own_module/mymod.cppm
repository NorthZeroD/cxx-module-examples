export module mymod;

import std;

namespace mymod {

std::string invisible_string{"HELLO FROM MYMOD!"};

export void print_hello() {
    std::println("{}", invisible_string);
}

}  // namespace mymod
