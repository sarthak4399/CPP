#include <iostream>
using namespace std;

int main () {
 int num = 100;
 cout << "Vlaue is : " << num << endl  ;
 int num1 = 10 ;
 cout << "value of num1 " << num1 << endl ;
//  int *p = 0 ; pointer intialization 

//  address of operator
 cout << "Address is : "<< &num << endl ;
//   pointer stores address 
    int *ptr = &num ;
    cout << " === Using the pointer ==="<< endl;
    cout << "Vlaue is : "  <<*ptr << endl ;
    cout << "Address is : " <<ptr << endl ;
// size of pointer 
    cout << "size of integer is : " << sizeof(num) << endl;
    cout << "size of pointer which is storing the the num address :  " << sizeof(ptr) <<endl;
//  copy pointer 
    int *q = ptr ;
    cout << ptr << " - " << q << endl;
    cout << *ptr << " - " << *q << endl;
//  adding in pointer 
    int *z = &num1;
    (*z)++;
    cout << "Vlaue of ptr after ++ operation  : "<<*z << endl ;
// pointer arithmatic  
    
}