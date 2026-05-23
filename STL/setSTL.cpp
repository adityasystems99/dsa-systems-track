#include <iostream>
#include <set>
using namespace std;

int main() {

    set<int> s;

    s.insert(5);
    s.insert(1);
    s.insert(3);
    s.insert(1);

    for(auto value : s) {
        cout << value << " ";
    }

    return 0;
}

// Revision Question 1 — Remove Duplicates ProblemInput N numbers and print unique sorted values.

#include <iostream>
#include <set>
using namespace std;

int main() {

    int n;
    cin >> n;

    set<int> s;

    for(int i = 0; i < n; i++) {
        int x;
        cin >> x;
        s.insert(x);
    }

    for(auto val : s) {
        cout << val << " ";
    }
}

// search query Store words and answer whether word exists.
#include <iostream>
#include <set>
using namespace std;

int main() {

    set<string> s;

    int n;
    cin >> n;

    while(n--) {
        string word;
        cin >> word;
        s.insert(word);
    }

    string query;
    cin >> query;

    if(s.find(query) != s.end())
        cout << "Found";
    else
        cout << "Not Found";
}

// 3 distinct count i.e count of distinct numbers in the input

#include <iostream>
#include <set>
using namespace std;

int main() {

    int n;
    cin >> n;

    set<int> s;

    while(n--) {
        int x;
        cin >> x;
        s.insert(x);
    }

    cout << s.size();
}