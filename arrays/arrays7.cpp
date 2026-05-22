// Kth largest element in the user definned array
#include <iostream>
using namespace std;

int main() {
    int n, k;
    int arr[100];

    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cin >> k;

    if (k > n || k <= 0) {
        return 0;
    }

    int currentMax;
    int maxIndex;

    for (int i = 0; i < k; i++) {
        currentMax = -2147483648; 
        maxIndex = -1;

        for (int j = 0; j < n; j++) {
            if (arr[j] > currentMax) {
                currentMax = arr[j];
                maxIndex = j;
            }
        }

        if (maxIndex != -1) {
            arr[maxIndex] = -2147483648;
        }
    }

    cout << currentMax << endl;

    return 0;
}