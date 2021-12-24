#include <iostream>
#include <cstdio>
#include <iomanip>
#include <stdio.h>
#include <math.h>


using namespace std;

int main()
{

int n,first,second;
scanf("%d",&n);
int a[n];

   int i, c0 = 0, c5 = 0;
    for (i = 0; i < n; i++) {
        if (a[i] == 0)
            c0++;
        else
            c5++;
    }
 
    // The number of 5s that can be used
    c5 = floor(c5 / 9) * 9;
    if (c0 == 0) // The number can't be
        cout << -1; // made multiple of 10
    else if (c5 == 0) // The only multiple of 90
        cout << 0; // that can be made is 0
    else {
        for (i = 0; i < c5; i++)
            cout << 5;
        for (i = 0; i < c0; i++)
            cout << 0;
    }


    return 0;
}
