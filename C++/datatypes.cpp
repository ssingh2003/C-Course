#include<iostream>
int main(){
    int ascii='a';
    int a=12;
    std::cout<<ascii<<std::endl;
    std::cout<<sizeof(a)<<std::endl;

    short int si;
    long long int li;
    long double d;
    std::cout<<sizeof(si)<<std::endl;
    std::cout<<sizeof(li)<<std::endl;
    std::cout<<sizeof(d)<<std::endl;


    return 0;
}