#include <iostream>
#include "vehicle.h"
#include<iostream>
#include<string>
#include"Bike.h"
#include"Car.h"
#include"Wagon.h"

int main()
{
	
	Car car("vesta", 1200000, 200, 80, 4);
	Bike bike("rider", 12000, 30, 20, 1);
	Wagon wagon("chuh_chuh", 100000, 40, 20, 2);
	car.priceTrack();
	car.timeTrack();
	bike.priceTrack();
	bike.timeTrack();
	wagon.priceTrack();
	wagon.timeTrack();
}

