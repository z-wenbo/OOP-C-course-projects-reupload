#pragma once
#include <iostream>
#include "vehicle.h"
#include <string>

using namespace std;

class Motor:  public Vehicle{

public:
	Motor(int, string);
    void describe();
    void sell();
};