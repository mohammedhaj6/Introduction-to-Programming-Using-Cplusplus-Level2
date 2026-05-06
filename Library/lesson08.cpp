#include<iostream>
#include "myLibrary.h";

using namespace std;


int main() {
	MyLib::test(); 
	cout << MyLib::sum2Numbers(10,20) <<endl;

}