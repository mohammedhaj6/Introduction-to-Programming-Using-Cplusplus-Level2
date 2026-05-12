#include <iostream>
using namespace std;

//void printNumbers(int N,int M) {
//
//	if (N<=M) {
//		cout << M <<endl;
//		printNumbers(N,M-1);
//	}
//
//}

#include <iostream>
using namespace std;

//void printPowerOfNumbers(int N, int M, int result = 1)
//{
//    if (M > 0)
//    {
//        result *= N;
//
//        if (M == 1)
//        {
//            cout << result;
//        }
//        else
//        {
//            printPowerOfNumbers(N, M - 1, result);
//        }
//    }
//}

int MyPower(int N, int M)
{
	if (M == 0)return 1;

		
	else return N* MyPower(N, M - 1);
	
		
	
}




int main() {
	//printNumbers(1, 10);
	cout << MyPower(3, 5) << endl;
}