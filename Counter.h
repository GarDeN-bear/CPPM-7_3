#pragma once

class Counter {
public:
	Counter(int num_ = 1) { num = num_; };
	void set_num(int num);
	void add();
	void subtract();
	void equal();
	void end();
private:
	int num;
};