#include "Car.h"
#include "vehicle.h"
using namespace std;
Car::Car(string nameType, int price, int track, float speed, float priceKm):vehicle(nameType,price,track,speed,priceKm)
{
	this->nameType = nameType;
	this->price = price;
	this->track = track;
	this->speed = speed;
	this->priceKm = priceKm;
};
void Car::timeTrack()
{
	float time_ = track / speed;
	cout << "CAR: time to track " << time_<< endl;
}

void Car::priceTrack()
{
	float price_ = priceKm * track;
	cout << "CAR: price to track " << price_ << endl;
}
