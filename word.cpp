#include <iostream>
#include <string.h>

using namespace std;


bool isUpper(string n){
int length = n.length();
int U=0,L =0;
for(int i=0;i<length;i++){
    if(n[i] >='A'&& n[i]<='Z'){
        U++;
    }
    else{
        L++;
    }

}
if(L>=U){
    return false;
}
return true;
}

int main()
{

string name;
cin>>name;

if(isUpper(name)){
    transform(name.begin(), name.end(), name.begin(), ::toupper);
    
}
else{
        transform(name.begin(), name.end(), name.begin(), ::tolower);

}
cout<<name;
    return 0;
}
