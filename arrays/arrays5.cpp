#include <iostream>
using namespace std;

int main() {
    int arr[100] = {10, 20, 30, 40, 50};
    int size = 5;
    int index;

    cin >> index;

    if (index < 0 || index >= size) {
        return 0;
    }

    for (int i = index; i < size - 1; i++) {
        arr[i] = arr[i + 1];
    }

    size--;

    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}