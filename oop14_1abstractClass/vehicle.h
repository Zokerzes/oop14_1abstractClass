#pragma once
#include<iostream>
#include<string>
using namespace std;
class vehicle
{
protected:
	string nameType;
	int price;
	int track;
	float speed;
	float priceKm;
public:
	vehicle();
	vehicle(string,int,int,float,float);
	~vehicle() {};
	virtual void timeTrack() = 0;
	virtual void priceTrack() = 0;
};

