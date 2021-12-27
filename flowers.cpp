#include <iostream>
#include <cstdio>
#include <iomanip>
#include <stdio.h>
#include <vector>


using namespace std;

int main()
{

long long n,minC=1,maxC=1;
cin>>n;
long long beauty[n];

for (int i = 0; i < n; i++)
{
    cin>>beauty[i];

    
}
sort(beauty,beauty+n);
long long max = beauty[n-1], min = beauty[0];
if(max==min){
    cout<<max-min<<" "<<(n-1)*n/2<<endl;
    return 0;
}

for (int i = 1; i < n-1; i++)
{
    if(beauty[i]==max){
        maxC++;
    }
    else if (beauty[i]==min)
    {
        minC++;
    }

}


cout<<max-min<<" "<<minC*maxC;



    return 0;
}
