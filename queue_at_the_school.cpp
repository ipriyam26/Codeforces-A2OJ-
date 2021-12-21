#include <iostream>
#include <string.h>

using namespace std;

string swap(string s,int p){
    // cout<<"Swaping";
    char temp = s[p];
    s[p] = s[p+1];
    s[p+1] = temp;
    return s;
}

int main()
{

int n,t;
string s;

cin>>n;


cin>>t;


cin>>s;
// cout<<s[2];

for (int i = 0; i < t; i++)
{
    for (int j = 0; j < n-1; j++)
    {
       if(s[j]<s[j+1]){
    s = swap(s,j);
        j++;
       }

    }
    
}
 cout<<s;





    return 0;
}
