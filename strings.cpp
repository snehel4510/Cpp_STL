#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s = "hello world";
    string s1 = "strings";

    // can take string input with spaces
    // getline(cin, s);
    // cout << s;

    s.push_back('c'); // pushes a char at the end of the string
    cout << s << endl;
    s.pop_back(); // removes a char from the end of the string
    cout << s << endl;

    s.append(" cpp"); // appends another string at the end of the string
    cout << s << endl;
    s1.append(s, 1, 3); // appends 3 chars from s to s1 (s[1] to s[3])
    cout << s1 << endl;

    int a = s.length(); //gives the number of caracter in the string
    cout << a << endl;

    s.resize(5); // changes the size of the string
    cout << s << endl;

    sort(s.begin(), s.end()); // sorts the string in lexographical order using iterators
    cout << s << endl;

    s.back() = 'z';  // last char of the string = s[a-1]
    s.front() = 'a'; // first char of the string = s[0]
    cout << s << endl;

    string s2 = "snehel";
    s.swap(s2); //swaps s and s2
    cout << s << " " << s2 << endl;

    cout << (s == s2) << endl; // can directly compare 2 strings

    s2.clear(); // makes the string empty
    cout << s2 << endl;

    string sub = s.substr(2, 3); // substring of s of length 3 starting from index 2
    cout << sub << endl;
    sub = s.substr(1); // substr of s from index 1 till end
    cout << sub << endl;

    s.erase(2, 3); // deletes 3 chars from index 2
    cout << s << endl;

    s = "programming";          // directly changing the value of the string
    s.replace(1, 3, " " + sub); // replaces 3 chars from 1st index with " "+sub
    cout << s << endl;          //"p nehelramming"  (s[1] tp s[3] -> rog is replaced with " nehel")

    cout << s.find("ming") << endl; // if "ming" is present in s then it will return index of 'm' else returns s.end();
    cout << s.find("pro") << endl;  // returns s.end() -> a garbage value

    string s3 = "foobarfoo";
    cout << s3.find_first_of("foo") << endl; // returns index of 'f'  from 1st occurence of "foo" in s3
    cout << s3.find_last_of("foo") << endl;  // returns index of 'f' from last occurence of "foo" in s3

    s3.insert(6, "bar"); // inserts "bar" in s3 at index 6
    cout << s3 << endl;

    char c1 = 'a', c2 = 'A';                           // finding whetehr a character is in upper or lower case
    cout << islower(c1) << " " << isupper(c2) << endl; // returns 1 & 1
    cout << isupper(c1) << " " << islower(c2) << endl; // return 0 & 0

    cout << c1 << " " << c2 << endl;
    cout << (char)toupper(c1) << " " << (char)tolower(c2) << endl; // converted a to A and A to a

    // converting whole string in upper case and lowercase
    string su = "Ankur Mishra";
    transform(su.begin(), su.end(), su.begin(), ::toupper);
    cout << su << endl;
    transform(su.begin(), su.end(), su.begin(), ::tolower);
    cout << su << endl;

    // integer to character
    int a1 = 9; // ascii of '0' is 48 and '9' is 57
    string str = "world";
    str.push_back(char(a1 + (int)'0'));
    cout << str << endl;

    // character to integer
    char cc = '3';
    int aa = 5;
    int bb = (int)(cc - '0');
    cout << aa + bb << endl; //8

    // integer to string
    string i = to_string(12345);
    cout << "this is an " + i << endl;

    // string to integer
    string sn = "2435 rohit";
    int ai = stoi(sn); // this ignores any character other than and integer character
    cout << 5 + ai;    //2440

    //STRING STREAM & STRING LITERALS

    return 0;
}