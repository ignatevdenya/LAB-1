#pragma once
#include <fstream>
#include "factory.h"
#include "keeper.h"
using namespace std;
class Worker : public Factory
{
private:
	double pay;
	string fio;
	string post;
	string address;
	string phone;
public:
	Worker();
	~Worker();
	Worker(const Worker&);
	void setVal() override;
	friend ofstream& operator << (ofstream& fout, Worker& obj);
	friend ifstream& operator >> (ifstream& fin, Worker& obj);
	friend ostream& operator << (ostream& out, Worker& obj);
	friend istream& operator >> (istream& in, Worker& obj);
	Worker& operator =(const Worker& other);
};
