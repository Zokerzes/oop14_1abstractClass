#pragma once
#include "vehicle.h"
#include<iostream>
#include<string>
using namespace std;
class Car :
    public vehicle
{
    Car(string, int, int, int, int);
    virtual void timeTrack();
    virtual void priceTrack();
};

