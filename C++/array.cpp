// compound datatypes
/* Arrays are of fixed size arrays are contiguous in memory
Arrays indexs starts at 0
*/
#include<iostream>
using namespace std;
int main(){

    int test_scores[5]{10,20,30,40,50};
    int high_score[2]{40,50};
    cout<<"Index 0:"<<test_scores[0]<<endl;

    char newarray[]{'a','e','i','o','u'};
    cout<<"First vowel is:"<<newarray[0]<<endl;
    cout<<"Second vowel is:"<<newarray[1]<<endl;

    double hi_temps[]{90.1};
    hi_temps[0]=100.7;
    cout<<"Index 0 of high_temps is:"<<hi_temps[0]<<endl;
    cout<<"================================================"<<endl;
    cout<<"Enter 5 test scores: ";
    cin>>test_scores[0];
    cin>>test_scores[1];
    cin>>test_scores[2];
    cin>>test_scores[3];
    cin>>test_scores[4];
    
    cout<<"Test Course 1 is:"<<test_scores[0]<<endl;
    cout<<"Test Course 2 is:"<<test_scores[1]<<endl;
    cout<<"Test Course 3 is:"<<test_scores[2]<<endl;
    cout<<"Test Course 4 is:"<<test_scores[3]<<endl;
    cout<<"Test Course 5 is:"<<test_scores[4]<<endl;

    cout<<"Address of array is:"<<test_scores<<endl;
    


    return 0;
}
