#include<iostream>
using namespace std;
int main(){
    //Literal Constants
const double price_smallroom{25};
const double price_largeroom{35};
const double tax{0.06};
const int days{30};

unsigned int smallroom,largeroom;
cout<<"How many small rooms do you want? ";
cin>>smallroom;
cout<<"\nHow many large rooms do you want? ";
cin>>largeroom;
cout<<"Number of small room:"<<smallroom<<endl;
cout<<"Number of largeroom:"<<largeroom<<endl;
cout<<"Price per small room:"<<price_smallroom<<"$"<<endl;
cout<<"Price per large room:"<<price_largeroom<<"$"<<endl;
double cost=(price_smallroom*smallroom)+(price_largeroom*largeroom);
double taxi=(price_smallroom*smallroom*tax)+(price_largeroom*largeroom*tax);
cout<<"Cost is:"<<cost<<"$"<<endl;
cout<<"Tax is:"<<taxi<<"$"<<endl;
cout<<"============================================"<<endl;
cout<<"Total estimate is:"<<cost+taxi<<endl;
cout<<"Valid for:"<<days<<" days";
return 0;
}