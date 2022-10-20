#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    bool b1 = true;
    bool b2 = false;
    bool b3 = 0; /// false
    bool b4 = 1; /// true
    if (b1)
    {
        printf("inside first if\n"); /// y
        if (b2)
        {
            printf("inside first nested if\n"); /// n
        }
        if (b3)
        {
            printf("inside second nested if\n"); /// n
        }
        if (b4)
        {
            printf("inside third nested if\n"); /// y
        }
    }
    printf("end\n"); /// y
    return 0;
}
