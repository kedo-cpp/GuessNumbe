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
	string menu[2] = { "��������� ����", "���������� �� ����" };

	cout << "����: ������ ����� | by.kedo" << endl;
	
	for (int i = 0; i < 2; i++) {
		cout << i + 1 << ". " << menu[i] << endl;
	}

	cin >> response;

	if (response == 1)
	{
		int numberOne;
		int numberTwo;

		cout << "����� ����: ������ ����� | by.kedo" << endl;

		cout << "������� ������� �����: ";
		cin >> numberOne;

		cout << "������� ������ �����: "; 
		cin >> numberTwo;

		while (true)
		{
			int number;
			int x = rand() % (numberTwo - numberOne + 1) + numberOne;
			
			cout << "�������� ����� �� (" << numberOne << " - " << numberTwo << "): ";
			cin >> number;

			if (number == x) {
				cout << "����������: �� ������� �����, � ����� ���� �������� " << x << "." << endl;
			}

			else
			{
				cout << "������: �������� �� �� �� ������� �����, � ��������� ����� ���� " << x << "." << endl;
			}
		}
	}

	else if (response == 2)
	{
		cout << "\t������ ����� - ������������� ���� ��� �������� ����������� �������� � ��������. ������ ��������� ������� ���������� ����������� ����� � ������������ ���������. � ������ �������� ��������� ������������� ���������, ��������, ���� �� ���������� ����� ������ ��� ������ ����������� �������� ������. ��� ������ ������� ����������� ������, ��� ���� ��� ���������." << endl;
	}

	else
	{
		cout << "������: ������� �������� ���� � ������ ���������..." << endl;
		ResetProgramm();
	}

	return 0;
}