export module mymod;
import std;

namespace mymod {
constexpr std::string_view invisible_string_view{"HELLO FROM MYMOD!"};
export void print_hello() {
    std::println("{}", invisible_string_view);
}
}  // namespace mymod
