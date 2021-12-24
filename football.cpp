#include <iostream>
#include <cstdio>
#include <stdio.h>
#include <string.h>



using namespace std;

int main()
{

int n;
scanf("%d",&n);
string teamOne,teamTwo,temp;
int One=1,Two=0;
cin>>teamOne;
n--;
while(n--){
cin>>temp;
if(temp==teamOne){
    One++;
}
else
{
    teamTwo = temp;
    Two++;
}

}

if(One>Two){
    cout<<teamOne;
}
else
{
    cout<<teamTwo;
}







    return 0;
}
