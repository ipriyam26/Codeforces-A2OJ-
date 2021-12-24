#include <iostream>
#include <cstdio>
#include <iomanip>
#include <stdio.h>
#include <math.h>

using namespace std;

int main()
{

    int n, m, k, u = 0;
    scanf("%d%d", &n, &m);
    int tv[1001] = {0};
    while (n--)
    {
        cin >> k;
        if (k < 0)
        {
            u++;
            tv[-k]++;
        }
    }
    // cout<<"don1";
    int j = 0, money = 0;
    if (u == 0)
    {
        cout << "0";
        return 0;
    }
    // cout<<"don1";

    for (int i = 1000; i >= 0; i--)
    {
        if (tv[i] != 0)
        {
            for (int p = 1; p <= tv[i]; p++)
            {
                if (j == m)
                {
                    cout << money;
                    return 0;
                }
                j++;
                money += i;
            }
                // cout<<"don2";

        }
    }
    cout << money;

    return 0;
}
