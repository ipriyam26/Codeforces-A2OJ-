#include <iostream>
#include <cstdio>
#include <iomanip>
#include <stdio.h>
#include <string.h>



using namespace std;

int main()
{

string word,newWord="";
cin>>word;
transform(word.begin(),word.end(),word.begin(), ::tolower);
string vow = "aoyeui";
for (int i = 0; i < word.length(); i++)
{
    if(vow.find(word[i])!=-1){
        continue;
    }
    else{
        newWord += ".";
        newWord += word[i];
    }

}
cout<<newWord;




    return 0;
}
