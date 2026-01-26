export module a;

export import a.b;
export import :a2;

import std;
import :a1;

namespace a {

// error: exporting 'void a::func_a1@a:a1()' that does not have external linkage
//export using a::func_a1;

export void func_a() {
    std::println("Function func_a from module a");
    func_a1();
    func_a2();
}

} // namespace a