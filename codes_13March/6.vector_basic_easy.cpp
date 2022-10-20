#include <iostream>
#include <cstdio>
#include <vector>
using namespace std;

int main()
{
    /* initialization */
    vector<int> list3(5);/// 5 zeros
    vector<int> list4; /// vector of int
    cout << list4.size() << endl;
    int x;
    for (int i = 0; i < 5; i++)
    {
        /// cin >> x;
        list4.push_back(i);
    }
    /* size of vector */
    printf("size: %lu\n", list4.size());

    /** iterate over vector - way 1 */
    for (int i = 0; i < list4.size(); i++)
        printf("[%d] %d\n", i, list4[i]);

    /** iterate over vector - way 2 */
//    for (int x : list4)
//        printf("%d\n", x);

    /* delete from index i */
    int i = 2;
    list4.erase(list4.begin() + i);
}
