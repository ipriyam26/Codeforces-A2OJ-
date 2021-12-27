#include <iostream>
#include <cstdio>
#include <iomanip>
#include <stdio.h>
#include <algorithm>


using namespace std;

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

int people[] = {0,1,2,3,4};
int max,tmax=0;
do
{
    max = 0;

    // g23 + g32 + g15 + g51 + g13 + g31 + g54 + g45 + g15 + g51 + g54 + g45
    for (int i = 0; i <4; i++)
    {
        max += matrix[people[i]][people[i+1]] + matrix[people[i+1]][people[i]];
        if(i<2){
        max += matrix[people[i+2]][people[i+3]] + matrix[people[i+3]][people[i+2]];
        }
    }
    

    // max += matrix[people[0]][people[1]] + matrix[people[1]][people[0]] +  matrix[people[2]][people[3]] + matrix[people[3]][people[2]] + 
    // matrix[people[1]][people[2]] + matrix[people[2]][people[1]] +  matrix[people[3]][people[4]] + matrix[people[4]][people[3]] +
    // matrix[people[2]][people[3]] + matrix[people[3]][people[2]] + 
    //  matrix[people[3]][people[4]] + matrix[people[4]][people[3]]   ;
 
if(tmax<max){
    tmax=max;
}
 
} while (next_permutation(people,people+5));

cout<<tmax;




    return 0;
}
