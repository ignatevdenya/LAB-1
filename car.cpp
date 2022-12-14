#include "car.h"
#include <iostream>
#include <string>
using namespace std;
Car::Car() {
	setlocale(LC_ALL, "Russian");
//	cout << "Вызов конструктора по умолчанию (Машина)" << endl << endl;
	marka = "";
	model = "";
	state_number = "";
}
Car::Car(const Car& other) {
	setlocale(LC_ALL, "Russian");
//	cout << "Вызов конструктора копирования (Машина)" << endl << endl;
	*this = other;
}
Car::~Car() {
	setlocale(LC_ALL, "Russian");
//	cout << "Вызов деструктора (Машина)" << endl << endl;
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
ofstream& operator<<(ofstream& fout, Car& obj) { // Функция записи в файл объекта (Машина)
	fout << obj.marka << " " << endl;
	fout << obj.model << " " << endl;
	fout << obj.state_number << " " << endl;
	fout << endl;
	return fout;
}
ifstream& operator>>(ifstream& fin, Car& obj) { // Функция чтения файла объекта (Машина)
	fin >> obj.marka >> obj.model >> obj.state_number;
	return fin;
}
ostream& operator<<(ostream& out, Car& obj) { // Функция вывода на экран данных объекта (Машина)
	setlocale(LC_ALL, "Russian");
	out << "Марка: " << obj.marka << endl;
	out << "Модель: " << obj.model << endl;
	out << "Гос. номер: " << obj.state_number << endl;
	return out;
}
istream& operator>>(istream& in, Car& obj) { // Функция ввода данных объекта (Машина)
	setlocale(LC_ALL, "Russian");
	cout << "Введите данные:" << endl << endl;
	cout << "Марка: ";
	cin >> obj.marka;
	cout << "Модель: ";
	cin >> obj.model;
	cout << "Гос. номер: ";
	cin >> obj.state_number;
	return in;
}
