#include <iostream>
#include <cstdio>
#include <iomanip>
#include <stdio.h>
#include <vector>

using namespace std;

int main()
{

    int n, space, k;
    scanf("%d", &n);
    for (int i = 0; i <= n; i++)
    {
        space = (n - i);
        while (space--)
        {
            cout << "  ";
        }
        k = 0;
        while (k <= i)
        {
            if(k==0 && i==0){
                cout<<k;
            }
            else{

            cout << k << " ";
            }
            k++;
        }
        k = i - 1;
        while (k >= 0)
        {
            if (k == 0)
            {
                cout << k;
            }
            else
            {
                cout << k << " ";
            }
            k--;
        }

        cout << endl;
    }
    for (int i = n - 1; i >= 0; i--)
    {
        space = (n - i);
        while (space--)
        {
            cout << "  ";
        }
        k = 0;
        while (k <= i)
        {
            if(k==0 && i==0){
                cout<<k;
            }
            else{

            cout << k << " ";
            }
            k++;
        }
        k = i - 1;
        while (k >= 0)
        {
            if (k == 0)
            {
                cout << k ;
            }
            else
            {
                cout << k << " ";
            }
            k--;
        }

        cout << endl;
    }

    return 0;
}
