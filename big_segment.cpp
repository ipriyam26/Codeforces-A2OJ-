#include <iostream>
#include <cstdio>
#include <iomanip>
#include <stdio.h>
#include <vector>
#include <map>
#include <iterator>
#include <string.h>


using namespace std;

int main()
{

int n;
scanf("%d",&n);

int l[n];
int r[n];
int min =LONG_MAX;

int max =0;
for (int i = 0; i < n; i++)
{
    cin>>l[i]>>r[i];
    scanf("%d%d",&l[i],&r[i]);
    if(l[i]<min){
        min=l[i];
    }
    if (r[i]>max)
    {
       max=r[i];
    }
    
}

for (int i = 0; i < n; i++)
{
    if(l[i]==min && r[i]==max){
        cout<<i+1;
        return 0;
    }
}
cout<<-1;



    return 0;
}
