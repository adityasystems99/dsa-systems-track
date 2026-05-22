// sorting and comparators 

#include <iostream>  // For cout
#include <vector>    // For vector container
#include <algorithm> // For lower_bound

using namespace std;

int main() {

    vector<int> v = {1, 2, 4, 4, 5, 8};
    auto it = lower_bound(v.begin(), v.end(), 4);

    cout << *it << endl;

    return 0;
}

// algorithms

#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric> // for accumulating values
using namespace std;

int main() {

    vector<int> v = {2,3,1,6,7};

    cout << *min_element(v.begin(), v.end()) << endl;

    cout << *max_element(v.begin(), v.end()) << endl;

    cout << accumulate(v.begin(), v.end(), 0) << endl;

    reverse(v.begin(), v.end());

    for(int x : v)
        cout << x << " ";
}