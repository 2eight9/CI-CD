#include <iostream>
#include <stack>
using namespace std;

int main() {
    stack<int> s;
    
    // Push elements to the stack
    s.push(10);
    s.push(20);
    s.push(30);

    // Display the top element
    cout << "Top element: " << s.top() << endl;

    // Pop the top element
    s.pop();
    cout << "Top after pop: " << s.top() << endl;

    // Display remaining elements in the stack
    cout << "Stack elements after popping once:" << endl;
    while (!s.empty()) {
        cout << s.top() << " ";
        s.pop();
    }
    cout << endl;

    // Additional stack operations
    s.push(40);
    s.push(50);
    cout << "Top element after new pushes: " << s.top() << endl;

    // Pop all elements
    while (!s.empty()) {
        cout << "Popping: " << s.top() << endl;
        s.pop();
    }

    return 0;
}