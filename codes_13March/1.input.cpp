#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
    int a;
    cin >> a;
    cout << a;

    char str[100];
    cin >> str; /// this takes a word
    cout << str;
    /* discards the input buffer */
    cin.sync();

    gets(str); /// this takes a line
    cout << "?:" << str;
    return 0;
}
