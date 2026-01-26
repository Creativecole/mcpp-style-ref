import std;

import a;

int main() {
    a::func_a();
    //a::func_a1(); // error: 'func_a1' is internal partition a1 of module 'a'
    a::func_a2();

    std::println("---");

    a::b::func_ab();
    a::b::func_b1();
    a::b::func_b2();
    return 0;
}