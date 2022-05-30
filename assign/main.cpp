//
//  main.cpp
//  assign
//
//  Created by Vanshit Angra on 18/03/22.
//

#include <iostream>
using namespace std;
int main()
{
    int choice;
    cout<<"Menu driven program"<<endl;
    cout<<"0 for OS  "<<endl;
    cout<<"1 for DBMS  "<<endl;
    cout<<"2 for OOPs  "<<endl;
    cout<<"3 for DS "<<endl;
    cout<<"Enter your choice"<<endl;
    cin>>choice;
    
    
    switch (choice)
    {
        case 0:
            cout<<"Student opted for OS"<<endl;
            break;
        case 1:
            cout<<"Student opted for DBMS"<<endl;
            break;
        case 2:
            cout<<"Student opted for OOPs"<<endl;
            break;
        case 3:
            cout<<"Student opted for DS"<<endl;
            break;
        default:
            cout<<"Student not registered"<<endl;
    }
            
            
}
