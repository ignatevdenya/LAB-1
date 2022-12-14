#pragma once
#include "keeper.h"
#include "factory.h"
#include "furniture.h"
#include "car.h"
#include "worker.h"
#include <iostream>
using namespace std;
template <typename T> // T - ���, ��������� � ��������� �������
void menu(T& obj, string line) {
	int c;
	int i;
	bool flag = true;
	setlocale(LC_ALL, "Russian");
	while (flag) {
		system("cls");
		cout << "�������� ��������:  " << endl << endl;
		cout << "1 - �������� ������" << endl;
		cout << "2 - ������� ������" << endl;
		cout << "3 - ����� �� �����" << endl;
		cout << "4 - �������� ������" << endl;
		cout << "5 - ��������� � ����" << endl;
		cout << "6 - ����� �� �����" << endl;
		cout << "7 - �����" << endl << endl;
		cout << "�������� ��������: ";
		cin >> c;
		if (cin.fail() || c < 0 || c > 7) { // �������� �� ���������� ����
			c = -1;
			cin.clear();
			cin.ignore(10000, '\n');
		}
		system("cls");
		switch (c) {
		case 1:
			obj.push(); // ���������� �������
			system("pause");
			break;

		case 2: obj.display();
			cout << "�������� ��� ��������: ";
			cin >> i;
			obj.pop(i); // �������� �������
			system("pause");
			break;
		case 3:
			obj.display(); // ����� ������� �� �����
			system("pause");
			break;
		case 4:
			obj.display();
			cout << "�������� ��� ���������: ";
			cin >> i;
			obj.edit(i); // �������������� �������
			system("pause");
			break;
		case 5:
			obj.write(line); // ������ ������� � ����
			system("pause");
			break;
		case 6:
			obj.read(line); // ���������� ������� �� �����
			system("pause");
			break;
		case 7:
			flag = false; // �����
			break;
		default:
			cout << "������� �� 1 �� 7:" << endl << endl;
			system("pause");
			break;
		}
	}
}
