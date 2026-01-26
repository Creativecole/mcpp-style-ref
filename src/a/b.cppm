export module a.b;

export import :b1;
export import :b2;

import std;

namespace a {
namespace b {

    export void func_ab() {
        std::println("Function func_ab from module a.b");
        func_b1();
        func_b2();
    }

} // namespace b
} // namespace a