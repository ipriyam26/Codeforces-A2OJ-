#include <iostream>
#include <cstdio>
#include <iomanip>
#include <stdio.h>
#include <vector>


using namespace std;

int main()
{

int n,k,F=0,num;
scanf("%d%d",&n,&k);
k--;
int arr[n];
for (int i = 0; i < n; i++)
{
    cin>> arr[i];
}
num = arr[k];
for (int i = 0; i < n; i++)
{  

    if (i>k)
    {
        if(arr[i]!=num){
            F=1;
            break;
        }
    }
}



if(F==1){
    cout<<-1<<endl;
    return 0;
}

for (int i = k-1; i >= 0; i--)
{
    if(arr[i]==num){
k--;
    }
    else{
        break;
    }
}

cout<<k<<endl;

    return 0;
}
