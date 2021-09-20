#pragma once
#include <iostream>
#include "engine.h"
#include "wheel.h"
#include <string>

using namespace std;

class Vehicle {
protected:
    Engine engine;
    Wheel wheels;
public:
	Vehicle(int, string);
    Vehicle(int, string, int);
    void describe();
};