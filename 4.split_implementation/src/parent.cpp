module family;
import std;

void father_say() {
    std::println("I AM A MAN!");
}

void mother_say() {
    std::println("I AM A WOMAN!");
}

void family::parent_say() {
    father_say();
    mother_say();
}
