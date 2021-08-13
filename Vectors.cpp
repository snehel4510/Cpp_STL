// STL in-built algorithms for vectors
// most of them also works with other containers

#include <bits/stdc++.h>
using namespace std;

void print(vector<int> v)
{
    for (auto i : v)
    {
        cout << i << " ";
    }
    cout << endl;
}

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
    print(v);

    reverse(v.begin(), v.end()); // reverse the vector
    print(v);

    //To find the index(integer values) of an iterator
    auto i4 = find(v.begin(), v.end(), 4);
    int index = distance(v.begin(), i4);
    cout << index << endl;

    // Erase an element from the vector
    auto i5 = v.begin() + 2;
    v.erase(i5);
    print(v);
    v.erase(v.begin(), v.end()); //erases the complete vector
    print(v);

    vector<int> v1 = {3, 7, 1, 8, 2, 9, 2, 5};
    // sorted vector will be -> {1,2,2,3,5,7,8,9}

    nth_element(v1.begin(), v1.begin() + 3, v1.end());
    // this sorts the vector in such a way that all the elements lesser than 3rd index value(from the sorted vector) will be at left side of the vector and all the elements greater than 3rd index value(from the sorted vector) will be at right side of the vector
    print(v1); //2 2 1 3 5 9 8 7

    rotate(v1.begin(), v1.begin() + 3, v1.end());
    // rotates the vector such that the first 3 element will move at the end of the vector
    print(v1); //3 5 9 8 7 2 2 1

    return 0;
}