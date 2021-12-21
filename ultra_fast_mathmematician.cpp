#include <iostream>
#include <vector>
#include <iomanip>



using namespace std;



int main()
{


string number1, number2;
cin>>number1>>number2;

string result="";
int len = number1.length();
for(int i=0;i<len;i++){

if(number1[i]!=number2[i]){
    result += '1';
}
else{
    result += '0';
}

}
cout<<result;
 
//  clock_t start, end;
//   start = clock();
//     end = clock();
//     double time_taken = double(end - start) / double(CLOCKS_PER_SEC);
//  cout << "Time taken by program is : " << fixed
//          << time_taken<< setprecision(5);
//     cout << " sec " << endl;
    return 0;
}
