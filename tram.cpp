#include <iomanip>

#include <iostream>
#include <vector>

using namespace std;

int main()
{
     clock_t start, end;
  start = clock();

int n;
cin>>n;

int max=0,temp;
cin>>temp;
if(temp!=0){
    return 0;
}
int x;
for (int i = 1; i < n*2; i++)
{
cin>>x;
if(i%2==0){
    temp -= x;
}
else
{
    temp +=x;
}

if(max<temp){
max = temp;
}
    
}
cout<< max;


    end = clock();
    double time_taken = double(end - start) / double(CLOCKS_PER_SEC);
 cout << "Time taken by program is : " << fixed
         << time_taken<< setprecision(5);
    cout << " sec " << endl;
    return 0;
}



