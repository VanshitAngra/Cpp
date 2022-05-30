#include <iostream>
using namespace std;
void swap(int *, int*);
int main()
{
   
    int n1 = 11, n2 = 12;
    cout << "Before swapping" << endl;
    cout << "n1 = " << n1 << endl;
    cout << "n2 = " << n2 << endl;
    swap(&n1, &n2);
    cout << "\nAfter swapping" << endl;
    cout << "n1 = " << n1 << endl;
    cout << "n2 = " << n2 << endl;
    return 0;
}
void swap(int* n1, int* n2) {
int n3;
n3 = *n1;
*n1 = *n2;

*n2 = n3;
}