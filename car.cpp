#include "car.h"
#include <iostream>
#include <string>
using namespace std;
Car::Car() {
	setlocale(LC_ALL, "Russian");
//	cout << "����� ������������ �� ��������� (������)" << endl << endl;
	marka = "";
	model = "";
	state_number = "";
}
Car::Car(const Car& other) {
	setlocale(LC_ALL, "Russian");
//	cout << "����� ������������ ����������� (������)" << endl << endl;
	*this = other;
}
Car::~Car() {
	setlocale(LC_ALL, "Russian");
//	cout << "����� ����������� (������)" << endl << endl;
}
void Car::setVal() {
	cin >> *this;
}
Car& Car::operator=(const Car& other) {
	this->marka = other.marka;
	this->model = other.model;
	this->state_number = other.state_number;
	return *this;
}
ofstream& operator<<(ofstream& fout, Car& obj) { // ������� ������ � ���� ������� (������)
	fout << obj.marka << " " << endl;
	fout << obj.model << " " << endl;
	fout << obj.state_number << " " << endl;
	fout << endl;
	return fout;
}
ifstream& operator>>(ifstream& fin, Car& obj) { // ������� ������ ����� ������� (������)
	fin >> obj.marka >> obj.model >> obj.state_number;
	return fin;
}
ostream& operator<<(ostream& out, Car& obj) { // ������� ������ �� ����� ������ ������� (������)
	setlocale(LC_ALL, "Russian");
	out << "�����: " << obj.marka << endl;
	out << "������: " << obj.model << endl;
	out << "���. �����: " << obj.state_number << endl;
	return out;
}
istream& operator>>(istream& in, Car& obj) { // ������� ����� ������ ������� (������)
	setlocale(LC_ALL, "Russian");
	cout << "������� ������:" << endl << endl;
	cout << "�����: ";
	cin >> obj.marka;
	cout << "������: ";
	cin >> obj.model;
	cout << "���. �����: ";
	cin >> obj.state_number;
	return in;
}
