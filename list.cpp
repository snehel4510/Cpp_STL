// list in cpp stl are doubly linked list in general

#include <bits/stdc++.h>
using namespace std;
void print(list<int> l)
{
    for (auto i : l)
    {
        cout << i << " ";
    }
    cout << endl;
}
int main()
{
    list<int> l1, l2;
    for (int i = 0; i < 10; ++i)
    {
        l1.push_back(i * 2);
        l2.push_front(i * 3);
    }
    print(l1);
    print(l2);
    cout << l1.front() << " " << l2.back() << endl;
    cout << l1.back() << " " << l2.front() << endl;

    l1.pop_front();
    l2.pop_back();
    print(l1);
    print(l2);

    l2.reverse();
    print(l2);

    list<int> l3 = {2, 5, 1, 7, 9, 4, 3, 9, 0, 4};
    l3.sort();
    print(l3);
    return 0;
}