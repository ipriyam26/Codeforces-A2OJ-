#include <iostream>
#include <string.h>

using namespace std;

int main()
{
string code ;
cin>>code;
int length  = code.length();
string broze = "";
int i=0;
while (i<length)
{
    if(code[i]== '-' && i<length-1){
        if(code[i+1]=='-'){
broze = broze+'2';
        }
        else{
            broze = broze+'1';

        }
        
    i+=1;
}
else{
            broze += '0';
        }
        i++;
}
cout<<broze;

    return 0;
}
