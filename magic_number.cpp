#include <iostream>
#include <cstdio>
#include <iomanip>
#include <stdio.h>
#include <string.h>

using namespace std;

int main()
{

    int n, first, second = 0;
    scanf("%d", &n);

    while (n != 0)
    {
        first = n % 10;
        if (n == 4)
        {
            cout << "NO";
            return 0;
        }
        if (first == 0 || first == 2 || first == 3 || first == 5 || first == 6 || first == 7 || first == 8 || first == 9)
        {
            cout << "NO";
            return 0;
        }

        if (first == 4)
        {
            second = second * 10 + first;
        }
        else
        {
            second = 0;
        }
        if (second == 444)
        {
            cout << "NO";
            return 0;
        }

        n = n / 10;
    }

    cout << "YES";

    return 0;
}
