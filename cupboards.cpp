#include <iostream>
#include <vector>

using namespace std;

int main()
{
int n;
cin>>n;


int leftDoor = 0;
int rightDoor = 0;
int r=0,l=0;
for (int i = 0; i < n; i++)
{
    cin>>l>>r;
    leftDoor += l;
    rightDoor += r;
    
}

int time = min(leftDoor,n-leftDoor)+ min(rightDoor,n-rightDoor);

cout<<time;



    return 0;
}
