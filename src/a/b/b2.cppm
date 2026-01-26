export module a.b:b2;

import std;

namespace a {
namespace b {
    export void func_b2() {
        std::println("Function func_b2 from module a.b:b2");
    }
} // namespace b
} // namespace a