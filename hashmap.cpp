#include<iostream>
#include <unordered_map>
#include <map>
using namespace std ;
int main ()
{
    unordered_map<string,int>  m ;
    pair<string ,int> p = make_pair("sarthak",1);
    m.insert(p) ;
    unordered_map<string,int> :: iterator it = m.begin ( );
    while (it != m.end())
    {
        cout << it->first << " " << it->second << endl ;
        it++;
        /* code */
    }
}