#ifndef OPTIONAL_COMPAT_H
#define OPTIONAL_COMPAT_H

#include <vector>
#include <string>

namespace std {
    template<typename T>
    class optional {
        T value;
        bool has_val;
    public:
        optional() : has_val(false) {}
        optional(nullopt_t) : has_val(false) {}
        optional(const T& v) : value(v), has_val(true) {}
        bool has_value() const { return has_val; }
        operator bool() const { return has_val; }
        T& operator*() { return value; }
        const T& operator*() const { return value; }
        T& value() { return value; }
        const T& value() const { return value; }
    };
    
    struct nullopt_t {};
    static const nullopt_t nullopt;
}

// ... dummy shared_mutex ...
#endif
