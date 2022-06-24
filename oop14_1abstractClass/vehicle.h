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
	int speed;
	int priceKm;
public:
	//vehicle();
	vehicle(string,int,int,int,int);
	~vehicle() {};
	virtual void timeTrack() = 0;
	virtual void priceTrack() = 0;
};

