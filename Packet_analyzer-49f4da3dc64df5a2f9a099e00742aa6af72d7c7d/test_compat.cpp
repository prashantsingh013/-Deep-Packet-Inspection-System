#include "optional_compat.h"
#include <iostream>

void thread_func(int x) {
    std::cout << "Thread running with " << x << std::endl;
}

int main() {
    std::mutex m;
    std::unique_lock<std::mutex> lock(m);
    std::cout << "Locked" << std::endl;
    std::thread t(thread_func, 42);
    t.join();
    return 0;
}
