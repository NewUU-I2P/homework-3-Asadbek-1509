#include <algorithm>
float problemSolution1(float consumed_water) {
    float cost = 0;
    cost = cost + 13;
    cost = cost + std::min(consumed_water, 30.0f) * 0.4f;
    if (consumed_water > 30) {
        consumed_water = consumed_water - 30;
    } else{
        return cost;
    }

    cost = cost + std::min(consumed_water, 20.0f) * 0.12f;
    if (consumed_water > 20) {
        consumed_water = consumed_water - 20;
    } else{
        return cost;
    }

    cost = cost + std::min(consumed_water, 10.0f) * 1.4f;
    if (consumed_water > 10) {
        consumed_water = consumed_water - 10;
    } else{
        return cost;
    }

    cost = cost + consumed_water * 1.5f;
    return cost;
}

   

