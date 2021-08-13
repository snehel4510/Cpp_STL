#include <bits/stdc++.h>
using namespace std;

void print(valarray<int> &ar)
{
    for (auto i : ar)
    {
        cout << i << " ";
    }
    cout << endl;
}

int main()
{
    //initializing a valarray is similar to vectors
    valarray<int> ar = {1, 2, 3};
    valarray<int> br = {1, 2, 3};
    valarray<int> cr = {1, 2, 3};

    cout << ar.min() << endl; // 1
    cout << ar.max() << endl; // 3
    cout << ar.sum() << endl; // 1+2+3 = 6

    //Left shift
    ar = ar.shift(1); // shifts one element leftwards
    print(ar);        // 2,3,0

    //Right shift
    br = br.shift(-2); // shifts two elements rightwards
    print(br);         // 0,0,1

    //Circular shift
    cr = cr.cshift(1); // performs a circular shift (rotates the array leftwards one time)
    print(cr);         // 2,3,1

    ar.swap(cr); //swaps ar with cr
    print(ar);   // 2,3,1
    print(cr);   //2,3,0

    auto square = [](int a)
    { return a * a; }; // lambda function to return square of an element
    auto cube = [](int a)
    { return a * a * a; }; // lambda function to return cube of an element

    ar = ar.apply(square);
    print(ar); // 4,9,1
    cr = cr.apply(cube);
    print(cr); // 8,27,0

    // oprations in valarrays can be performed in same way it is done with variables so you don't need to run a loop
    // ar += br;    -> increments ith element of ar with ith element of br
    // ar -= br;    -> decrements ith element of ar with ith element of br
    // ar *= br;    -> multiplies ith element of ar with ith element of br

    valarray<bool> res = (ar == br); // checks on every element of both ar and br and matches the equality on each of them
    // ar currently is {4,9,1} and br is {0,0,1}
    for (auto i : res)
    {
        cout << i << " ";
    }
    // 0,0,1  -> since only the last element matches
    cout << endl;
    return 0;
}