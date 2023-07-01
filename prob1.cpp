#include <iostream>
using namespace std;
// sorted array O(log n) complexicity 
int firstOccurance(int arr [] , int size , int key) {
    int start = 0 ;
    int end = size -1 ;
    int ans = -1 ;
    while (start<=end)
    {
            int mid = (start + end )/ 2;
                if(arr[mid] == key ){
                    ans =  mid ;
                    end = mid -1 ;
                }
                else if (arr[mid]>  key){
                    end = mid - 1 ;
                }
                else if (arr[mid] < key){
                    start = mid + 1 ;
                }
    }
    return ans ;
}

int lastOccurance(int arr [] , int size , int key) {
    int start = 0 ;
    int end = size -1 ;
    int ans = -1 ;
    while (start<=end)
    {
            int mid = (start + end )/ 2;
                if(arr[mid] == key ){
                    ans = mid ;
                    start = mid + 1 ;
                }
                else if (arr[mid]>  key){
                    end = mid - 1 ;
                }
                else if (arr[mid] < key){
                    start = mid + 1 ;
                }
    }
    return ans ;
}
int main () {
    //  take arry from user 
    // take size from user for array 
    cout << "Enter the size of array " << endl ;
    int size ;
    cin >> size ;
    cout << "Enter the array " << endl ;
    int mysortedArr[size] ;
    for (int i = 0 ; i < 6 ; i++){
        cin >> mysortedArr[i] ;
    }
        int key ;
        cout << "Enter the key you want to search " << endl ;
        cin >> key ;
        int b = firstOccurance(mysortedArr ,size,key);
        cout << "The position of first occurance is  " << key << " in Array is " << b << endl ;
        int c = lastOccurance(mysortedArr ,size,key);
        cout << "The position of last occurance is  " << key << " in Array is " << c << endl ;
        return 0 ;
}