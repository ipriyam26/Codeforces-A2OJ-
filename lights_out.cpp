#include <iostream>
#include <vector>

using namespace std;
bool defArr[3][3]={true};


void printarr(){
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout<<!defArr[i][j];
        }
        cout<<endl;
    }
}

void toggle(int i,int j){

defArr[i][j] = !defArr[i][j];
   for (int c = -1; c <=1; c++)
   {
       if(c==0){
           continue;
       }
      
          if(i+c<3 && i+c>=0)
          {
          defArr[i+c][j] =!defArr[i+c][j];

          }
     

     
                    if(j+c<3 && j+c>=0)
{
                    defArr[i][j+c] =!defArr[i][j+c];
}
      
    
      
       
   } 
   
    
}


int main()
{
    defArr[0][0]= !defArr[0][0];

int pressArr[3][3];
for (int i = 0; i < 3; i++)
{
    for (int j = 0; j < 3; j++)
    {
        cin>>pressArr[i][j];
    }
    
}


for (int i = 0; i < 3; i++)
{
    for (int j = 0; j < 3; j++)
    {
        if(pressArr[i][j]%2==1){
            toggle(i,j);
        }
    }
    
}

printarr();


    return 0;
}
