//Q1.Run  time polymorphism
// #include<iostream>
// using namespace std;
// class base
// {
//  public:
//  virtual void bas(){
//    cout<<"base";
//  }
// };
// class derived:public base{
//  public:
// void bas(){
//  cout<<"derived";
// }
// };
// class vanshit:public derived{
//  public:
// void bas()
//  {
//    cout<<"vanshit";
//  }
// };
// int main()
// {
//  base* b;
//  vanshit c;
 
//  b=&c;
//  b->bas();
 
 
// }

// #include <iostream>
// using namespace std;
// class number {
//  private:
//  int n1, n2 ;
//  public:
//  number() {
//    n1 = 12;
//    n2 = 18;
//  }
//  void display() {
//    cout<<"num1 = "<< n1 <<endl;
//    cout<<"num2 = "<< n2 <<endl;
//  }
// };
// int main() {
//  number obj;
//  obj.display();
//  return 0;
// }

// #include <iostream>
// using namespace std;
// class number {
//  private:
//  int num1, num2 ;
//  public:
//  number(int n1, int n2) {
//    num1 = n1;
//    num2 = n2;
//  }
//  void display() {
//    cout<<"num1 = "<< num1 <<endl;
//    cout<<"num2 = "<< num2 <<endl;
//  }
// };
// int main() {
//  number obj(7,18);
//  obj.display();
//  return 0;
// }

// #include <iostream>
// using namespace std;
// class over
// {
//     private:
//     int a,b,c;
//     public:
//     over(int x,int y,int z)
//     {
//         a=x;
//         b=y;
//         c=z;
 
//     }
//     void display()
//     {
//         cout<<a<<"\n"<<b<<"\n"<<c;
//     }
//     void operator --(){--a;--b;--c;}
// };
// int main()
// {
//     int x,y,z;
//     cin>>x>>y>>z;
//     cout<<"Output"<<endl;
//     over obj1(x,y,z);
//     --obj1;
//     obj1.display();
// }

#include<iostream>
using namespace std;
class personal
{
   
 
    public:
        string name;
    int age;
int ph;
    void cal(string x,int y ,int z)
    {
        name=x;
        age=y;
        ph=z;
 
    }
   void show(string name , int age ,int ph){
         cout<<"\nName = "<<name<<"\nage = "<<age<<"\nphone no. = "<<ph;
    }
   
   
};
class item:public personal{
    
 
    public:
        int presentitems;
    int additems;
    int withdrawitem;
     void cal(int a,int b,int c){
         presentitems=a;
         additems=b;
         withdrawitem=c;
          
 
     }
     void showit(int presentitems , int additems , int withdrawitem){
              cout<<"\nPresent items :"<<presentitems<<"\nAdded items : "<<additems<<"\nWithdrawn Items : "<<withdrawitem;
          }
};
int main()
{
    string x;
    int y,z;
    
    cout<<"Name : ";
    cin>>x;
     cout<<"Age : ";
     cin>>y;
      cout<<"phone no. : ";
      cin>>z;
       int a,b,c;
       cout<<"Present items : ";
       cin>>a;
      cout<<"Add items : ";
     cin>>b;
      cout<<"Withdraw items : ";
      cin>>c;
      cout<<endl<<"OUTPUT"<<endl;
   personal obj;
   obj.show(x,y,z);
      item obj1;
     obj1.showit(a,b,c);
  
    
}





