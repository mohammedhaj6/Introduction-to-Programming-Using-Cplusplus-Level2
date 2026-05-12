#include <iostream>
#include <cstdio>
using namespace std;


void printTable(int arr[], int arr2[]) {

    for (int i = 0; i < 10; i++) {

        for (int j = 0; j < 10; j++) {

            printf("%02d ", arr[i] * arr2[j]);
        }

        printf("\n");
    }
}

int main() {

    int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
    int arr2[10] = { 1,2,3,4,5,6,7,8,9,10 };

    printTable(arr, arr2);

    return 0;
}