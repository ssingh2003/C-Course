/*
multidimesional arrays have rows and columns in it

int arr[rows][columns];
where the first block is row while  the second is column
 Example int arr[3][4];
*/

#include<iostream>
using namespace std;
int main(){
const int rows{3};
const int columns{4};

int newarr[rows][columns]
{
    {0,4,3,5},
    {2,3,4,5},
    {1,2,3,5}
};
cout<<"Second row and third column element is:"<<newarr[1][2]<<endl;

    return 0;
}