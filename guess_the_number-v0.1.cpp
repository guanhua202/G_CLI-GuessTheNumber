#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void start() {
	cout << "\n🎯 Угадай число\n";
	cout << "---------------------\n";
	cout << "1. Загадать число (Вы загадываете)\n";
	cout << "2. Угадать число (Компьютер загадывает)\n";
	cout << "3. Показать счёт\n";
	cout << "4. Выйти из игры\n";
	cout << "---------------------\n";
}

int main()
{
	start();

	int player1 = 0;
	int robot1 = 0;
	int choice = 0;

	do {
		cout << "Выберите действие: ";
		cin >> choice;

		// Действие: 1, Компьютер Угадывает
		if (choice == 1) {
			int new_num;
			int random_num = rand() % 10;

			cout << "Загадайте число: ";
			cin >> new_num;

			cout << "\nКомпьютер угадывает...\n";

			if (new_num == random_num) {
				robot1 += 1;
				cout << "Компьютер ввёл число " << random_num << "\n";
				cout << "Компьютер угадал!\n-----Счёт " << robot1 << ":" << player1 << "\n";
				start();
			}

			else if (!(new_num == random_num)) {
				cout << "Компьютер ввёл число " << random_num << "\n";
				cout << "Компьютер не угадал...\n";
				start();
			}
		} 

		else if (choice == 2)
		{
			int random_num = rand() % 10;
			int new_num;
			cout << "Угадайте число: ";
			cin >> new_num;
			
			if (new_num == random_num) {
				player1 += 1;
				cout << "Компьютер загадал число " << random_num << "\n";
				cout << "Вы угадали!\n-----Счёт " << robot1 << ":" << player1 << "\n";
				start();
			}

			else if (!(new_num == random_num)) {
				cout << "Компьютер загадал число " << random_num << "\n";
				cout << "Вы не угадали.\n";
				start();
			}
		}

		else if (choice == 3) {
			cout << "Компьютер: " << robot1 << "\n";
			cout << "Игрок: " << player1 << "\n";
			start();
		}
	} while (!(choice >= 4));

	cout << "До скорой встречи, создатель.\n";
}
