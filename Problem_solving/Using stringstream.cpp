#include<iostream>
#include<sstream>
#include<string>
using namespace std ;
int main () {
    string s = "secure Your connection ";
    stringstream  obj(s);
    string temp;
    while (obj>>temp)
    {
            cout << temp << endl ;
    }
    return 0 ;
}