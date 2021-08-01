#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n = 5;
    // lambda function syntax
    cout << [](int x)    //function takes an int input (n)
    { return x * 2; }(n) // it returns twice of that input int and then called using (n)
         << endl;

    // another easier way of implementing
    auto sum = [](int a, int b) //function name is sum which takes 2 int variables
    { return a * b; };          // returns product of both vars
    cout << sum(5, 6) << endl;  // called as usual way

    //-----------------------------------------------------------------------------------------------------------------------//
    //LAMBDA FUNCTIONS IN C++ STL

    // all_of --> returns true if all elemnts of the vector passes the condition  (AND)
    // any_of --> returns true ifany one elemnt of the vector passes the condition (OR)
    // none_of --> returns true if all elemnts of the vector fails the condition   (NOT+AND)

    vector<int> v = {1, 2, 3, 4, 5};

    cout << all_of(v.begin(), v.end(), [](int x)
                   { return x > 0; }) // the condition/lamda fn is to check whether the number is >0 or not
         << endl;                     // 1 is printed since all the elements in the vector were >0

    return 0;
}