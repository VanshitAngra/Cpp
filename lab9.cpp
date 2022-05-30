// #include <iostream>
// using namespace std;

// // Abstract class
// class Shape {
//     protected:
//     float dimension;

//    public:
//     void length() {
//         cin >> dimension;
//     }

// };

// // Derived class
// class Square : public Shape {
//    public:
//     float area() {
//         return dimension * dimension;
//     }
// };

// // Derived class
// class Circle : public Shape {
//    public:
//     float area() {
//         return 3.14 * dimension * dimension;
//     }
// };

// int main() {
//     Square s;
//     Circle c;

//     cout << "Enter the length of the square: ";
//     s.length();
//     cout << "Area of square: " << s.area() << endl;

//     cout << "\nEnter radius of the circle: ";
//     c.length();
//     cout << "Area of circle is : " << c.area() << endl;

//     return 0;
// }






//Q2.Virtual function
#include <iostream>
using namespace std;

class student
{
    protected:
    string name,add; 
    int ten,twe,age;

    public:
    void getdata()
    {
        cin>>name;
        cin>>add;
        cin>>age;
        cin>>ten;
        cin>>twe;
        
    } 
    virtual void addmission()=0;
};
class info: public student
{
    public:
    void addmission()
    {
        cout<<"Name of student enrolled:  "<<name<<endl;
        cout<<"Address of student enrolled:  "<<add<<endl;
        cout<<"Age of student enrolled:  "<<age<<endl;
        cout<<"Marks of student in 10th:  "<<ten<<endl;
        cout<<"Marks of student in 12th:  "<<twe<<endl;
    }
};
int main()
{
    info ob;
    cout<<"Enter the data of student: "<<endl;
    ob.getdata();
    cout<<"Student details are: "<<endl;
    ob.addmission();
    
    return 0;
}