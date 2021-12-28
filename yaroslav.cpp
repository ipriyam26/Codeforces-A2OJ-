#include <iostream>
#include <cstdio>
#include <iomanip>
#include <stdio.h>
#include <vector>
#include <map>
#include <iterator>
#include <string.h>

using namespace std;

/*
7777 to be unique most  => 2 7's and 2 other numbers 2/4
where as for
0123456789
777777777 to be unique
767676767 at most => 5/9
777777777777
767676767676    => 6/12

so if length is odd then max occurence <= n/2+1;
if even then it is<= n/2;
*/

int main()
{

    int n, input;
    scanf("%d", &n);
    map<int, int> numbers;

    int num = n;

    while (n--)
    {
        scanf("%d", &input);
        numbers[input]++;
    }

    map<int, int>::iterator itr;
    if (num % 2 == 1)
    {
        for (itr = numbers.begin(); itr != numbers.end(); itr++)
        {
            if (itr->second > num / 2 + 1)
            {
                cout << "NO";
                return 0;
            }
        }
    }
    else
    {
        for (itr = numbers.begin(); itr != numbers.end(); itr++)
        {
            if (itr->second > num / 2)
            {
                cout << "NO";
                return 0;
            }
        }
    }

    cout << "YES";

    return 0;
}
