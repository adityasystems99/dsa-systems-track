//FIND DUPLICATE ELEMENT

#include <iostream>
using namespace std;

int findUnique(int arr[], int n) {

    int ans = 0;

    for(int i = 0; i < n; i++) {
        ans ^= arr[i];
    }

    return ans;
}

int main() {

    int arr[] = {2,3,1,6,3,6,2};

    cout << findUnique(arr, 7);
}