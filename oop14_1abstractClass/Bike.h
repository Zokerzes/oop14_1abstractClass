#pragma once
#include "vehicle.h"
#include<iostream>
#include<string>
class Bike :
    public vehicle
{
    Bike(string, int, int, int, int);
    virtual void timeTrack();
    virtual void priceTrack();
};

