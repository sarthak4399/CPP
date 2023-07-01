#include <iostream>
#include <unordered_map>
using namespace std;
int getMinOperations(string series) {
    unordered_set<char> dc;

    for (int i = 0; i < series.length(); i++) {
        char letter = series[i];
        dc.insert(letter);
    }

    return dc.size();
}


int main() {
    char series[100];
    // cout << "Enter the network series: ";
    // cin >> series;
    series= "abaca" ;
    int minOperations = getMinOperations(series);
    cout << "Minimum number of operations required: " << minOperations << endl;

    return 0;
}
