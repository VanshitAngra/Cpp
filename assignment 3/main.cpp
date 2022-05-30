//
//  main.cpp
//  assignment 3
//
//  Created by Vanshit Angra on 13/03/22.
//
//1st

/*#include <iostream>
using namespace std;

int main()
{
    int n1;
    cout<<"Enter the number";
    cin>>n1;
    cout<<(n1++);
    cout<<(++n1);
    return 0;
}
 
 
 //2nd
 
#include <iostream>
using namespace std;

int main()
{
    int a,b,c;
    cout<<"Enter first number"<<endl;
    cin>>a;
    cout<<"Enter second number"<<endl;
    cin>>b;
    c=a;
    a=b;
    b=c;
    cout<<"Number after swaping a = "<<a<<endl;
    cout<<"Number after swaping b = "<<b<<endl;
    return 0;
}
 
 //3rd
#include <iostream>
using namespace std;

int main()
{
    int a,b;
    cout<<"Enter first number"<<endl;
    cin>>a;
    cout<<"Enter second number"<<endl;
    cin>>b;
    a=a+b;
    b=a-b;
    a=a-b;
    cout<<"Number after swaping a = "<<a<<endl;
    cout<<"Number after swaping b = "<<b<<endl;
    return 0;
    
    
}
 
 //4th
 
#include <iostream>
using namespace std;

int main()
{
    cout<<sizeof(int)<<endl;
    cout<<sizeof(float)<<endl;
    cout<<sizeof(long)<<endl;
    cout<<sizeof(char)<<endl;
 
    return 0;
}
 
//5th
 
#include <iostream>
using namespace std;

int main()
{
    int n1;
    cout<<"Enter the number";
    cin>>n1;
    if (n1%3==0||n1%7==0)
    {
        cout<<"The given number is divisible by 3 or 7"<<endl;
    }
    else
    {
        cout<<"The given number is not divisible by 3 or 7"<<endl;
    }
    return 0;
}
 //6th

#include <iostream>
using namespace std;

int main()
{
    int a,b,c;
    cout<<"Enter First number"<<endl;
    cin>>a;
    cout<<"Enter second number"<<endl;
    cin>>b;
    cout<<"Enter third number"<<endl;
    cin>>c;
    if (a>b && b>c)
    {
        cout<<"A is the largest number "<<endl;
    }
    else if (b>c && c>a)
    {
        cout<<"B is the largest number "<<endl;
    }
    else if (c>b && b>a)
    {
        cout<<"C is the largest number "<<endl;
    }
    else if (a==b && b>c)
    {
        cout<<"A and B are largest number "<<endl;
    }
    else if (b==c && b>a)
    {
        cout<<" B and C are largest number "<<endl;
    }
    else if (a==c && a>b)
    {
        cout<<" A and C are largest number "<<endl;
    }
    
    else
    {
        cout<<"invalid input"<<endl;
    }
    return 0;

}
 //7th
#include <iostream>
using namespace std;

int main()
{
    int a,fact=1;
    cout<<"Enter the number to find factorial of the number"<<endl;
    cin>>a;
    for (int i=1;i<=a;i++)
    {
        fact*=i;
    }
    cout<<"Factorial of number is "<<fact<<endl;
    
    return 0;
}
 
 //8th
 
#include <iostream>
using namespace std;

int main()
{
    int a,sum=0,r=0;
    cout<<"Enter the number to find sum of digits of the number"<<endl;
    cin>>a;
    while (a>0)
    {
        r=a%10;
        sum=sum+r;
        a=a/10;
    }
    cout<<"sum of digits is "<<sum<<endl;
    return 0;
}

//9th
#include <iostream>
using namespace std;

int main()
{
    int a,sum=0;
    cout<<"Enter the number "<<endl;
    cin>>a;
    for (int i=1;i<=a;i++)
    {
        sum=sum+(i*i);
    }
    cout<<"sum of the series is "<<sum<<endl;
}
 //10th

#include <iostream>
using namespace std;

int main()
{
    int a,sum=0,b=0;
    cout<<"Enter the number "<<endl;
    cin>>a;
    do
    {
        sum+=b;
        b++;
    }
    while (b<=a);
    
    cout<<"sum of number is "<<sum<<endl;
    return 0;
}


#include <iostream>
using namespace std;

int main()
{
    int a;
    cout<<"Enter the number "<<endl;
    cin>>a;
    for (int i=1;i<=a;i++)
    {
        int s=0;
        for (int j=2;j<i;j++)
        {
            if(i%j==0)
            {
                s+=1;
            }
        
        }
        if(s==0)
        {
            cout<<i<<endl;
        }
      
    }
    return 0;
}

//11th

#include <iostream>
using namespace std;

int main()
{
    int a;
    cout<<"Enter the age"<<endl;
    cin>>a;
    if (a<18)
    {
        cout<<"minor not elligible"<<endl;
    }
    else if (a<60 && a>=18)
    {
        cout<<"Eligible for vacination with least priority"<<endl;
    }
    else if (a>60)
    {
        cout<<"Eligible for vacination with highest priority"<<endl;
    }
 
}

//12th
#include <iostream>
using namespace std;

int main()
{
    int a,i=0,sum=0;
    cout<<"enter the number till where u want to print sum"<<endl;
    cin>>a;
    while (i<=a)
    {
        sum=sum+i;
        i++;
    }
    cout<<"sum of number is "<<sum<<endl;
}
 */

#include <iostream>
using namespace std;
int main()
{
    int choice;
    double dm=0,wm=0,bm=0,adno,panno,bnkno;
    string name;
    cout<<"Menu driven program"<<endl;
    cout<<"1 to create account "<<endl;
    cout<<"2 to deposit money  "<<endl;
    cout<<"3 to withdraw money  "<<endl;
    cout<<"4 to check balance  "<<endl;
    cout<<"Enter your choice"<<endl;
    cin>>choice;
    
    
    switch (choice)
    {
        case 1:
            cout<<"please provide your adhar number"<<endl;
            cin>>adno;
            cout<<"please provide your pan number"<<endl;
            cin>>panno;
            cout<<"enter your name"<<endl;
            cin>>name;
            cout<<"enter the amount of money you want to deposit"<<endl;
            cin>>dm;
            cout<<"your balance is "<<endl<<(bm+dm-wm)<<endl;
            cout<<"thanks for choosing our bank"<<endl;
            break;
        case 2:
            cout<<"for verification enter your bank account number"
            <<endl;
            cin>>bnkno;
            cout<<"also provide us the amount of balance in your account"<<endl;
            cin>>bm;
            dm=bm;
            cout<<"please enter the amount of money you want to depoist"<<endl;
            cin>>dm;
            cout<<"your balance is "<<endl<<(bm+dm-wm)<<endl;
            cout<<"thanks for choosing our bank"<<endl;
            break;
        case 3:
            cout<<"for verification enter your bank account number"
            <<endl;
            cin>>bnkno;
            cout<<"also provide us the amount of balance in your account"<<endl;
            cin>>bm;
            cout<<"please enter the amount of money you want to withdraw"<<endl;
            cin>>wm;
            if (wm<=bm)
            {
            cout<<"your balance is "<<endl<<(bm+dm-wm)<<endl;
            cout<<"thanks for choosing our bank"<<endl;
            }else{
                cout<<"your balance is less than the withdrawl limit";
            }
            break;
        case 4:
            cout<<"your balance is "<<endl<<(bm+dm-wm)<<endl;
            cout<<"thanks for choosing our bank"<<endl;
            break;
            
            
        default:
            cout<<"you entered wrong number";
            break;
    }
    
    
}
