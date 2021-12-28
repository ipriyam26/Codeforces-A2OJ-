#include <iostream>
#include <cstdio>
#include <iomanip>
#include <stdio.h>
#include <vector>
#include <map>
#include <iterator>
#include <string.h>


using namespace std;
//Learned Intresting way to take triple sum
// SUM1 = A1+A2+A3
// SUM2 = A2+A3+A4
// SUM2 = SUM1-A1+A4
int main()
{

int n,k;
scanf("%d%d",&n,&k);
int arr[n];int sum=0;
int min = INT_MAX;
int minPTR = 0;
for (int i = 0; i < n; i++)
{
    scanf("%d",&arr[i]);

    if(i<k){
        sum+=arr[i];
    } 
}

for (int i = 1; i < n-k; i++)
{
    sum = sum - arr[i-1]+arr[i+k-1];
    if(sum<min){
        min=sum;
        minPTR = i;
    }
}





cout<<minPTR+1;








    return 0;
}
