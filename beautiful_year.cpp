#include <iostream>
#include <string.h>

using namespace std;

bool hasUniqueDigits(int year){
    string y = to_string(year);
    int f=0;
    for (int i = 0; i < 4; i++)
    {
        for (int j = i+1; j < 4; j++)
        {
            if(y[i]==y[j]){
                f=1;
            }
        }
        
    }
    if(f==0)
{    return true;
}    
return false;
    
}

int main()
{

int year;
cin>>year;

year++;
while(true){
if(hasUniqueDigits(year)){
    cout<< year;
    break;
}
year++;
}



    return 0;
}
