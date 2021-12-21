#include <iostream>
#include <map>
#include <iterator>

using namespace std;

int main()
{

    map<int, int> horseshoe;
            int n;

    for (int i = 0; i < 4; i++)
    { cin>>n;
        horseshoe[n]++;
    }
    map<int, int>::iterator itr;
int same =0;
    for (itr  = horseshoe.begin(); itr != horseshoe.end(); itr++)
    {
        /* code */
        if(itr->second > 1){
            same+= (itr->second-1);
        }
    }

    cout<<same;
    

    return 0;
}
