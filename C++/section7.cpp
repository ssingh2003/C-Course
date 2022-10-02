#include<iostream>
#include<vector>
using namespace std;
int main(){

    vector<int> vector1{};
    vector<int> vector2{};

    cout<<"Declared vectors vector1 and vector2"<<endl;
    cout<<"Adding 10 and 20 to Vector1"<<endl;
    cout<<endl;

    vector1.push_back(10);
    vector1.push_back(20);

    cout<<"First element of vetor 1 is:"<<vector1.at(0)<<endl;
    cout<<"Second element of vector 1 is:"<<vector1.at(1)<<endl;
    cout<<"Size of vector1 is:"<<vector1.size()<<endl;
    cout<<endl;

    cout<<"Adding 100 and 200 to vector2"<<endl;
    vector2.push_back(100);
    vector2.push_back(200);
    cout<<endl;

    //Displaying vector 2
    cout<<"First element of vector 2 is:"<<vector2.at(0)<<endl;
    cout<<"Second element of vecto 2 is:"<<vector2.at(1)<<endl;
    cout<<"Size of vector2 is:"<<vector2.size()<<endl;
    cout<<endl;

    //Declaring empty 2d vector
    vector<vector<int>> vector_2d{};
    vector_2d.push_back(vector1);
    vector_2d.push_back(vector2);

    //Displaying vector_2d elements
    cout<<"First element of 2 dimensional vector is:"<<vector_2d.at(0).at(0)<<endl;
    cout<<"Second element of 2 dimensional vector is:"<<vector_2d.at(0).at(1)<<endl;
    cout<<"Third element of 2 dimensional vector is:"<<vector_2d.at(1).at(0)<<endl;
    cout<<"Fourth element of 2 dimensional vector is:"<<vector_2d.at(1).at(1)<<endl;
    cout<<endl;
    vector1.at(0)=1000;
    cout<<"2d vector after modifying entries"<<endl;
    cout<<"First element of 2 dimensional vector is:"<<vector_2d.at(0).at(0)<<endl;
    cout<<"Second element of 2 dimensional vector is:"<<vector_2d.at(0).at(1)<<endl;
     cout<<"Third element of 2 dimensional vector is:"<<vector_2d.at(1).at(0)<<endl;
    cout<<"Fourth element of 2 dimensional vector is:"<<vector_2d.at(1).at(1)<<endl;

    cout<<endl;

    cout<<"Vector1 elements after modification is"<<endl;
    cout<<"First element of vetor 1 is:"<<vector1.at(0)<<endl;
    cout<<"Second element of vector 1 is:"<<vector1.at(1)<<endl;
    return 0;
}
