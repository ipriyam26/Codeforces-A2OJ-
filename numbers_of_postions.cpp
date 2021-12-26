#include <iostream>
#include <cstdio>
#include <stdio.h>
#include <math.h>


using namespace std;

int main()
{

int n,first,second;
scanf("%d%d%d",&n,&first,&second);
    cout << min(n - first, second + 1) << endl;



    return 0;
}
