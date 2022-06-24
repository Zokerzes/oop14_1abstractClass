#include "Wagon.h"
Wagon::Wagon(string, int, int, int, int) 
{
	this->nameType = nameType;
	this->price = price;
	this->track = track;
	this->speed = speed;
	this->priceKm = priceKm;
}

void Wagon::timeTrack()
{
	int time_ = track / speed;
	cout << "WAGON: time to track " << time_ << endl;
}

void Wagon::priceTrack()
{
	int price_ = priceKm * track;
	cout << "WAGON: price to track " << price_ << endl;
}
