module family;
import std;

void son_say() {
    std::println("I AM A BOY!");
}

void daughter_say() {
    std::println("I AM A GIRL!");
}

void family::children_say() {
    son_say();
    daughter_say();
}
