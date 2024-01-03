#include <iostream>
#include <random>
#include <Windows.h>
using namespace std;

void ResetProgramm() {
	Sleep(1500);
	system("main.exe");
}

int main() {
	setlocale(LC_ALL, "Rus");

	int response;
	string menu[2] = { "Запустить игру", "Информация об игре" };

	cout << "ИГРА: Угадай число | by.kedo" << endl;
	
	for (int i = 0; i < 2; i++) {
		cout << i + 1 << ". " << menu[i] << endl;
	}

	cin >> response;

	if (response == 1)
	{
		int numberOne;
		int numberTwo;

		cout << "СТАРТ ИГРА: Угадай число | by.kedo" << endl;

		cout << "Введите первоче число: ";
		cin >> numberOne;

		cout << "Введите второе число: "; 
		cin >> numberTwo;

		while (true)
		{
			int number;
			int x = rand() % (numberTwo - numberOne + 1) + numberOne;
			
			cout << "Выберите число от (" << numberOne << " - " << numberTwo << "): ";
			cin >> number;

			if (number == x) {
				cout << "ПОЗДРАВЛЯЮ: Вы угадали число, а число было загадано " << x << "." << endl;
			}

			else
			{
				cout << "ОШИБКА: Простите но вы не угадали число, а загадоное число было " << x << "." << endl;
			}
		}
	}

	else if (response == 2)
	{
		cout << "\tУгадай число - захватывающая игра для развития логического мышления и интуиции. Игроку предстоит угадать загаданное компьютером число в определенном диапазоне. С каждой попыткой компьютер предоставляет подсказки, указывая, было ли загаданное число больше или меньше предыдущего варианта игрока. Чем меньше попыток потребуется игроку, тем выше его результат." << endl;
	}

	else
	{
		cout << "ОШИБКА: Данного варианта нету в списке программы..." << endl;
		ResetProgramm();
	}

	return 0;
}