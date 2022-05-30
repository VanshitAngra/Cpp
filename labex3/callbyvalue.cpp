#include <iostream>  
using namespace std;  
void change(int a);  
int main()  
{  
int a = 12;  
change(a);  
cout << "Value of the a is: " << a<< endl;  
return 0;  
}  
void change(int a)  
{  
a = 15;  
} 