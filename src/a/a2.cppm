export module a:a2;

//gcc15.1: error: a:a1: error: interface partition is not exported
//import :a1;
import :a1; // fixed/workaround: export the imported partition

import std;

namespace a {

export void func_a2() {
    std::println("Function func_a2 from module a:a2");
    func_a1();
}

} // namespace a