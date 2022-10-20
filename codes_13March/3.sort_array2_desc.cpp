#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;
int main()
{
    int arr[] = {100, 512, 6, 724, 31, 14, 2, 0};
    /* length of the array */
    int len = sizeof(arr) / sizeof(arr[0]);
    /* print the array */
    for (int i = 0; i < len; i++)
        printf("%d ", arr[i]);
    printf("\n");
    /* sort the array */
    sort(arr, arr + len); /// ascending order
    sort(arr, arr + len, greater<int>()); /// descending order
    /* print the array */
    for (int i = 0; i < len; i++)
        printf("%d ", arr[i]);
    printf("\n");

    return 0;
}
