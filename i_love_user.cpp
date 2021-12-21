#include <iostream>
#include <vector>

using namespace std;

int main()
{
int n,amazing = 0;
cin>>n;
int min;
cin>>min;
int max= min;
int x;

for (int   i = 1; i < n; i++)
{
    cin>>x;
    if(x>max){
amazing++;
max =x;
    }
    if(x<min){
        amazing++;
        min=x;
    }
}

cout<< amazing;


    return 0;
}
