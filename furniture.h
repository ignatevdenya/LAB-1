#pragma once
#pragma once
#include <fstream>
#include "keeper.h"
#include "factory.h"
using namespace std;
class Furniture : public Factory
{
private:
	double hight;
	double weight;
	double deep;
	double cost;
	string type;
	string color;
	string material;
public:
	Furniture();
	Furniture(const Furniture& other);
	~Furniture();
	void setVal() override;
	friend ofstream& operator << (ofstream& fout, Furniture& obj);
	friend ifstream& operator >> (ifstream& fin, Furniture& obj);
	friend ostream& operator << (ostream& out, Furniture& obj);
	friend istream& operator >> (istream& in, Furniture& obj);
	Furniture& operator =(const Furniture& other);
};
