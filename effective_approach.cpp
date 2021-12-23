#include <iostream>
#include <vector>
#include <string.h>
#include <iomanip>



using namespace std;






int main()
{

int n,s,q, V=0,P=0,x;

cin>>n;
int arr[100001];
for (int i = 1; i <=n; ++i)
{
    cin>>q;
    arr[q] =i;
}
cin>>s;
int sq;


while(s--)
{
    cin>>sq;
    // cout<<"Index for value "<<sq<<" is "<<arr[sq]<<endl;
    V += arr[sq];
    P += (n - arr[sq] + 1);

}



cout<<V<<" "<<P<<endl;


    return 0;
}
