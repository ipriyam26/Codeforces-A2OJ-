#include <iostream>
#include <cstdio>
#include <iomanip>
#include <stdio.h>
#include <map>
#include <iterator>
#include <string.h>


using namespace std;

/*
toRemove: number of one even letter i.e number of word with one or odd occurrence
Winning condition is if : toRemove = 1 
IF the person removes one and gets toRemove == 1
Then he wins and we are not taking arranging into considerations it will get arranged as every
element must have even terms to make a pair
*/

int main()
{

string input;
cin >> input;

map<char,int> word;
int len = input.length();
while (len--)
    {
        word[input[len]]++;
    }
    int toRemove=-1;
map<char,int>::iterator lettor;
for(lettor=word.begin();lettor!=word.end();lettor++){
if(lettor->second%2==1){
    toRemove++;
}
}
if(toRemove%2==1){
    cout<<"Second";
}
else{
    cout<<"First";
}






    return 0;
}
