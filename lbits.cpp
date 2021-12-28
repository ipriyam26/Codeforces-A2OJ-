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

string n;
cin>>n;
int c;
c=n.find('0');
if(c==-1){

    n= n.substr(0,n.length()-1);
    cout << n ;
}
else{


    n = n.substr(0,c)+n.substr(c+1);
    cout<<n;
}



    return 0;
}
