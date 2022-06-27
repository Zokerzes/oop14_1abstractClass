#pragma once
#include "vehicle.h"
#include<iostream>
#include<string>
class Wagon :
    public vehicle
{
public:
    Wagon();
    Wagon(string, int, int, float, float);
    virtual void timeTrack();
    virtual void priceTrack();
};

