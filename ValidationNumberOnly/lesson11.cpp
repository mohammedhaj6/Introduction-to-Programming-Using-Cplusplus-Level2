#include <iostream>

using namespace std;

int readNumber() {
	int number;
	cout << "Please Enter A Number ?" << endl;
	cin >> number;

	while (cin.fail()) {
		cin.clear();
		cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');

		cout << "\nInvalid Number , Enter AValid One" << endl;
		cin >> number;
	}
	return number;
}


int main() {

	
	cout << "\nYour Number Is:" << readNumber()<<endl;
	return 0;
}