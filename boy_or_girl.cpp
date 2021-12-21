#include <iostream>
#include <string.h>

using namespace std;

int main()
{
string username,tempwrd = "";
cin>>username;
int len = username.length();
for (int i = 0; i < len; i++)
{
    /* code */

    if(tempwrd.find(username[i])==-1){
        tempwrd += username[i];
    }

}

if(tempwrd.length()%2==0){
    cout<<"CHAT WITH HER!";
}
else{
        cout<<"IGNORE HIM!";

}

    return 0;
}
