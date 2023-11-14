void problemSolution1(float consumed_water) {
    float cost;
    // write your code here
#include <algorithm>

//Problem 1
//A water supply company charges the water consumption, as follows: a Fixed amount of $13.
//b. For the first 30 cubic metres, $0.4/m3.
//c. For the next 20 cubic metres, $0.12/m3.
//d. For the next 10 cubic metres, $1.4/m3. e. For every additional metre, $1.5/m3.
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

    return cost;
}
