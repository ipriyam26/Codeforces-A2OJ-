#include <iostream>
#include <cstdio>
#include <iomanip>
#include <stdio.h>
#include <vector>
#include <map>
#include <iterator>
#include <string.h>


using namespace std;
// The problem isn't what it seems has a few caviots in it

int main()
{

string first,second;
cin>>first>>second;

int lenF = first.length();
int lenS = second.length();

if(lenF!=lenS){
    cout<<"NO";
    return 0;
}
map<char,char> difference;
for (int i = 0; i < lenF; i++)
{ 
    if(first[i]!=second[i]){
        difference[first[i]]+=second[i];
    }
}
if(difference.size()!=2){
    cout<<"NO";
    return 0;
}


map<char,char>::iterator i = difference.begin();
char a = i->first;
char ar = i->second;
i++;
char b = i->first;
char br = i->second;
// cout<<a<<" : "<<ar<<endl;
// cout<<b<<" : "<<br<<endl;
if(a!=br || b!=ar){
cout<<"NO";
return 0;   

}
cout<<"YES";




    return 0;
}
