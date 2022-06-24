#include "Bike.h"

Bike::Bike(string, int, int, int, int) 
{
	this->nameType = nameType;
	this->price = price;
	this->track = track;
	this->speed = speed;
	this->priceKm = priceKm;
};

void Bike::timeTrack()
{
	int time_ = track / speed;
	cout << "BIKE: time to track " << time_ << endl;
}

void Bike::priceTrack()
{
	int price_ = priceKm * track;
	cout << "BIKE: price to track " << price_ << endl;
}
