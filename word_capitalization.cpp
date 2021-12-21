#include <iostream>
#include <string.h>

using namespace std;



int main()
{

string input;
cin>>input;

if(!(input[0]>='A'&& input[0]<='Z')){
    input[0] = toupper(input[0]);
}

cout<<input;
    return 0;
}
