//MAPS

#include <bits/stdc++.h>
using namespace std;
void print(map<int, string> &m)
{
    // printing the map
    cout << "Size = " << m.size() << endl;
    for (auto &it : m)
    {
        cout << (it).first << " " << (it).second << endl;
    }
}
int main()
{
    //declaration
    map<int, string> m;

    //Insertion - m[key]=value;
    m[1] = "snehel";
    m[7] = "Ankur";
    m[5] = "vivek";
    // or we can also do ..
    m.insert({4, "hello"}); // OR m.insert(make_pair(4,"hello"));

    //print(m);               // maps are already stored in sorted order of their keys
    cout << m[1]; //prints the value at key 1 i.e., snehel

    m[4] = "world"; //each key is unique in maps,so here hello will be replaced by world
    //print(m);

    m[6]; // now only this has inserted a key(6) in the map and initialized its value as 0 (for int) and empty string(for strings)
    //print(m);

    //Accessing the key value pairs
    auto it = m.find(4); // returns an iterator to the key(3), if 3 is not a key in the map then it returns m.end();
    if (it == m.end())
    {
        cout << "Not in map";
    }
    else
    {
        cout << (*it).second;
    }
    //so this returs "Not in map" for key = 3 and "world" for key = 4

    //Erasing elements
    m.erase(6);  //can take 2 values, either a key or an iterator - erases key = 6
    m.erase(it); //erases key=4 as we declared above that it is m.find(4)
    //print(m);

    m.clear(); //this cleares the whole map
    print(m);

    return 0;
}

//---------------------------------------------------------------------------------------------------------------------------------------------//

// UNORDERED MAPS
// diference is that undordered maps doesn't store keys in sorted order and they have time complexity of O(1) while maps has time complexity of O(logn)

// MULTIMAPS
//difference is that in multimaps you can store multiple key,value pairs while each key is unique in maps and has only one unique value'