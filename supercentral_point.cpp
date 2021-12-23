#include <iostream>
#include <cstdio>
#include <iomanip>
#include <stdio.h>
#include <vector>


using namespace std;

int main()
{

int d,n,read =0;
scanf("%d",&n);

int pages[7];
for (int i = 0; i < 7; i++)
{
    scanf("%d",&pages[i]);
}

for (int i = 0; true; i++)
{
    d = i%7;
    read += pages[d];
    if(read>=n){
        cout<<d+1;
        break;
    }
}







    return 0;
}
