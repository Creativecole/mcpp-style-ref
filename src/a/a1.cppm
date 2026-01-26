// internal partition a1 of module a
module a:a1;
//export module a:a1;

import std;

namespace a {

// error: 'export' may only occur after a module interface declaration
//export void func_a1();

void func_a1() {
    std::println("Function func_a1 from module a:a1");
}

} // namespace a