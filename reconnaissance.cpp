#include <iostream>
#include <cstdio>
#include <iomanip>
#include <stdio.h>
#include <vector>


using namespace std;

// BRUTE FORCE

// int main()
// {

// int n,input;
// scanf("%d",&n);
// int height[n];

// for (int i = 0; i < n; i++)
// {
// scanf("%d",&height[i]);
// }
// int min = 1000;
// int minx,miny;
// for (int i = 0; i < n; i++)
// {
//     for (int j = i+1; j < n; j++)
//     {
//         if(abs(height[i]-height[j])<min){
//             minx = i+1;
//             miny = j+1;
//             min = abs(height[i]-height[j]);
//         }
//     }
    
// }

// cout<<minx<<" "<<miny;





//     return 0;
// }


int main()
{
    int n, a1;
    cin >> n >> a1;

    int prev(a1), cur, reconnaissance(1000), index1, index2;
    for (int i = 2; i <= n; ++i)
    {
        cin >> cur;
        int diff = abs(cur - prev);
        if (diff < reconnaissance)
        {
            reconnaissance = diff;
            index1 = i - 1;
            index2 = i;
        }
        prev = cur;
    }
    int diff = abs(a1 - prev);
    if (diff < reconnaissance)
    {
        index1 = n;
        index2 = 1;
    }
    cout << index1 << " " << index2 << endl;
    return 0;
}

