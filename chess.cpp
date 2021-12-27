#include <iostream>
#include <cstdio>
#include <iomanip>
#include <stdio.h>
#include <vector>


using namespace std;



int main()
{

int n,m;
scanf("%d%d",&n,&m);
char chess[n][m];
char current;
char previuos = '-' ;
char t = 'B';
for (int i = 0; i < n; i++)
{
    for (int j = 0; j < m; j++)
    {
        cin>>chess[i][j];       
        if(chess[i][j]=='.') {
            if((i+j)%2==0)
            chess[i][j]='B';
            else
            chess[i][j]='W';
        }
    }
    
}

for (int i = 0; i < n; i++)
{
    for (int j = 0; j < m; j++)
    {
         cout<<chess[i][j];
    }
    cout<<endl;
}



    return 0;
}
