// Rotate Array by K Positions

#include<iostream>
using namespace std;

void reverse(int arr[], int start, int end) {
    while(start < end) {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

int main() {
    int n, k;

    cout << "Enter size of array: ";
    cin >> n;

    int* arr = new int[n]; 

    cout << "Enter " << n << " elements: ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Enter rotation steps (k): ";
    cin >> k;

    k = k % n;

    reverse(arr, 0, n - 1);
    reverse(arr, 0, k - 1);
    reverse(arr, k, n - 1);

    cout << "Rotated Array: ";
    for(int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;

    delete[] arr; 

    return 0;
}