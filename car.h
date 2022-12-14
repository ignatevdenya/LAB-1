#pragma once
#include <fstream>
#include "factory.h"
#include "keeper.h"
using namespace std;
class Car : public Factory {
private:
	string marka;
	string model;
	string state_number;
public:
	Car();
	~Car();
	Car(const Car&);
	void setVal() override;
	friend ofstream& operator << (ofstream& fout, Car& obj);
	friend ifstream& operator >> (ifstream& fin, Car& obj);
	friend ostream& operator << (ostream& out, Car& obj);
	friend istream& operator >> (istream& in, Car& obj);
	Car& operator =(const Car& other);
};
