#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

vector<int> parseInts(string str) {
	// Complete this function
    vector <int> integers ;
    stringstream obj(str);
    string temp;
    char ch;
    int num;
    while (obj >> num) {
        integers.push_back(num);
        obj >> ch; 
    }
    return integers ;
}

int main() {
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }
    return 0;
}