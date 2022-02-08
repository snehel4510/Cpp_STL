// Priority queue in C++ STL
// By default, C++ creates a max-heap for priority queue.
// Syntax for creating a min-heap from the PQ -> priority_queue<int, vector<int>, greater<int>> pq;

#include <iostream>
#include <queue>
using namespace std;
void showpqM(priority_queue<int> gq)
{
    priority_queue<int> g = gq;
    while (!g.empty())
    {
        cout << g.top() << " ";
        g.pop();
    }
    cout << '\n';
}
void showpqm(priority_queue<int, vector<int>, greater<int>> gq)
{
    priority_queue<int, vector<int>, greater<int>> g = gq;
    while (!g.empty())
    {
        cout << g.top() << " ";
        g.pop();
    }
    cout << '\n';
}
int main()
{
    cout << "Enter your Choice : \n1.Max-Heap\n2.Min-Heap\n";
    int x;
    cin >> x;
    switch (x)
    {
    case 1:
    {
        priority_queue<int> gquiz;
        gquiz.push(10);
        gquiz.push(30);
        gquiz.push(20);
        gquiz.push(5);
        gquiz.push(1);
        showpqM(gquiz);
        cout << "gquiz.size() : " << gquiz.size();
        cout << "\ngquiz.top() : " << gquiz.top() << endl;
        gquiz.pop();
        showpqM(gquiz);
        break;
    }
    case 2:
    {
        priority_queue<int, vector<int>, greater<int>> gquiz;
        gquiz.push(10);
        gquiz.push(30);
        gquiz.push(20);
        gquiz.push(5);
        gquiz.push(1);
        showpqm(gquiz);
        cout << "gquiz.size() : " << gquiz.size();
        cout << "\ngquiz.top() : " << gquiz.top() << endl;
        gquiz.pop();
        showpqm(gquiz);
        break;
    }
    default:
    {
        cout << "Invalid Choice";
    }
    }
    return 0;
}
