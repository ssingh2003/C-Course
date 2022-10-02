#include <iostream>
using namespace std;
int main()
{
    //     char; //one byte 8 bits
    //     char16_t; //2 byte 16 bits
    //     char32_t; //3 byte  32 bits
    //     wchar_t; //largest char set

    //     signed short int; //16bits atleast by default intergers are signed
    //     signed int; //16bits atleast
    //     signed long ;//32 bits atleast
    //     signed long long int;//64 bits atleast

    //      unsigned short int; //16bits atleast
    //     unsigned int; //16bits atleast
    //     unsigned long ;//32 bits atleast
    //     unsigned long long ;//64 bits atleast
    // //unsigned means 0 or positive integers only

    // //float
    // float; // 7 decimal degits
    // double; //15 decimal degits
    // long double; // 19 decimal digits

    // bool; //usually 8 bits

    char character{'a'};
    cout << character << endl;
    // int
    unsigned short int exam_score{55};
    cout << exam_score << endl;
    long people{2061000};
    cout << people << endl;

    signed short marks{-20};
    cout << marks << endl;

    long long population{202020202020020200};
    cout << population << endl;
    // float
    float price{20.051002};
    cout << price << endl;

    double floati{10.100229102021020};
    cout << floati << endl;
    long double doubly{2.7e20};
    cout << doubly << endl;
    ;
    // boolean
    bool gameover{true};
    cout << gameover << endl; // Prints 1  for true and 0 for false

    // Overflow error
    short num1{30000};
    short num2{1000};
    long num3 = num1 * num2;
    cout << num3 << endl;
    return 0;
}