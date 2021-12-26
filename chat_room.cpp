#include <iostream>
#include <cstdio>
#include <map>
#include <iterator>
#include <stdio.h>
#include <string.h>


using namespace std;

int main()
{
string word;
cin>>word;
string str = "hello";

int j=0;
for (int i = 0; i < word.length(); i++)
{   
    if(word[i]==str[j]){
        j++;
    }
    else{
        continue;
    }
    if(j==5){
        cout<<"YES";
        return 0;
    }

}
cout<<"NO";


    return 0;
}
