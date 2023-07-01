#include <iostream>
using namespace std;

    int linearSearch(int arr[], int n, int x) {
        for (int i = 0; i < n; i++)
        {
            if (arr[i] == x) {
                return i;
                cout<< "found" <<endl;
                
            } 

        }

        return -1;
    }

int main () {
    int myarr[8] = {1,2,3,4,5,6,7,8};
    cout<< linearSearch(myarr, 8, 5) <<endl;
    return 0;
}