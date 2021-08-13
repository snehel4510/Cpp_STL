// Bitset are special containers which is used to store binary representaion/bits
// Very much useful in Bit manipulation and Bit masking

#include <bits/stdc++.h>
using namespace std;
int main()
{
    // BITSET
    bitset<10> bs1;      //size of bitset can't be given at runtime
    cout << bs1 << endl; //0000000000

    bitset<10> bs2(5);   //initializing with 5 -> 101
    cout << bs2 << endl; //0000000101

    bitset<10> bs3("101011"); //initializing with a bit string
    cout << bs3 << endl;      //0000101011

    cout << bs3[1] << endl; // accessing 1st bit of bs3 which is 1

    // Changing the bit values
    bs3[1] = 0;
    bs3[2] = 1;
    cout << bs3 << endl; //0000101101

    // Setting or unsetting the bits
    bs1.set();           // sets all the bits
    cout << bs1 << endl; // 1111111111

    bs1.set(5, 0);       // setting 5th  bit to 0
    cout << bs1 << endl; //1111011111

    bs1.reset();         // unsets all the bits
    cout << bs1 << endl; // 0000000000

    bs1.set();           // 1111111111
    bs1.reset(5);        // unsetting the 5th bit
    cout << bs1 << endl; //1111011111

    //flipping the bits
    bs1.flip();          //complement(~) of bs1
    cout << bs1 << endl; //0000100000
    bs1.flip(5);         // flippping the 5th bit
    cout << bs1 << endl; //0000000000

    //CONDITIONALS
    cout << bs1.any() << endl;  //returns true if any of the bit is set else false
    cout << bs1.none() << endl; //returns true if none of the bit is set else false

    cout << bs3.count(); // returns the count of set bits in bs3

    return 0;
}