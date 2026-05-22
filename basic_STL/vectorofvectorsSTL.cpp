#include <iostream>
#include <vector>
#include <string>
#include <utility> 

using namespace std;

void printVec(vector<int> &v) {
    cout << "Size: " << v.size() << endl;
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << endl;
}

int main() {
    int N;
    if (!(cin >> N)) return 0;

    vector<vector<int>> v;

    for (int i = 0; i < N; i++) {
        int n;
        cin >> n;
        vector<int> temp;
        for (int j = 0; j < n; j++) {
            int x;
            cin >> x;
            temp.push_back(x);
        }
        v.push_back(temp);
    }

    for (int i = 0; i < v.size(); i++) {
        printVec(v[i]);
    }

    if (!v.empty() && v[0].size() > 1) {
        cout << "Element at [0][1]: " << v[0][1] << endl;
    }

    return 0;
} 