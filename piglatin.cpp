// // If the word begins with a consonant, all the alphabets before the vowel is placed at the end of the word. After that, the suffix ay is added to the word. For example, consider the following words:

// // duck = uckd = uckd + ay = uckday

// // banana = ananab = ananab + ay = ananabay

// // happy = appyh = appyh + ay = appyhay

// #include <iostream>
// #include <string>
// using namespace std;
// int main()
// {
//     string s;
//     string a="",b="";
//     cout<<"Enter the world to print piglatin "<<endl;
//     cin>>s;
//     int l=s.length();
//     int d= -1,i;

//     for(int i=0;i<l;i++)
//     {
//         if(s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U'||s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')
//         {
//             d=i;
//             break;
//         }
//     }
//     cout<<s.substr(i)+s.substr(0,i)+"ay";
// }


#include <bits/stdc++.h>
using namespace std;
 
bool isVowel(char c)
{
    return (c == 'A' || c == 'E' || c == 'I' ||
            c == 'O' || c == 'U' || c == 'a' ||
            c == 'e' || c == 'i' || c == 'o' ||
            c == 'u');
}
 
string pigLatin(string s)
{
    // the index of the first vowel is stored.
    int len = s.length();
    int index = -1;
    for (int i = 0; i < len; i++) {
        if (isVowel(s[i])) {
            index = i;
            break;
        }
    }
 
    // Pig Latin is possible only if vowels
    // is present
    if (index == -1)
        return "-1";
 
    // Take all characters after index (including
    // index). Append all characters which are before
    // index. Finally append "ay"
    return s.substr(index) + s.substr(0, index) + "ay";
}
 
// Driver code
int main()
{
    string str = pigLatin("graphic");
    if (str == "-1")
        cout << "No vowels found. Pig Latin not possible";
    else
        cout << str;
}
