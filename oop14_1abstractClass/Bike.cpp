#include "Bike.h"

Bike::Bike()
{
}

Bike::Bike(string nameType, int price, int track, float speed, float priceKm) :vehicle(nameType, price, track, speed, priceKm)
{
	this->nameType = nameType;
	this->price = price;
	this->track = track;
	this->speed = speed;
	this->priceKm = priceKm;
};

void Bike::timeTrack()
{
	float time_ = track / speed;
	cout << "BIKE: time to track " << time_ << endl;
}

void Bike::priceTrack()
{
	float price_ = priceKm * track;
	cout << "BIKE: price to track " << price_ << endl;
}
