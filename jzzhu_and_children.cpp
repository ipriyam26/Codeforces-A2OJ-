#include <iostream>
#include <math.h>
#include <string.h>


using namespace std;



int main()
{

int n,m,max=0,pos=0;
double k;
cin>>n>>m;
for (int i = 1; i <=n; i++)
{
 cin>>k;

if(ceil(k/m) >= max){
    pos = i;
    max = ceil(k/m);
}

}

cout<<pos<<endl;




    return 0;
}
