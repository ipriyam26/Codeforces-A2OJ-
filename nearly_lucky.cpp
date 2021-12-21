#include <iostream>

using namespace std;

bool islucky(int n){
    if(n==4 || n==7){
        return true;
    }
    return false;
}

int main()
{
long long input;
cin>>input;
int lucky=0;
while(input!=0){
    //digit extraction
    int digit = input%10;
    if(islucky(digit)){
        lucky++;
    }
    //chopping
    input= input/10;
}
//check for if thenumber of digits are equal to lucky numbers
if(islucky(lucky)){
    cout<<"YES" ;
}
else{
    cout<<"NO";
}

    return 0;
}
