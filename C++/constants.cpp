#include <iostream>
using namespace std;

int main()
{
    const double price_per_room{30.0};
    const double sales{0.06};
    const int expiry{30};
    // literal constants

    // declared constants
    // const keyword

    // constant expressions
    // constexpr keyword

    // enumerated constants
    // enum keyword

    // defined constants
    //#define
    cout << "Hello welcome to room cleaning service" << endl;
    cout << "\nHow many rooms you want cleaned? :";
    unsigned int rooms{0};
    cin >> rooms;

    cout << "\nEstimate for carpet cleaning service" << endl;
    cout << "No of rooms:" << rooms << endl;

    cout << "Price per room:" << price_per_room <<"$" << endl;
    cout << "cost:" << price_per_room * rooms << "$" << endl;

    cout<<"sales tax is:"<<price_per_room*rooms*sales<<endl;
    cout<<"================================="<<endl;
    cout<<"Total estimate is:"<<(price_per_room*rooms)+(price_per_room*rooms*sales)<<endl;
    cout<<"Valid for:"<<expiry<<" days";
    return 0;
}