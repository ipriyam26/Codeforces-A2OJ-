#include <iostream>
#include <vector>

using namespace std;

int main()
{

    int n;
    cin >> n;
    int g1[n][3];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> g1[i][j];
        }
    }
    int f = 0;
    for (int i = 0; i < 3; i++)
    {
        int sum = 0;
        for (int j = 0; j < n; j++)
        {

            sum += g1[j][i];
        }
        if (sum != 0)
        {
            f = 1;
            break;
        }
    }

    if (f == 0)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }

    return 0;
}
