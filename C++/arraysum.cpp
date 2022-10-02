#include<iostream>
#include<vector>
using namespace std;

int main(){
int i=0;
  int temp=0;
    vector<int> numbers{10,20,40,50};

    while(i<numbers.size()){
      
        temp=temp+numbers[i];
        i++;
    }
    cout<<"sum is:"<<temp;
    return 0;
}