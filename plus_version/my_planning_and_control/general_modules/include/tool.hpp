#pragma once
#include <iostream>
#include <math.h>


// 限制函数
template<typename T>
T clamp(const T value, T bound1, T bound2)
{
    if (bound1 > bound2)
    {
        std::swap(bound1, bound2);
    }

    if ( value < bound1)
    {
        return bound1;
    }
    else if(value > bound2)
    {
        return bound2;
    }

    return value;
}

// 角度标准化
double normalize_angle(const double angle);



