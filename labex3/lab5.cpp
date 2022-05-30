// # include <iostream>
// using namespace std;


// // class data
// // {
// // public:
// //     string studentName;
// //     int rollno;
// //     string course;
// //     void FillDetails(string student, int roll, string subject);
// //     void printDetails()
// //     {
// //         cout << "student Name : " << studentName << endl;
// //         cout << "Roll no : " << rollno << endl;
// //         cout << "Course opted : " << course << endl;
// //     }
// // };
// // void data::FillDetails(string student, int roll, string subject)
// // {
// //     studentName = student;
// //     rollno = roll;
// //     course = subject;
// // }

// // int main()
// // {
// //     string name, sub;
// //     int roll;
// //     int n;
// //     cout << "Enter the number of Students : ";
// //     cin >> n;
// //     for (int i = 1; i <= n; i++)
// //     {
// //         cout << "Enter student name : " << endl;
// //         cin >> name;
// //         cout << "Enter roll no : " << endl;
// //         cin >> roll;
// //         cout << "Enter course opted : " << endl;
// //         cin >> sub;
// //         data ob;
// //         ob.studentName = name;
// //         ob.rollno = roll;
// //         ob.course = sub;
// //         ob.FillDetails(name, roll, sub);
// //         ob.printDetails();
// //     }

// //     return 0;
// // }

// class lab {       // The class
//   public:             // Access specifier
//     int num;        // Attribute (int variable)
// 	string name;  // Attribute (string variable)
// };

// int main() {
//   lab obj;  // Create an object of MyClass

//   // Access attributes and set values
//   obj.num = 18; 
//  obj.name = "Vanshit";

//   // Print attribute values
//   cout << obj.num << endl;
//   cout << obj.name;
//   return 0;
// }

#include<iostream>
using namespace std;
class inventory
{
  
  
    public:
      int a,give,t,at;
    void details(int add,int sub,int v,int alltotal);
   void display(){
       cout<<"Books in shop : "<<at<<"\n";
       cout<<"Books added : "<<a<<"\n";
       cout<<"Books given : "<<give<<"\n";
       cout<<"Total Books : "<<t;
 
   }
 
};
 void inventory::details(int add ,int sub ,int v,int alltotal)
 {
    at=alltotal;
    a=add;
    give=sub;
    t=v;
}
int main()
{
    int a,sub,v,alltotal;
    cout<<"Current books in shop : ";
    cin>>alltotal;
    cout<<"How many books you want to add in shop : ";
    cin>>a;
    cout<<"How many books you want to give  : ";
    cin>>sub;
    inventory obj;
    obj.at=alltotal;
    obj.a=a;
    obj.give=sub;
    v=(alltotal+a)-sub;
    obj.t=v;
    obj.details(a,sub,v,alltotal);
    obj.display();
}

