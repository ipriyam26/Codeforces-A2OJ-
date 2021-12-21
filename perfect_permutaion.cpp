#include <iostream>
#include <vector>
#include <iomanip>


using namespace std;

int main()
{
 clock_t start, end;
  start = clock();






    end = clock();
    double time_taken = double(end - start) / double(CLOCKS_PER_SEC);
 cout << "Time taken by program is : " << fixed
         << time_taken<< setprecision(5);
    cout << " sec " << endl;

    return 0;
}
