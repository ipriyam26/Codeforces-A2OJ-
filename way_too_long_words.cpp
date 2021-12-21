#include <iostream>
#include <string.h>

using namespace std;

int main()
{int n,len;
cin>>n;
string result[n];

string w,newWord;
for (int i = 0; i < n; i++)
{
    /* code */
    cin>>w;
     len = w.length();
    if(len>10){
         newWord = w[0]+ to_string(len-2) + w[len-1];
        result[i]=newWord;
    }
    else{
        result[i]=w;
    }
}

for (int i = 0; i < n; i++)
{
    /* code */
    cout<<result[i]<<endl;
}

    return 0;
}
