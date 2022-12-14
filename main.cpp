#include <iostream>
#include "keeper.h"
#include "factory.h"
#include "furniture.h"
#include "car.h"
#include "menu.h"
#include "worker.h"

using namespace std;
int main() {
	setlocale(LC_ALL, "Russian");
	Keeper <Furniture> furniture;
	Keeper <Car> car;
	Keeper <Worker> worker;
	int button;
	bool flag = true; // ��� �������� ���������� ������� (���� ���������), ��� ����������� - ��� � ����
	while (flag) {
		system("cls"); // ���� �����, ����� ���� ������� �� ���������
		cout << "����: " << endl << endl;
		cout << "1 - ������" << endl;
		cout << "2 - ��������" << endl;
		cout << "3 - ������" << endl;
		cout << "4 - ����� �� ���������" << endl << endl;
		cout << "�������� �����: ";
		cin >> button;
		if (cin.fail()) { // �������� �� ���������� ����
			button = -1;
			cin.clear();
			cin.ignore(10000, '\n');
		}
		switch (button) {
		case 1:
			menu(furniture, "Furniture.txt"); // ����� ���� (������)
			break;
		case 2:
			menu(worker, "Worker.txt"); // ����� ���� (��������)
			break;
		case 3:
			menu(car, "Car.txt"); // ����� ���� (������)
			break;
		case 4:
			flag = false; // ����� �� ���������
			cout << "\n�����" << endl;
			break;
		default:
			cout << endl << "������������ ������, ������� ������!" << endl << endl; // �������� �� ���������� ����
			system("pause");
			break;
		}
	}
	return 0;
}
