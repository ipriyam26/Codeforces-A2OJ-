#include <iostream>
#include <cstdio>
#include <iomanip>
#include <stdio.h>
#include <vector>


using namespace std;

int main()
{

int n,m,second=0;
scanf("%d%d",&n,&m);
for (int i = 0; i <=1000; i++)
{
    for (int j = 0; j <=1000; j++)
    {
        if((i*i+j==n )&& ( j*j +i == m)){
second++;
        }
        else if ((i*i+j>=n )|| ( j*j +i >= m))
        {
            break;
        }
    }
    if ((i*i>=n ))
        {
            break;
        }
    
}

cout<<second;


    return 0;
}
