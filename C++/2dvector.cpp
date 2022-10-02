#include<iostream>
#include<vector>
using namespace std;
int main(){
    //2d Vector syntax
     vector<vector<int>>movie_ratings{
        {0,1,2,4},
        {1,2,4,4},
        {1,3,4,5}
    };
    cout<<"First row second column:"<<movie_ratings.at(0).at(1)<<endl;
    cout<<"Third row and third column:"<<movie_ratings.at(2).at(3)<<endl;
   
    return 0;
}