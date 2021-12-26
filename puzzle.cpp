#include <iostream>
#include <cstdio>
#include <iomanip>
#include <stdio.h>
#include <map>
#include <iterator>
#include <vector>


using namespace std;

int main()
{

int n,m,second,min=INT_MAX,f =0,l;
scanf("%d%d",&n,&m);
l=n-1;
int arr[m];
for (int i = 0; i < m; i++)
{
    cin>>arr[i];
}
sort(arr,arr+m);
// for (int i = 0; i < m; i++)
// {
//     printf("%d\n",arr[i]);
// }
// cout<<l<<" "<<m<<endl;
while (l<m)
{
    if(min>(arr[l]-arr[f])){
        min = arr[l]-arr[f];
    }
    l++;
    f++;
    // cout<<min<<endl;
}

cout<<min;


    return 0;
}
