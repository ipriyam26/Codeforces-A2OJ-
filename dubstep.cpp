#include <iostream>
#include <cstdio>
#include <iomanip>

#include <stdio.h>
#include <string.h>


using namespace std;

int main()
{

string dubstep;
cin>>dubstep;
int k ;
string sentence="",word="";

for (int i = 0; i < dubstep.length(); i++)  
{
    word = word +dubstep[i];
    if(word=="WUB"){
        word="";
    }
     else{
         k= word.find("WUB");
         if(k!=-1){
          word =    word.substr(0,k);
            sentence += word+" "; 
            word="";
         }
         else{
             if(i==dubstep.length()-1){
                 sentence+=word;
             }
         }
     }
    

}
int len = sentence.length();
if(sentence[len-1]==' ')
{
    sentence = sentence.substr(0,len-1);
}

cout<<sentence;



    return 0;
}
