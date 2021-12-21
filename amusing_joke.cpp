#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    string guest,residence,mix;
    cin>>guest>>residence>>mix;
    
    int oldArray[26]={0};
    int newArray[26]={0};
if((guest.length()+ residence.length()) != mix.length()){
    cout<<"NO";
    return 0;
}
    for (int i = 0; i < guest.length(); i++)
    {
        oldArray[int(guest[i])-65]++;
    }
    for (int i = 0; i < residence.length(); i++)
    {
        oldArray[int(residence[i])-65]++;
        // cout<<"Letter : "<<residence[i]<<" AT place "<<int(residence[i])-65<<endl;
    }

    for (int i = 0; i < mix.length(); i++)
    {
        newArray[int(mix[i])-65]++;
                // cout<<"Letter : "<<mix[i]<<" AT place "<<int(mix[i])-65<<endl;

    }

    for (int i = 0; i <26; i++)
    {
        // cout<<i<<".  OLD : "<<oldArray[i]<<"  "<<"NEW : "<<newArray[i]<<endl;
        if(oldArray[i]!=newArray[i]){
            // cout<<i<<endl;
            cout<<"NO";
            return 0;
        }
    }
    
    cout<<"YES";
    
    
    


    return 0;
}
