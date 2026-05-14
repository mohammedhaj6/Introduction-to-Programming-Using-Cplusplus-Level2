#include <iostream>
#include <vector>

using namespace std;


void readNumbers(vector<int> &vNumbers) {


	int num;
	char choice = 'N';
	do
	{
		cout << "Enter Your Numbers?\n";
		cin >> num;
		vNumbers.push_back(num);

		cout << "Do You Need Add More Numbers? << Enter Y if Yes , Enter N if No. \n";
		cin >> choice;


	} while (choice == 'y' || choice == 'Y');


}

void printNumbers(vector<int> &vNumbers) {


	cout << "\n\nVector Numbers :";
	for (int num : vNumbers) {
		cout << num << " ";
	}
	cout << endl;

}


int main() {
	//vector <int> vNumbers;
	//vNumbers.push_back(10);
	//vNumbers.push_back(20);
	//vNumbers.push_back(30);
	//vNumbers.push_back(40);
	//vNumbers.push_back(50);

	//cout << "Numbers Vector: \n\n";

	//for (int &num: vNumbers) {
	//	cout << num << endl;
	//}
	//cout << endl;






	//homework

	vector<int> vNumbers;
	readNumbers(vNumbers);
	printNumbers(vNumbers);
	


}