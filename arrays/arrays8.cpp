//Find Missing Number [1 → N]

#include<iostream>
using namespace std;

int main() {

    int arr[4] = {1,2,4,5};

    int n = 5;

    int expectedSum = n * (n + 1) / 2;

    int actualSum = 0;

    for(int i = 0; i < n-1; i++) {
        actualSum += arr[i];
    }

    cout << "Missing Number = "
         << expectedSum - actualSum;

    return 0;
}