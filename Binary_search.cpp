#include <iostream>
using namespace std;
int binarySearch(int arr [], int size , int key ) {

     int start = 0 ;
     int end = size - 1 ;
     while (start <= end ){
        int mid = (start + end ) / 2 ;
        if (arr[mid] == key ) {
            return mid ;
        }

        else if (arr[mid] > key ) {
            end = mid - 1 ;
        }

        else {
            start = mid + 1 ;
        }
        
     }
     return -1 ;

}

int main () {
     int even[9] = {1,2,3,4,5,6,78,80,90} ;
     int odd[7] = {1,2,3,4,5,6,78};
     int postioneven = binarySearch(even,9,87);
     int positionodd = binarySearch(odd,7,78);
     cout << "The position of  in even array is " << postioneven << endl ;
     cout << "The position of 78 in odd array is " << positionodd << endl ;
}