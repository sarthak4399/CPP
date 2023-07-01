#include <iostream>
using namespace std;

void reverseArr(int arr[], int n) {
    int reversedArr[n];
    
    for (int i = n - 1; i >= 0; i--) {
        reversedArr[n - 1 - i] = arr[i];
    }
    for (int i = 0; i < n; i++) {
        cout << reversedArr[i] <<" ";
    }
}

int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    reverseArr(arr, n);
    return 0;
}
