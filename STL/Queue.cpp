// Queue

#include <iostream>
#include <queue>
using namespace std;

int main() {

    queue<string> q;

    q.push("abc");
    q.push("bcd");
    q.push("cde");

    while(!q.empty()) {

        cout << q.front() << endl;

        q.pop();
    }
}