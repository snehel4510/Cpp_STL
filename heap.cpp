// C++ code to demonstrate the working of make_heap(), front()
#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v1 = {20, 30, 40, 25, 15};
    // Converting vector into a heap using make_heap() -> by default it will be a max heap
    make_heap(v1.begin(), v1.end());
    cout << v1.front() << endl;
    // using push_back() to enter element in vector
    v1.push_back(50);
    // using push_heap() to reorder elements
    push_heap(v1.begin(), v1.end());
    cout << v1.front() << endl;
    // using pop_heap() to delete maximum element
    pop_heap(v1.begin(), v1.end());
    v1.pop_back();
    cout << v1.front() << endl;

    // Displaying heap elements
    cout << "The heap elements are : ";
    for (int &x : v1)
        cout << x << " ";
    cout << endl;
    // sorting heap using sort_heap()
    sort_heap(v1.begin(), v1.end());
    // After this operation, the container is no longer a heap
    // Displaying heap elements
    cout << "The heap elements after sorting are : ";
    for (int &x : v1)
        cout << x << " ";
    cout << endl;
    cout << v1.front() << endl;

    // Declaring heap iterator
    vector<int>::iterator it1;
    // Checking if container is heap using is_heap()
    is_heap(v1.begin(), v1.end()) ? cout << "The container is heap " : cout << "The container is not heap";
    cout << endl;
    // using is_heap_until() to check position till which container is heap
    auto it = is_heap_until(v1.begin(), v1.end());
    // Displaying heap range elements
    cout << "The heap elements in container are : ";
    for (it1 = v1.begin(); it1 != it; it1++)
        cout << *it1 << " ";
    return 0;
}
