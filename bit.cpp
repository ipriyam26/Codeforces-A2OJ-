#include <iostream>
#include <vector>
#include <string.h>


using namespace std;

int main()
{
    int n;
    cin>>n;
    string array[n];
    int value=0;
    for (int i = 0; i < n; i++)
    {
        cin>>array[i];
        if(array[i].find('+')!=-1){
            value += 1;
        }else{
value -= 1;
        }
    }
    cout<<value;


    return 0;
}
