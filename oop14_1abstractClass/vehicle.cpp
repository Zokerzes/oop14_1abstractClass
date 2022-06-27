#include "vehicle.h"
#include<string>
vehicle::vehicle()
{
	nameType = "none";
	price = 1;
	track = 1;
	speed = 1;
	priceKm = 1;
}



vehicle::vehicle(string nameType, int price,int track, float speed, float priceKm)
{
	this->nameType = nameType;
	this->price = price;
	this->track = track;
	this->speed = speed;
	this->priceKm = priceKm;
}
