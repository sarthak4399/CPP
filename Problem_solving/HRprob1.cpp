#include<iostream>
using namespace std;
int sumfucn(int num[3]){
    int sum =  num[0] + num[1] + num[2];
    return sum;
}
int main () {
     int num[3] ;
        int i;
        for (i = 0; i < 3; i++) {
            cin>> num[i];
        }
        cout<< sumfucn(num) <<endl;
}