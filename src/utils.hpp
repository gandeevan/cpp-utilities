#include <iostream> 
#include <chrono>
#include <random>

int getRandomNumber(int min, int max) {
    return min + rand()%(max-min+1);
}

bool getRandomBool() {
    return rand()%2;
}