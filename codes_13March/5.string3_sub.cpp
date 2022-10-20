#include <iostream>
using namespace std;
int main() {
    string old_s = "Thank you very very much";
    cout << old_s << endl;
    int found = old_s.find(" ");
    string new_s = old_s.substr(0, found);
    cout << new_s << endl; /// Thank you
    new_s += old_s.substr(found + 5);
    cout << new_s << endl; /// Thank you very much
    return 0;
}
