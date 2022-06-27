#include "Wagon.h"
Wagon::Wagon()
{
}
Wagon::Wagon(string nameType, int price, int track, float speed, float priceKm) :vehicle(nameType, price, track, speed, priceKm)
{
	this->nameType = nameType;
	this->price = price;
	this->track = track;
	this->speed = speed;
	this->priceKm = priceKm;
}

void Wagon::timeTrack()
{
	float time_ = track / speed;
	cout << "WAGON: time to track " << time_ << endl;
}

void Wagon::priceTrack()
{
	float price_ = priceKm * track;
	cout << "WAGON: price to track " << price_ << endl;
}
