#include <iostream>
#include <cstdio>
#include <iomanip>
#include <stdio.h>
#include <map>
#include <vector>
#include <string.h>
#include <iterator>


using namespace std;

int main()
{

int n,max=0,first;
scanf("%d",&n);
map<int,map<string,int> > arr;
for (int i = 0; i < n; i++)
{
    scanf("%d", &first);
if(arr[first]["Occurrence"]==0)
{
    arr[first]["Diff"] = i;
    max++;

}
else if(arr[first]["Occurrence"]==-1){
    continue;
}
else if(arr[first]["Occurrence"]==1)
{  
    arr[first]["Diff"] =  i-arr[first]["Diff"];
    arr[first]["Last"] = i;
}
else{

    if(i-arr[first]["Last"]== arr[first]["Diff"]){
    
        arr[first]["Last"] = i;
    }else{
   

        arr[first]["Occurrence"]=-1;
        max -=1;
        continue;
    }
    
}
arr[first]["Occurrence"]+= 1;

}
cout<<max<<endl;
if(max==0){
    return 0;
}
map<int,map<string,int> >::iterator k;
for ( k = arr.begin(); k != arr.end(); k++)
{
    if(k->second["Occurrence"]!=-1){
    cout<<k->first<<" ";
    if(k->second["Occurrence"]>1)
    cout<<k->second["Diff"]<<endl;
    else
    cout<<0<<endl;
    }

    
   
}





    return 0;
}
