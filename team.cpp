#include <iostream>
#include <vector>
#include <string.h>


using namespace std;

int main()
{
int a;
cin>>a;
int P,V,T,answered = 0;

for (int i = 0; i < a; i++)
{
   cin>>P>>V>>T;
   if(P+V+T>=2){
       answered++;
   }
}
cout<<answered;

    return 0;
}
