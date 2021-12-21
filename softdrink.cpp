#include <iostream>
#include <vector>
#include <string.h>


using namespace std;

int main()
{
int n, k, l, c, d, p, nl, np;
cin>> n>> k>> l>> c>> d>> p >>nl >>np;

int drink = k*l/nl;
int salt = p/np;
int slice = c*d;

int ans = min(min(drink,slice),salt)/n;

cout<<ans;
    return 0;
}
