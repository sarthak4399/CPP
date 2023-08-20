#include <iostream>
#include <string>
using namespace std;

string arr[9] = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};

void inputToString(int a, int b) {
    for (int i = a; i <= b; i++) {
        if (i <= 9) {
            cout << arr[i - 1] << endl;
        } else {
            if (i % 2 == 0) {
                cout << "even" << endl;
            } else {
                cout << "odd" << endl;
            }
        }
    }
}

int main() {
    int a, b;
    cin >> a >> b;
    inputToString(a, b);
    return 0;
}
