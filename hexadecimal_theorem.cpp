#include <iostream>


using namespace std;
int main(){
    int a;
    cin >> a;
    cout << 0 << " " << 0 << " " << a;
}

// int main()
// {

//     int n;
//     cin>>n;
//     int fib[2 + n/2];
//     fib[0] = 0;
//     fib[1] = 1;
//     // cout << "0 : " << fib[0] << endl;
//     // cout << "1 : " << fib[1] << endl;

//     int i = 2;
//     while (true)
//     {
//         fib[i] = fib[i - 1] + fib[i - 2];
//         // cout << i << " : " << fib[i] << endl;
//         if (fib[i] >= n)
//         {
//             break;
//         }
//         i++;
//     }
// // int count =0;
//     int a = 1, b = (i - 1) / 2, c = i - 2, sum = 0, d;

//     while (a<i&&b<i&&c<i&&a>0&&b>0&&c>0)
//     {
//         // count++;
//         sum = fib[a] + fib[b] + fib[c];
//         d = n - sum;
//         if (d > 0)
//         {
//             if (fib[b + 1] - fib[b] <= d)
//             {
//                 b++;
//             }
//             else if (fib[a + 1] - fib[a] <= d)
//             {
//                 a++;
//             }
//         }
//         else if (d < 0)
//         {
//             if (fib[c - 1] - fib[c] <= d)
//             {
//                 c--;
//             }
//             else if (fib[b - 1] - fib[b] <= d)
//             {
//                 b--;
//             }
//             else if (fib[a - 1] - fib[a] <= d)
//             {
//                 a--;
//             }
//         }
//         else
//         {
//             cout << fib[a] << " " << fib[b] << " " << fib[c]<<endl;

//             return 0;
//         }
//     }

//     cout << "I'm too stupid to solve this problem";

//     return 0;
// }
