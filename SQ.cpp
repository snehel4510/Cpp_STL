// STACKS - first in last out
// QUEUES - first in first out

#include <bits/stdc++.h>
using namespace std;
int main()
{
    stack<int> s;
    s.push(1); // push elements to the end of stack
    s.push(2);
    s.push(3);
    s.push(4);
    while (!s.empty())
    {
        cout << s.top() << " "; // topmost element/last pushed element in the stack
        s.pop();                // deletes the s.top() element from the stack
    }
    // 4 3 2 1
    cout << endl;

    queue<string> q;
    q.push("abc");
    q.push("def");
    q.push("ghi");
    q.push("jkl");
    while (!q.empty())
    {
        cout << q.front() << " "; // frontmost / first pushed element in the queue
        q.pop();                  // deletes the q.front() element from the queue
    }
    // abc def ghi jkl
    cout << endl;
    return 0;
}