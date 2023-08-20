#include <iostream>
#include <unordered_map>

using namespace std;

int gutminoperations(char* series) {
    unordered_map<char, int> threatCounts;

    // Count the number of threats associated with each letter
    for (int i = 0; series[i] != '\0'; i++) {
        char letter = series[i];
        threatCounts[letter]++;
    }

    int totalOperations = 0;

    // Count the number of connections that need to be severed
    for (const auto& pair : threatCounts) {
        totalOperations += (pair.second - 1);
    }

    return totalOperations;
}

int main() {
    char series[100];
    cout << "Enter the network series: ";
    cin >> series;

    int minOperations = gutminoperations(series);
    cout << "Minimum number of operations required: " << minOperations << endl;

    return 0;
}
