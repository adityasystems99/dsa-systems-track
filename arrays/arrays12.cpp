//PAIR SUM - arr = [1,2,3,4,5] target = 5 Output:(1,4) & (2,3)
#include <iostream>
#include <vector>
#include <algorithm> // Required for sort()

using namespace std;

vector<pair<int,int>> pairSum(vector<int>& arr, int target) {
    sort(arr.begin(), arr.end());
    int left = 0;
    int right = arr.size() - 1;
    vector<pair<int,int>> ans;

    while(left < right) {
        int sum = arr[left] + arr[right];
        if(sum == target) {
            ans.push_back({arr[left], arr[right]});
            left++;
            right--;
        }
        else if(sum < target) {
            left++;
        }
        else {
            right--;
        }
    }
    return ans;
}

int main() {
    vector<int> arr = {10, 5, 2, 3, 7, 8};
    int target = 10;

    vector<pair<int,int>> result = pairSum(arr, target);

    for(auto p : result) {
        cout << p.first << ", " << p.second << endl;
    }

    return 0;
}