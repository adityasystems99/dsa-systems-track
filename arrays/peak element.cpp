// 852. Peak Index in a Mountain Array
//Medium
//Topics
//premium lock icon
//Companies
You are given an integer mountain array arr of length n where the values increase to a peak element and then decrease.

Return the index of the peak element.

Your task is to solve it in O(log(n)) time complexity.

 

Example 1:

Input: arr = [0,1,0]

Output: 1

Example 2:

Input: arr = [0,2,1,0]

Output: 1

Example 3:

Input: arr = [0,10,5,2]

Output: 1

 

Constraints:

3 <= arr.length <= 105
0 <= arr[i] <= 106
arr is guaranteed to be a mountain array.

*//
#include <vector>

class Solution {
public:
    int peakIndexInMountainArray(std::vector<int>& arr) {
        int left = 0;
        int right = arr.size() - 1;
        
        while (left < right) {
            int mid = left + (right - left) / 2;
            
            if (arr[mid] < arr[mid + 1]) {
                // We are on the ascending slope, peak is to the right.
                left = mid + 1;
            } else {
                // We are on the descending slope, mid could be the peak.
                right = mid;
            }
        }
        
        // left and right will converge to the peak index
        return left;
    }
};

