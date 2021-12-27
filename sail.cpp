#include <iostream>
#include <cstdio>
#include <iomanip>
#include <stdio.h>
#include <vector>


using namespace std;

int main()
{

int t,Sx,Sy,Ex,Ey;
scanf("%d",&t);
scanf("%d",&Sx);
scanf("%d",&Sy);
scanf("%d",&Ex);
scanf("%d",&Ey);
int X = Ex-Sx; 
int Y = Ey - Sy;
int time=0;
char dt[t];
for (int i = 0; i < t; i++)
{
    cin>>dt[i];
   
}
char d;
for (int i = 0; i < t; i++)


{
    d = dt[i];
    time++;
    switch (d)
    {
    case 'N':
        if(Y>0){
            Y--;
        }

        break;
    case 'S':
        if (Y<0)
        {
           Y++;
        }
        

        break;
    case 'E':
        if (X>0)
        {
            X--;
        }
        
        break;
    case 'W':
        if (X<0)
        {
           X++;
        }
        break;
    
    default:
        break;
    }
       if (X==0 && Y==0)
    {
cout<<time;
return 0;
   }
}

    cout<<-1;




    return 0;
}
