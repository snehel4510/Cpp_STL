// How to use iterators efficiently and smartly with C++ STL containers
// iterators are pointers like structure which points to a specific position in the container and can be accessed using * operator

#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<pair<int, int>> p = {{1, 2}, {3, 4}, {5, 6}, {7, 8}};
    vector<pair<int, int>>::iterator it; // declaration of an iterator
    for (it = p.begin(); it != p.end(); ++it)
    {
        cout << (it->first) << " " << (it->second) << endl;
        //(*it).first == (it->first)
    }
    //another way can be
    for (pair<int, int> &i : p)
    {
        cout << i.first << " " << i.second << endl;
    }
    return 0;
}

//----------------------------------------------------------------------------------------------------------------------------------//

#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v = {1, 2, 3, 4, 5, 6};
    vector<int>::iterator it;
    for (it = v.begin(); it != v.end(); ++it)
    {
        cout << (*it) << " ";
    }
    cout << endl;
    for (int i : v)
    {
        cout << i << " ";
    }
    cout << endl;
    for (int &j : v) // passing the value by reference and affecting the change in the vector
    {
        j++;
    }
    for (int i : v)
    {
        cout << i << " ";
    }
    return 0;
}

//------------------------------------------------------------------------------------------------------------------------------------//

#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v = {1, 2, 3, 4, 5, 6};

    //use of auto keyword in c++ .... automatically finds the data type of the variable
    auto a = 1.244; //float
    cout << a << endl;
    auto b = "hello"; //string
    cout << b << endl;
    auto c = 12384740389745865; //long long
    cout << c << endl;
    auto d = 100; //int
    cout << d << endl;
    auto e = 'e'; //char
    cout << e << endl;
    auto f = false; //boolean
    cout << f << endl;

    for (auto i : v)
    {
        cout << i << " ";
    }

    return 0;
}