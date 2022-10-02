/*A vector is a dynamic array it can grow and shrink in size
It is a part of STL
it can provide bound checking
when we create C++ vector we create objects which can perform operations
elements are at same type
syntax of declaring vector
first include include<vector>

vector<int>test_scores;
vector<char> vowels;

examples
vector<char>vowels(5);  This is the size of the vector
vector<int>score(10);

intializing
vector<int> number{10,20,30};
vector<double> temperature(365,80.0);
in the double example it says that for 365 locations assign temperature as 80 degree celsius

default all elements are intialized to zero in a vector
*/
#include<iostream>
#include<vector>
using namespace std;
int main(){

    vector<int> scores{10,20,30,40,50};


    //vectors elements can be accessed using the at method
     //syntax- vector_name.at(element_index);

    cout<<"First element:"<<scores.at(0)<<endl;
    cout<<"Second element:"<<scores.at(1)<<endl;
    cout<<"Third element:"<<scores.at(2)<<endl;
    cout<<"Fourth element:"<<scores.at(3)<<endl;
    cout<<"Fifth element:"<<scores.at(4)<<endl;
    cout<<endl;
    scores.at(0)=90; //Assignment operator
     cout<<"First element:"<<scores.at(0)<<endl;

     //dynmaic functionality
     vector<int> nos{10,20,30}; //here size of vector array is 3
     //using push_back to add elemnts and obsever how size is increaisng dynamically
     nos.push_back(40);
     nos.push_back(50);
    //  cin>>nos.at(4);
    //  cout<<nos.at(4);
    cout<<"There are "<<nos.size()<<" numbers in the vector"<<endl;




    return 0;
}