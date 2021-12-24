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
int distance, min = INT_MAX, numberOfMin = 1, minPos;
int i=0;
while (i<n)
{
    scanf("%d",&distance);
    if(distance<=min){
        if(distance==min){
            numberOfMin++;

        }
        else{
            min = distance;
            numberOfMin=1;
            minPos=i+1;
        }
    }
    i++;
}

if(numberOfMin>1){
    cout<<"Still Rozdil";
}else{
cout<<minPos;
}






    return 0;
}
