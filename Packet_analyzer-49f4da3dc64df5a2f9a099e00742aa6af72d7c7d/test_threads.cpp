#include <shared_mutex>
#include <iostream>
int main() {
#ifdef _GLIBCXX_HAS_GTHREADS
    std::cout << "Has gthreads" << std::endl;
#endif
    return 0;
}
