// Stack

#include <iostream>
#include <stack>
using namespace std;

int main() {

    stack<int> st;

    st.push(2);
    st.push(3);
    st.push(4);

    while(!st.empty()) {

        cout << st.top() << endl;

        st.pop();
    }
}

// user defined 

#include <iostream> 
#include <stack>    

using namespace std;

int main() {
    int n;
    cout << "Enter the number of elements you want to push into the stack: ";
    cin >> n;

    stack<int> st;

    cout << "Enter " << n << " integers:\n";
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        st.push(x); 
    }

    cout << "\n--- Popping elements out of the Stack (LIFO Order) ---\n";
    while (!st.empty()) {
        cout << st.top() << " "; 
        st.pop();                
    }
    cout << endl;

    return 0;
}

// balanced bracket 

#include <iostream>
#include <stack>
using namespace std;

bool isBalanced(string s) {

    stack<char> st;

    for(char ch : s) {

        if(ch == '(' || ch == '{' || ch == '[') {

            st.push(ch);
        }
        else {

            if(st.empty())
                return false;

            if(ch == ')' && st.top() != '(')
                return false;

            if(ch == '}' && st.top() != '{')
                return false;

            if(ch == ']' && st.top() != '[')
                return false;

            st.pop();
        }
    }

    return st.empty();
}

int main() {

    string s;
    cin >> s;

    cout << isBalanced(s);
}