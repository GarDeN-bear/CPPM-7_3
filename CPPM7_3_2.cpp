#include "CPPM7_3_2.h"
#include "Counter.h"
#include <iostream>

void CPPM7_3_2() {
	Counter counter;
	std::string sign;
	int initCount;
	std::cout << "Вы хотите указать начальное значение счётчика? Введите да или нет:";
	std::cin >> sign;
	std::cout << sign << '\n';
	if (sign == "да") {
		std::cout << "Введите начальное значение счётчика:";
		std::cin >> initCount;
		counter.set_num(initCount);
	}
	do {
		std::cout << "Введите команду ('+', '-', '=' или 'x'):";
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