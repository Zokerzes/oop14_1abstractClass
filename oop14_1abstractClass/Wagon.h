#pragma once
#include "vehicle.h"
#include<iostream>
#include<string>
class Wagon :
    public vehicle
{
    Wagon(string, int, int, int, int);
    virtual void timeTrack();
    virtual void priceTrack();
};

