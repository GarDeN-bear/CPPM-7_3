#include "CPPM7_3_1.h"
#include "Calculator.h"
#include <iostream>

void CPPM7_3_1() {
	Calculator calculator;
	double num1, num2;
	bool flag1 = true, flag2 = true;
	int i = 0;
	while (i < 2) {
		if (flag2 == true) {
			std::cout << "¬ведите num1: ";
			std::cin >> num1;
			flag1 = calculator.set_num1(num1);
			if (flag1 == false) {
				continue;
			}
		}
		std::cout << "¬ведите num2: ";
		std::cin >> num2;
		flag2 = calculator.set_num2(num2);
		if (flag2 == false) {
			continue;
		}
		if (flag1 == true && flag2 == true) {
			std::cout << "num1 + num2 = " << calculator.add() << "\n";
			std::cout << "num1 - num2 = " << calculator.subtract_1_2() << "\n";
			std::cout << "num2 - num1 = " << calculator.subtract_2_1() << "\n";
			std::cout << "num1 * num2 = " << calculator.multiply() << "\n";
			std::cout << "num1 / num2 = " << calculator.divide_1_2() << "\n";
			std::cout << "num2 / num1 = " << calculator.divide_2_1() << "\n";
			i++;
		}
	}
}
