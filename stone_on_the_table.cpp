#include <iostream>
#include <string.h>

using namespace std;

// Logic
// i and j are two pointers if the element at i is same as at j it 
//  means we will have to remove it so increase the count if we encounter
//   a unique element then we will just shift i to to j's position and follow 
//  the same procedure for the this, until we get to the last digit, complexity O(n)
//   one string transversal

int main()
{
int n;
string stones;

cin>>n>>stones;

int length = stones.length();

int i=0,j=1;
int toBeRemoved =0;

while(i<length){

if(stones[i]==stones[j]){
    toBeRemoved++;
    j++;
}
else{
    i=j;
    j=j+1;
}

}
cout<<toBeRemoved;

    return 0;
}
