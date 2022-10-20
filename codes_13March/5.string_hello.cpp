#include<iostream>
#include<string> /// string library
using namespace std;

int main( ) {
    /// init1
    string str1 = "Hello world";
    cout<<str1<<endl;
    /// init2
    char chr_str[] = "hello universe";
    string str2 = string(chr_str);
    cout<<str2<<endl;

    /// length of a string
    cout << str1.length() << endl;

    /// accessing individual characters
    cout << "str1[0]:" << str1[0] /// does not check bound
        << " " << str1.at(0) /// checks bound
        << " str1[6]:" << str1[6] << endl;

    /// appending to a string
    str1 = str1 + ".";
    str1 += ".";
    cout<<str1<<endl; ///Hello world..

    str2 += "!!"; /// hello universe!!
    str2 += str1; /// hello universe!!Hello world..
    cout<<str2<<endl;

    /// input a string
    string word, line;
    cin >> word;
    cin.sync();
    cout << word << endl;
    getline(cin, line);
    cout << line << endl;
}
