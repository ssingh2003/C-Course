/*
algorithms
containers
functions
iterators 
 */
#include<bits/stdc++.h>
using namespace std;
int main(){
    //pairs
    pair<int,int>p={1,3};

    cout<<p.first<<" "<<p.second<<endl;
   pair<int,int>arr[]={{1,2},{2,3},{3,4}};
   cout<<arr[0].first<<endl;;
   cout<<arr[1].second<<endl;
   cout<<arr[2].first<<endl;


   vector<int>v1{};
   v1.push_back(1);
   v1.emplace_back(2);
   
    return 0;
}