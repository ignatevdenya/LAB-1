#include "furniture.h"
#include <iostream>
#include <string>
using namespace std;
Furniture::Furniture() {
	setlocale(LC_ALL, "Russian");
	//cout << "Вызов конструктора по умолчанию (Мебель)" << endl << endl;
	type = "";
	color = "";
	material = "";
	cost = 0;
	hight = 0;
	weight = 0;
	deep = 0;
}
Furniture::Furniture(const Furniture& other) {
	setlocale(LC_ALL, "Russian");
//	cout << "Вызов конструктора копирования (Мебель)" << endl << endl;
	*this = other;
}
Furniture::~Furniture() {
	setlocale(LC_ALL, "Russian");
	cout << "Вызов деструктора (Мебель)" << endl << endl;
}
void Furniture::setVal() {
	cin >> *this;
}
Furniture& Furniture::operator=(const Furniture& other) {
	this->type = other.type;
	this->color = other.color;
	this->material = other.material;
	this->cost = other.cost;
	this->hight = other.hight;
	this->weight = other.weight;
	this->deep = other.deep;
	return *this;
}
ofstream& operator<<(ofstream& fout, Furniture& obj) { // Функция записи в файл объекта (Мебель)
	fout << obj.type << " " << endl;
	fout << obj.color << " " << endl;
	fout << obj.material << " " << endl;
	fout << obj.cost << " " << endl;
	fout << obj.hight << " " << endl;
	fout << obj.weight << " " << endl;
	fout << obj.deep << " " << endl;
	fout << endl;
	return fout;
}
ifstream& operator>>(ifstream& fin, Furniture& obj) { // Функция чтения файла объекта (Мебель)
	fin >> obj.type >> obj.color >> obj.material >> obj.cost >> obj.hight >> obj.weight >> obj.deep;
	return fin;
}
ostream& operator<<(ostream& out, Furniture& obj) { // Функция вывода на экран данных объекта (Мебель)
	setlocale(LC_ALL, "Russian");
	out << "Тип: " << obj.type << endl;
	out << "Цвет: " << obj.color << endl;
	out << "Материал: " << obj.material << endl;
	out << "Стоимость: " << obj.cost << endl;
	out << "Высота: " << obj.hight << endl;
	out << "Ширина: " << obj.weight << endl;
	out << "Глубина: " << obj.deep << endl;
	return out;
}
istream& operator>>(istream& in, Furniture& obj) { // Функция ввода данных объекта (Мебель)
	setlocale(LC_ALL, "Russian");
	cout << "Введите данные:" << endl << endl;
	cout << "Тип: ";
	cin >> obj.type;
	cout << "Цвет: ";
	cin >> obj.color;
	cout << "Материал: ";
	cin >> obj.material;
	while (1) {
		cout << "Стоимость: ";
		cin >> obj.cost;
		if (cin.fail() || obj.cost < 0) {
			cout << "Некорректные данные, введите заново!" << endl;
			cin.clear();
			cin.ignore(10000, '\n');
			continue;
		}
		break;
	}
	while (1) {
		cout << "Высота: ";
		cin >> obj.hight;
		if (cin.fail() || obj.hight < 0) {
			cout << "Некорректные данные, введите заново!" << endl;
			cin.clear();
			cin.ignore(10000, '\n');
			continue;
		}
		break;
	}
	while (1) {
		cout << "Ширина: ";
		cin >> obj.weight;
		if (cin.fail() || obj.weight < 0) {
			cout << "Некорректные данные, введите заново!" << endl;
			cin.clear();
			cin.ignore(10000, '\n');
			continue;
		}
		break;
	}
	while (1) {
		cout << "Глубина: ";
		cin >> obj.deep;
		if (cin.fail() || obj.deep < 0) {
			cout << "Некорректные данные, введите заново!" << endl;
			cin.clear();
			cin.ignore(10000, '\n');
			continue;
		}
		break;
	}
	return in;
}
