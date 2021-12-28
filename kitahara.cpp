#include <iostream>
#include <cstdio>
#include <iomanip>
#include <stdio.h>
#include <vector>
#include <map>
#include <iterator>
#include <string.h>


using namespace std;

int main()
{

int n,first,second=0;
scanf("%d",&n);
map<int,int> apples;
int number=n;
while (n--)
{
    cin>>first;
    second+=first;
    apples[first]++;
}

if(second%200!=0 || number==1){
    
    cout<<"NO";
}
else if(apples[100]==0 && apples[200]%2==1){
        cout<<"NO";

}
else{
    cout<<"YES";
}






    return 0;
}
