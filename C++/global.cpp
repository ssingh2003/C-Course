#include<iostream>
using namespace std;
int age{21}; //global variable
int main(){
    int age{18}; //Local to this function main
    cout<<age;
    return 0;
}