#include <iostream>
#include <cstdio>
#include <iomanip>
#include <stdio.h>
#include <vector>


using namespace std;

int main()
{

long long n,k;
// scanf("%I64d",&n);
// scanf("%I64d",&k);
cin>>n>>k;

if(k<=n/2){
    long long ans = 2*k -1;
    cout<<ans;

}
else{
    long long v = n/2;
    long long ans = 2*(k%v);
    cout<<ans;
}




    return 0;
}
