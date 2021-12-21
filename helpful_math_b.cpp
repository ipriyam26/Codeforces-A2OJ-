#include <iostream>

#include <string.h>

using namespace std;

int main()
{

    string s;


    cin>>s;
    int len = s.length();
    int ptr[4] = {0, 0, 0, 0};

    for (int i=0;i<len;i+=2)
    {     string h(1, s[i]);

         int k = stoi(h);
// sscanf(s[i], "%d", &i)
        ptr[k]++;
    }



    string ans = "";
    for (int i = 1; i < 4; i++)
    {
        for (int j = 1; j <= ptr[i]; j++)
        {
            
                ans = ans + to_string(i) + "+";
            
        }
    }
ans = ans.substr(0,ans.length()-1);
    cout<<ans;
    return 0;
}
