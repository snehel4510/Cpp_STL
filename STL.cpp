// STL in-built algorithms
#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v = {5, 3, 7, 1, 2, 9, 8, 4, 6, 0};

    int l = v.size(); //returns the size of the vector
    cout << l << endl;

    auto i1 = min_element(v.begin(), v.end()); // returns the iterator of minimum element in the vector
    cout << *i1 << endl;

    auto i2 = max_element(v.begin(), v.end()); // returns the iterator of maximum element in the vector
    cout << *i2 << endl;

    int s = 0;
    s = accumulate(v.begin(), v.end(), s); // takes the initial value of sum and then returns the sum of the vector
    cout << s << endl;

    int c = count(v.begin(), v.end(), 5); // returns the count of 5 in the vector
    cout << c << endl;

    auto i3 = find(v.begin(), v.end(), 5); // returns iteratotr of 5 if it is in the vector else returns v.end()
    cout << *i3 << endl;

    sort(v.begin(), v.end()); // sorts the vector
    for (auto i : v)
    {
        cout << i << " ";
    }
    cout << endl;

    reverse(v.begin(), v.end()); // reverse the vector
    for (auto i : v)
    {
        cout << i << " ";
    }
    cout << endl;

    //To find the index(integer values) of an iterator
    auto i4 = find(v.begin(), v.end(), 4);
    int index = distance(v.begin(), i4);
    cout << index;

    return 0;
}