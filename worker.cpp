#include "worker.h"
#include <iostream>
#include <string>
using namespace std;
Worker::Worker() {
	setlocale(LC_ALL, "Russian");
//	cout << "����� ������������ �� ��������� (��������)" << endl << endl;
	fio = "";
	post = "";
	address = "";
	phone = "";
	pay = 0;
}
Worker::Worker(const Worker& other) {
	setlocale(LC_ALL, "Russian");
//	cout << "����� ������������ ����������� (��������)" << endl << endl;
	*this = other;
}
Worker::~Worker() {
	setlocale(LC_ALL, "Russian");
//	cout << "����� ����������� (��������)" << endl << endl;
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
ofstream& operator<<(ofstream& fout, Worker& obj) { // ������� ������ � ���� ������� (��������)
	fout << obj.fio << " " << endl;
	fout << obj.post << " " << endl;
	fout << obj.address << " " << endl;
	fout << obj.phone << " " << endl;
	fout << obj.pay << " " << endl;
	fout << endl;
	return fout;
}
ifstream& operator>>(ifstream& fin, Worker& obj) { // ������� ������ ����� ������� (��������)
	fin >> obj.fio >> obj.post >> obj.address >> obj.phone >> obj.pay;
	return fin;
}
ostream& operator<<(ostream& out, Worker& obj) { // ������� ������ �� ����� ������ ������� (��������)
	setlocale(LC_ALL, "Russian");
	out << "���: " << obj.fio << endl;
	out << "���������: " << obj.post << endl;
	out << "����� ����������: " << obj.address << endl;
	out << "�������: " << obj.phone << endl;
	out << "���������� �����: " << obj.pay << endl << endl;
	return out;
}
istream& operator>>(istream& in, Worker& obj) { // ������� ����� ������ ������� (��������)
	setlocale(LC_ALL, "Russian");
	cout << "������� ������:" << endl << endl;
	cout << "���: ";
	cin >> obj.fio;
	cout << "���������: ";
	cin >> obj.post;
	cout << "����� ����������: ";
	cin >> obj.address;
	cout << "�������: ";
	cin >> obj.phone;
	cout << "���������� �����: ";
	cin >> obj.pay;
	while (1) {
		if (cin.fail() || obj.pay < 0) { // �������� �� ������������ �����
			cout << "������������ ������, ������� ������!" << endl;
			cin.clear();
			cin.ignore(10000, '\n');
			continue;
		}
		break;
	}
	return in;
}
