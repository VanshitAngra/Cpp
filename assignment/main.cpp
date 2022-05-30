//
//  main.cpp
//  assignment
//
//  Created by Vanshit Angra on 10/03/22.
//
#include <iostream>
using namespace std;
int main()
{
    //char ch;
    float m1,m2,m3,m4,m5;
    float avg;
    cout<<"Enter marks of 1st subject"<< endl;
    cin>>m1;
    cout<<"Enter marks of 2nd subject"<< endl;
    cin>>m2;
    cout<<"Enter marks of 3rd subject"<< endl;
    cin>>m3;
    cout<<"Enter marks of 4th subject"<< endl;
    cin>>m4;
    cout<<"Enter marks of 5th subject"<< endl;
    cin>>m5;
    
    avg=(m1+m2+m3+m4+m5)/50;
    
    if (avg>=9 && avg<=10)
    {
        cout<<"you scored A+ grade"<<endl;
    }
    else if (avg>=8 && avg<9)
    {
        cout<<"you scored A grade"<<endl;
    }
    else if (avg>=7 && avg<8)
    {
        cout<<"you scored B+ grade"<<endl;
    }
    else if (avg>=6 && avg<7)
    {
        cout<<"you scored B grade"<<endl;
    }
    else if (avg>=5 && avg<6)
    {
        cout<<"you scored C grade"<<endl;
    }
    else if (avg>=4 && avg<5)
    {
        cout<<"you scored D grade"<<endl;
    }
    else
    {
        cout<<" student fail"<< endl;
    }
    cout<< avg<< endl;
    return 0;
}
