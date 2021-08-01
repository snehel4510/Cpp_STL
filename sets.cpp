// #include <bits/stdc++.h>
// using namespace std;
// void print(set<string> &s)
// {
//     for (auto &it : s)
//     {
//         cout << (it) << endl;
//     }
// }
// int main()
// {
//     set<string> s; // stores unique elements/keys in sorted order
//     s.insert("abc");
//     s.insert("zdef");
//     s.insert("yghi");
//     s.insert("jkl");
//     //print(s);
//     auto i = s.find("jkl");
//     if (i != s.end())
//     {
//         //cout << (*i); // prints jkl
//     }
//     else
//     {
//         //cout << "Not in set";
//     }

//     s.erase(i);     //erases "jkl"
//     s.erase("abc"); //erases "abc"
//     print(s);

//     //UNORDERED SETS
//     // doesn't store elemnts in sorted order and time taken is O(1) instead of O(logn) for every operation
//     return 0;
// }

//-----------------------------------------------------------------------------------------------------------------------------------------------------//

//MULTISET

#include <bits/stdc++.h>
using namespace std;

void print(multiset<string> &s)
{
    for (auto &it : s)
    {
        cout << (it) << endl;
    }
    cout << endl;
}

int main()
{
    multiset<string> s; // stores multiple elements/keys in sorted order
    s.insert("abc");
    s.insert("abc");
    s.insert("yghi");
    s.insert("abc");
    print(s);
    auto it = s.find("abc"); //returns an iterator pointing to the first "abc" present in the multiset
    if (it != s.end())
    {
        s.erase(it); //deletes the element("abc") present at that iterator(it)
    }
    print(s);

    s.erase("abc"); //deletes all the "abc" values present in the set
    print(s);

    return 0;
}