#include <iostream>
using namespace std;

class solution
{
public:
    reverse_int(int x)
    {
        int ans = 0;
        while (x != 0)
        {
            int digit = x % 10;
            ans = ans * 10 + digit;
            x /= 10;
        }
        return ans;
    }

} reverse_int(123);
