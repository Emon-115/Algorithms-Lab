#include <bits/stdc++.h>
using namespace std;
struct Pair
{
    int a, b;
};
bool comp_b(Pair p1, Pair p2)
{
    if (p1.b < p2.b) return true;
    else return false;
    /// return p1.b < p2.b;
}

bool comp_b_desc(Pair p1, Pair p2)
{
    if (p1.b > p2.b) return true;
    else return false;
    /// return p1.b > p2.b;
}
bool comp_ratio(Pair x, Pair y){
    return x.a*1.0/x.b < y.a*1.0/y.b;
}

int main()
{
    /* an array of struct */
    Pair arr[] = {{5, 100}, {3, 9}, {3, 12},
                    {1, 6}, {5, 5}, {8, 16}};
    int n = sizeof(arr) / sizeof(arr[0]);
    /* sort the array */
    sort(arr, arr + n, comp_ratio);
    /* print the array */
    for (int i = 0; i < n; i++)
    {
        printf("a:%d b:%d r:%.1f\n",arr[i].a,
               arr[i].b, arr[i].a*1.0/arr[i].b);
    }

    return 0;
}
