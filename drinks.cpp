#include <iostream>
#include <vector>
#include <iomanip>


using namespace std;

int main()
{
    int n;
    cin>>n;

    int drinks[n];
int sum=0;
    for (int i = 0; i < n; i++)
    {
        cin>>drinks[i];
sum += drinks[i];

    }

double ans = (sum/(n*100.0))*100.0;
    cout<<fixed << setprecision(12)<< ans;
    


    return 0;
}
