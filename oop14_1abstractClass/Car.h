#pragma once
#include "vehicle.h"
#include<iostream>
#include<string>
using namespace std;
class Car :
    public vehicle
{
public:
    Car() {};
    Car(string, int, int, float,float);
    virtual void timeTrack();
    virtual void priceTrack();
};

