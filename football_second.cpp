#include <iostream>
#include <cstdio>
#include <iomanip>
#include <stdio.h>
#include <vector>


using namespace std;

int main()
{

string n;
cin>>n;
char prev = n[0];
int c=1;

for (int i = 1; i < n.length(); i++)
{
    if(prev==n[i]){
        c++;
    }else{
        prev = n[i];
        c=1;
    }
    if(c==7){
        cout<<"YES";
        return 0;
    }

}
cout<<"NO";




    return 0;
}
