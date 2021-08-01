// comparator functions in c++ STL 

#include <bits/stdc++.h>
using namespace std;
bool incr(int a, int b)
{
    return a < b; // sorts in increasing order
}
bool decr(int a, int b)
{
    return a > b; // sorts in decreasing order
}
int main()
{
    vector<int> v1 = {5, 3, 7, 1, 2, 9, 8, 4, 6, 0};
    sort(v1.begin(), v1.end(), incr);
    for (auto it : v1)
    {
        cout << it << " ";
    }
    cout << endl;

    vector<int> v2 = {5, 3, 7, 1, 2, 9, 8, 4, 6, 0};
    sort(v2.begin(), v2.end(), decr);
    for (auto it : v2)
    {
        cout << it << " ";
    }
    cout << endl;

    auto i = lower_bound(v1.begin(), v1.end(), 5); // returns 1st iterator of 5 if it is present else returns iterator of just greater element than 5
    auto t = upper_bound(v1.begin(), v1.end(), 5); // returns iterator of just greater element than 5
    cout << *i << " " << *t << endl;
    return 0;
}
