#include "worker.h"
#include <iostream>
#include <string>
using namespace std;
Worker::Worker() {
	setlocale(LC_ALL, "Russian");
//	cout << "Вызов конструктора по умолчанию (Работник)" << endl << endl;
	fio = "";
	post = "";
	address = "";
	phone = "";
	pay = 0;
}
Worker::Worker(const Worker& other) {
	setlocale(LC_ALL, "Russian");
//	cout << "Вызов конструктора копирования (Работник)" << endl << endl;
	*this = other;
}
Worker::~Worker() {
	setlocale(LC_ALL, "Russian");
//	cout << "Вызов деструктора (Работник)" << endl << endl;
}
void Worker::setVal() {
	cin >> *this;
}
Worker& Worker::operator=(const Worker& other) {
	this->fio = other.fio;
	this->post = other.post;
	this->address = other.address;
	this->phone = other.phone;
	this->pay = other.pay;
	return *this;
}
ofstream& operator<<(ofstream& fout, Worker& obj) { // Функция записи в файл объекта (Работник)
	fout << obj.fio << " " << endl;
	fout << obj.post << " " << endl;
	fout << obj.address << " " << endl;
	fout << obj.phone << " " << endl;
	fout << obj.pay << " " << endl;
	fout << endl;
	return fout;
}
ifstream& operator>>(ifstream& fin, Worker& obj) { // Функция чтения файла объекта (Работник)
	fin >> obj.fio >> obj.post >> obj.address >> obj.phone >> obj.pay;
	return fin;
}
ostream& operator<<(ostream& out, Worker& obj) { // Функция вывода на экран данных объекта (Работник)
	setlocale(LC_ALL, "Russian");
	out << "ФИО: " << obj.fio << endl;
	out << "Должность: " << obj.post << endl;
	out << "Адрес проживания: " << obj.address << endl;
	out << "Телефон: " << obj.phone << endl;
	out << "Заработная плата: " << obj.pay << endl << endl;
	return out;
}
istream& operator>>(istream& in, Worker& obj) { // Функция ввода данных объекта (Работник)
	setlocale(LC_ALL, "Russian");
	cout << "Введите данные:" << endl << endl;
	cout << "ФИО: ";
	cin >> obj.fio;
	cout << "Должность: ";
	cin >> obj.post;
	cout << "Адрес проживания: ";
	cin >> obj.address;
	cout << "Телефон: ";
	cin >> obj.phone;
	cout << "Заработная плата: ";
	cin >> obj.pay;
	while (1) {
		if (cin.fail() || obj.pay < 0) { // Проверка на правильность ввода
			cout << "Некорректные данные, введите заново!" << endl;
			cin.clear();
			cin.ignore(10000, '\n');
			continue;
		}
		break;
	}
	return in;
}
