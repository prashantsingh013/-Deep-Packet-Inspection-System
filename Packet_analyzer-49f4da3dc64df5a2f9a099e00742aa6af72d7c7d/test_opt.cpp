#include <experimental/optional>
#include <iostream>
int main() {
    std::experimental::optional<int> o = 5;
    if (o) std::cout << *o << std::endl;
    return 0;
}
