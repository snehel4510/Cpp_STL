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
        l1.push_back(i * 2);  // pushing backwards
        l2.push_front(i * 3); // pushing frontwards
    }
    print(l1);
    print(l2);
    cout << l1.front() << " " << l2.back() << endl; // first and last element
    cout << l1.back() << " " << l2.front() << endl;

    l1.pop_front(); // pops out the first element
    l2.pop_back();  // pops out the first element
    print(l1);
    print(l2);

    l2.reverse(); // reverse the list
    print(l2);

    list<int> l3 = {2, 5, 1, 7, 9, 4, 3, 9, 0, 4};
    l3.sort(); // sorts the list
    print(l3);

    l1.merge(l2); // merges 2 sorted list into one
    print(l1);

    l3.remove(9); // removes all the element from the list which equals 9
    print(l3);
    cout << l3.size() << endl; //returns the size od the list

    list<int> l4;
    l4.assign(5, 1); //creates 5 occurences of one in the list
    auto it = l4.begin();
    advance(it, 3);    // iterator to point to 4th position
    l4.insert(it, 10); //inserting 10 at 4th position
    print(l4);

    return 0;
}