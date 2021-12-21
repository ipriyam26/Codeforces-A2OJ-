#include <iostream>
#include <cstdlib>

using namespace std;

// Finding position of 1 in matrix
pair<int,int> postion(int A[5][5]){

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if(A[i][j]!=0){
                
                return make_pair(i,j);

            }
        }
        
    }

    return make_pair(6,6);

}


int main()
{

int matrix[5][5];
for (int i = 0; i < 5; i++)
{
    for (int j = 0; j < 5; j++)
    {
        cin>>matrix[i][j];
    }
    
}
pair<int,int> onePosition = postion(matrix);

pair<int,int> middlePoint = make_pair(2,2);

if (onePosition.first == 6){
    cout<<"No One found";
}
else
{int moves = abs(middlePoint.first-onePosition.first) + abs(middlePoint.second - onePosition.second);

cout<<moves;
}


    return 0;
}
