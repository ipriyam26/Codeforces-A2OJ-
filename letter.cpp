#include <iostream>
#include <cstdio>
#include <iomanip>
#include <stdio.h>
#include <vector>
#include <map>
#include <iterator>
#include <string.h>

using namespace std;
/*
Learned to use getline instead of only cin for 2 strings
*/
int main()
{

    string heading;
    string text;
    getline(cin,heading);
    getline(cin,text);
    
// cout<<text<<endl;
// cout<<endl;
    map<char, int> letter;
    map<char, int> material;
    map<char, int>::iterator itr;
    int len = text.length();
    int len2 = heading.length();
    for (int i = 0; i < len; i++)
    {
        letter[text[i]]++;
        // cout<<text[i]<<endl;
    }
    for (int i = 0; i < len2; i++)
    {

        material[heading[i]]++;
    }
    itr = letter.begin();


    for (; itr != letter.end(); itr++)
    {
        char s = itr->first;
        if(s==' '){
            continue;
        }

        // cout<<s<<" :  "<<itr->second<<endl;
        if (material[s] < itr->second)
        {
            cout << "NO";
            return 0;
        }
    }
        cout << "YES";


    return 0;
}
