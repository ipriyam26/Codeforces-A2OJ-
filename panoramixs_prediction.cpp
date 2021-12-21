#include <iostream>

using namespace std;


bool isPrime(int n){

    if (n==1){
        return false;
    }
    int i=2;
    while (i*i<=n)
    {
        if(n%i==0){
            return false;
        }
        i++;
    }
    return true;
}

int nextPrime(int n){

    if(n==2){
n +=1;
    }
    else{
        n=n+2;

    }

while(true){
    if(isPrime(n)){
        return n;
    }
    n += 2;
}

}


int main()
{
int n;
int m;
cin>>n>>m;

int nextPrimeN = nextPrime( n);
if(nextPrimeN==m){
    cout<<"YES";
}
else{
    cout<<"NO";
}


    return 0;
}
