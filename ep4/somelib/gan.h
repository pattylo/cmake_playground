#pragma once
#include <iostream>

namespace gan{
    void greet();

    template<typename T> 
    T add(T a, T b)
    {
        return a+b;
    }
}