// MAP
#include <iostream> // For cout and endl
#include <map>      // For the map container
#include <string>   // For using string data type

using namespace std;

int main() {

    map<int, string> m;

    m[1] = "abc";
    m[5] = "cdc";
    m[3] = "acd";

    // Loop through the map using a reference to avoid copying data
    for(auto &pr : m) {
        cout << pr.first
             << " "
             << pr.second
             << endl;
    }

    return 0;
}


// user defined 
#include <iostream> // For cin, cout, and endl
#include <map>      // For the map container
#include <string>   // For the string data type

using namespace std;

int main() {
    int n;
    cout << "Enter the number of pairs you want to insert: ";
    cin >> n;

    map<int, string> m;

    cout << "Enter each pair as [Integer_Key] [String_Value] (e.g., 10 alex):\n";
    for (int i = 0; i < n; i++) {
        int key;
        string value;
        
        cin >> key >> value; // Takes both key and value from the user
        m[key] = value;      // Inserts them into the map
    }

    cout << "\n--- Elements in the Map (Automatically Sorted by Key) ---\n";
    for (auto &pr : m) {
        cout << "Key: " << pr.first << " -> Value: " << pr.second << endl;
    }

    return 0;
}

// Frequency counting 

#include <iostream>
#include <map>
#include <string>
using namespace std;

int main() {

    map<string,int> freq;

    int n;
    cin >> n;

    while(n--) {

        string s;
        cin >> s;

        freq[s]++;
    }

    for(auto &pr : freq) {

        cout << pr.first
             << " "
             << pr.second
             << endl;
    }
}