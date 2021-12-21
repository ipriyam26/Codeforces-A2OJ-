#include <iostream>
#include <vector>
#include <string.h>


using namespace std;

int main()
{
string n;
cin>>n;
string search = "HQ9";
for (int i = 0; i < n.length(); i++)
{
    for (int j = 0; j < search.length(); j++)
    {
        if(n.find(search[j])!=-1){
            // cout<<search[j]<<endl;
            cout<<"YES";
            return 0;
        }
    }
    
}

cout<<"NO";
    return 0;
}
