#include <iostream>
#include <cstdio>
#include <iomanip>
#include <stdio.h>
#include <map>
#include <iterator>


using namespace std;

int main()
{

int s,n,x,y;
scanf("%d%d",&s,&n);
map<int,int> dragons;
while (n--)
{
    cin>>x>>y;
    dragons[x]= dragons[x]+y;
}
map<int,int>::iterator i;
for ( i = dragons.begin(); i != dragons.end(); i++)
{
    // cout<<i->first<<" :  "<<i->second<<endl;
    if(s>i->first){
        s+=i->second;
    }
    else{
        cout<<"NO";
        return 0;
    }
}
cout<<"YES";







    return 0;
}
