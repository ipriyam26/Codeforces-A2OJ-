#include <iostream>
#include <cstdio>
#include <iomanip>
#include <stdio.h>
#include <vector>


using namespace std;

int main()
{

int n,first,second;
scanf("%d",&n);
int water[12];
for (int  i = 0; i < 12; i++)
{
    cin>>water[i];
}
int height=0,months=0;
int max,maxpos;
while (height<n)
{
        if(months==12&&height<n){
        cout<<"-1";
        return 0;
    }
        max=0;
maxpos=0;
    for (int j = 0; j < 12; j++)
    {
        if(max<water[j]){
            max = water[j];
            maxpos=j;
        }
    }

    height+=max;
    water[maxpos]=0;
    months++;

    
}

cout<<months;



    return 0;
}
