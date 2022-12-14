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
	bool flag = true; // Для проверки логических условий (флаг состояний), как выключатель - ВКЛ и ВЫКЛ
	while (flag) {
		system("cls"); // Ждет ввода, чтобы окно консоли не закрылось
		cout << "Меню: " << endl << endl;
		cout << "1 - Мебель" << endl;
		cout << "2 - Работник" << endl;
		cout << "3 - Машина" << endl;
		cout << "4 - Выход из программы" << endl << endl;
		cout << "Выберите пункт: ";
		cin >> button;
		if (cin.fail()) { // Проверка на правильный ввод
			button = -1;
			cin.clear();
			cin.ignore(10000, '\n');
		}
		switch (button) {
		case 1:
			menu(furniture, "Furniture.txt"); // Вызов меню (Мебель)
			break;
		case 2:
			menu(worker, "Worker.txt"); // Вызов меню (Работник)
			break;
		case 3:
			menu(car, "Car.txt"); // Вызов меню (Машина)
			break;
		case 4:
			flag = false; // Выход из программы
			cout << "\nКонец" << endl;
			break;
		default:
			cout << endl << "Некорректные данные, введите заново!" << endl << endl; // Проверка на правильный ввод
			system("pause");
			break;
		}
	}
	return 0;
}
