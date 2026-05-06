#pragma once
#include<iostream>

using namespace std;

namespace MyLib {

	void test() {
		cout << "Hi,This is my first function in my first library! \n";
	}
	short sum2Numbers(short num1,short num2) {
		return num1 + num2;
	}
}