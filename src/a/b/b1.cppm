export module a.b:b1;

import std;
import :b2;

namespace a {
namespace b {
    export void func_b1() {
        std::println("Function func_b1 from module a.b:b1");
        func_b2();
    }
} // namespace b
} // namespace a