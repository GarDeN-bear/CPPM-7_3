#include "Counter.h"
#include <iostream>

void Counter::set_num(int num_) {
	num = num_;
}
void Counter::add() {
	num++;
}
void Counter::subtract() {
	num--;
}
void Counter::equal() {
	std::cout << num << "\n";
}
void Counter::end() {
	std::cout << "До свидания!";
}