#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    int num ;
    long longnum;
    char ch ;
    float floatnum ;
    double doubblenum ;
scanf("%d %ld %c %f %5lf", &num, &longnum ,&ch,&floatnum,&doubblenum);
printf("%d\n %ld\n %c\n %f\n %5lf\n", num, longnum ,ch,floatnum,doubblenum);
    return 0;
}