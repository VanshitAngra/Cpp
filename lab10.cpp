// #include <iostream>
// #include <stdexcept>
// using namespace std;
  

// float CheckDenominator(float den)
// {
//     if (den == 0)
//         throw "Error";
//     else
//         return den;
// } 
  
// int main()
// {
//     float numerator, denominator, result;
//     numerator = 12.5;
//     denominator = 0;
  

//     try {
  

//         if (CheckDenominator(denominator)) {
  
//             result = (numerator / denominator);
//             cout << "The quotient is "
//                  << result << endl;
//         }
//     }
  

//     catch (...) {
  

//         cout << "Exception occurred" << endl;
//     }
  
// } 

#include <stdio.h>
#include <stdlib.h>
  

int main()
{
    FILE* fp;

    char feedback[100];
  
    int i;
    fp = fopen("GeeksForGeeks.TXT", "w");
  
    if (fp == NULL) {
        cout<<("\n The file could "
               "not be opened");
        exit(1);
    }
  
    printf("\n Provide feedback on "
           "this article: ");
    fgets(feedback, 100, stdin);
  
    for (i = 0; i < feedback[i]; i++)
        fputc(feedback[i], fp);
  

    if (ferror(fp)) {
        printf("\n Error writing in file");
        exit(1);
    }
  
    // Close the file pointer
    fclose(fp);
}

// #include <iostream>
// using namespace std;

// double division(int a, int b) {
//    if( b == 0 ) {
//       throw "Division by zero condition!";
//    }
//    return (a/b);
// }

// int main () {
//    int x;
//    cin>>x;
//    int y;
//    cin>>y;
//    double z = 0;
 
//    try {
//       z = division(x, y);
//       cout << z << endl;
//    } catch (const char* msg) {
//      cerr << msg << endl;
//    }

//    return 0;
// }

// #include <iostream>
// using namespace std;
// void MyHandler()
// {
//    try
//    {
//        throw "hello";
//    }
//    catch (const char*)
//    {
//    cout <<"Caught exception inside MyHandler\n";
//    throw; //rethrow char* out of function
//    }
// }
// int main()
// {
//    cout<< "Main start";
//    try
//    {
//        MyHandler();
//    }
//    catch(const char*)
//    {
//       cout <<"Caught exception inside Main\n";
//    }
//        cout << "Main end";
//        return 0;
// }