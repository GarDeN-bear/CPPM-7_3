#include "CPPM7_3_2.h"
#include "Counter.h"
#include <iostream>

void CPPM7_3_2() {
	Counter counter;
	std::string sign;
	int initCount;
	std::cout << "�� ������ ������� ��������� �������� ��������? ������� �� ��� ���:";
	std::cin >> sign;
	std::cout << sign << '\n';
	if (sign == "��") {
		std::cout << "������� ��������� �������� ��������:";
		std::cin >> initCount;
		counter.set_num(initCount);
	}
	do {
		std::cout << "������� ������� ('+', '-', '=' ��� 'x'):";
		std::cin >> sign;
		if (sign == "+") {
			counter.add();
		}
		else if (sign == "-") {
			counter.subtract();
		}
		else if (sign == "=") {
			counter.equal();
		}
		else if (sign == "x") {
			counter.end();
		}

	} while (sign != "x");
}