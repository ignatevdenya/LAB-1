#include "furniture.h"
#include <iostream>
#include <string>
using namespace std;
Furniture::Furniture() {
	setlocale(LC_ALL, "Russian");
	//cout << "����� ������������ �� ��������� (������)" << endl << endl;
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
//	cout << "����� ������������ ����������� (������)" << endl << endl;
	*this = other;
}
Furniture::~Furniture() {
	setlocale(LC_ALL, "Russian");
	cout << "����� ����������� (������)" << endl << endl;
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
ofstream& operator<<(ofstream& fout, Furniture& obj) { // ������� ������ � ���� ������� (������)
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
ifstream& operator>>(ifstream& fin, Furniture& obj) { // ������� ������ ����� ������� (������)
	fin >> obj.type >> obj.color >> obj.material >> obj.cost >> obj.hight >> obj.weight >> obj.deep;
	return fin;
}
ostream& operator<<(ostream& out, Furniture& obj) { // ������� ������ �� ����� ������ ������� (������)
	setlocale(LC_ALL, "Russian");
	out << "���: " << obj.type << endl;
	out << "����: " << obj.color << endl;
	out << "��������: " << obj.material << endl;
	out << "���������: " << obj.cost << endl;
	out << "������: " << obj.hight << endl;
	out << "������: " << obj.weight << endl;
	out << "�������: " << obj.deep << endl;
	return out;
}
istream& operator>>(istream& in, Furniture& obj) { // ������� ����� ������ ������� (������)
	setlocale(LC_ALL, "Russian");
	cout << "������� ������:" << endl << endl;
	cout << "���: ";
	cin >> obj.type;
	cout << "����: ";
	cin >> obj.color;
	cout << "��������: ";
	cin >> obj.material;
	while (1) {
		cout << "���������: ";
		cin >> obj.cost;
		if (cin.fail() || obj.cost < 0) {
			cout << "������������ ������, ������� ������!" << endl;
			cin.clear();
			cin.ignore(10000, '\n');
			continue;
		}
		break;
	}
	while (1) {
		cout << "������: ";
		cin >> obj.hight;
		if (cin.fail() || obj.hight < 0) {
			cout << "������������ ������, ������� ������!" << endl;
			cin.clear();
			cin.ignore(10000, '\n');
			continue;
		}
		break;
	}
	while (1) {
		cout << "������: ";
		cin >> obj.weight;
		if (cin.fail() || obj.weight < 0) {
			cout << "������������ ������, ������� ������!" << endl;
			cin.clear();
			cin.ignore(10000, '\n');
			continue;
		}
		break;
	}
	while (1) {
		cout << "�������: ";
		cin >> obj.deep;
		if (cin.fail() || obj.deep < 0) {
			cout << "������������ ������, ������� ������!" << endl;
			cin.clear();
			cin.ignore(10000, '\n');
			continue;
		}
		break;
	}
	return in;
}
