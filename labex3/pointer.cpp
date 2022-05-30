#include <iostream>
using namespace std;
int main()
{
    int a, b;
    int *pta, *ptb;
    pta = &a;
    ptb = &b;
    cout << "Enter element a : ";
    cin >> a;
    cout << endl;
    cout << "Enter element b : ";
    cin >> b;
    cout << "value of a = " << *pta << "\n";
    cout << "Address of a = " << pta << "\n";
    cout << "Increment Address of a = " << ++pta << "\n";
    cout << "value of b = " << *ptb << "\n";
    cout << "Address of b = " << ptb << "\n";
    cout << "Decrement of address of b = " << --ptb;
}