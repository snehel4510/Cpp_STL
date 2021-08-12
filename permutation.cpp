#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v = {1, 2, 3};
    // do-while loop to print all possible permutations of {1,2,3}
    do
    {
        for (auto i : v)
        {
            cout << i << " ";
        }
        cout << endl;
    } while (next_permutation(v.begin(), v.end()));
    // the next_permutaion returns true or false whether a greater permuation exist for a given vector

    // all permutation of V = {1,2,3} are
    // 1,2,3
    // 1,3,2
    // 2,1,3
    // 2,3,1
    // 3,1,2
    // 3,2,1

    vector<int> v1 = {1, 2, 3};
    cout << next_permutation(v1.begin(), v1.end()) << endl; //1 -> since {1,3,2} exists
    cout << prev_permutation(v1.begin(), v1.end()) << endl; //0 -> since no smaller permuation exist beforer {1,2,3}
    v1 = {3, 2, 1};
    cout << next_permutation(v1.begin(), v1.end()) << endl; //0 -> since no greater permuation exist after {3,2,1}
    cout << prev_permutation(v1.begin(), v1.end()) << endl; //1 -> since {3,1,2} exists

    return 0;
}