#pragma once
#include "vehicle.h"
#include<iostream>
#include<string>
class Bike :
    public vehicle
{
public:
    Bike();
    Bike(string, int, int, float, float);
    virtual void timeTrack();
    virtual void priceTrack();
};

