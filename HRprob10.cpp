#include <iostream>
#include <unordered_map>
#include <regex>
using namespace std;

unordered_map<string, string> tag_map;

void symbol_Extractor(string tag)
{
    regex tag_regex("<([a-z0-9]+)\\s*([^>]*)>");
    smatch tag_match;
    regex_search(tag, tag_match, tag_regex);
    string tag_name = tag_match[1];
    string tag_attr = tag_match[2];

    regex attr_regex("([a-z0-9]+)\\s*=\\s*\"([^\"]+)\"");
    smatch attr_match;
    regex_search(tag_attr, attr_match, attr_regex);
    string attr_name = attr_match[1];
    string attr_val = attr_match[2];

    tag_map.insert(make_pair(attr_name, attr_val));

    unordered_map<string, string>::iterator it = tag_map.begin();
    while (it != tag_map.end())
    {
        cout << it->second << endl;
        it++;
    }
}

void tag_vals(int n, int q)
{
    string tag;
    for (int i = 0; i < n; i++)
    {
        getline(cin, tag);
        symbol_Extractor(tag);
    }
    return 0;
    
}

int main()
{
    int n;
    int q;
    cin >> n >> q;
    cin.ignore();  // Ignore the newline character left in the input stream
    tag_vals(n, q);
    return 0;
}
