#include <iostream>
#include <cstdio>
#include <iomanip>
#include <stdio.h>
#include <string.h>
using namespace std;


string getReverseWord(string word){
    int l = word.length();
string revword="";
while (l--)
{
   revword += word[l];
}
return revword;
}

int main()
{

string word,revword,rev;
cin>>word;

revword = getReverseWord(word);
cin>>rev;
if (revword.compare(rev)==0)
{
    printf("YES");
}
else
{
    printf("NO");
}

    return 0;
}
