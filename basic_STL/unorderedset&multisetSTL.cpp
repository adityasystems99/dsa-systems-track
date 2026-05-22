// unordered set
#include <iostream>
#include <unordered_set>

using namespace std;

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    unordered_set<int> s;

    cout << "Enter the numbers:\n";
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        s.insert(x); // Inserts the number. Duplicates are automatically ignored.
    }

    // Printing the output to see the result
    cout << "Elements in unordered_set: ";
    for (int value : s) {
        cout << value << " ";
    }
    cout << endl;

    return 0;
}

// multiset
#include <iostream> // Added the missing #
#include <set>      // multiset lives inside the <set> header

using namespace std;

int main () {
    int n;
    cout << "Enter number of elements to insert into multiset : "; 
    cin >> n;
    
    multiset<int> ms; // Your multiset is named 'ms'
    
    cout << "Enter the numbers:\n";
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        ms.insert(x); // Fixed: changed 's' to 'ms'
    }
    
    cout << "Elements in multiset: ";
    for (int value : ms) { 
        cout << value << " ";
    }
    cout << endl;
    
    return 0;
}

// You are given $N$ bags of candies, where the $i$-th bag contains $A[i]$ candies. You have $K$ minutes. Every minute, you can choose the bag with the maximum number of candies, eat all the candies in it, and then the bag miraculously refills with $\lfloor \text{candies} / 2 \rfloor$ (integer division). Find the maximum total candies you can eat after K minutes.

#include <iostream>
#include <set>

using namespace std;

int main() {
    int n, k;
    cout << "Enter number of bags and minutes: ";
    cin >> n >> k;

    multiset<long long> ms;
    cout << "Enter the candy counts:\n";
    
    // Direct Insertion: Skipping the vector entirely
    for (int i = 0; i < n; i++) {
        long long x;
        cin >> x;
        ms.insert(x); // Put directly into the multiset
    }

    long long total_candies_eaten = 0;

    for (int minute = 0; minute < k; minute++) {
        if (ms.empty()) break;

        auto max_it = prev(ms.end());
        long long max_candies = *max_it;

        total_candies_eaten += max_candies;
        ms.erase(max_it);
        ms.insert(max_candies / 2);
    }

    cout << "Total candies eaten: " << total_candies_eaten << endl;
    return 0;
}