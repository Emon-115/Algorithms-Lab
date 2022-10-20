#include<iostream>
#include<chrono>
#include<string.h>
using namespace std;
using namespace::chrono;

int Sum_nive(string arr[],int start,int end)
{
    int flag = 0;

    if(end == start)
    {
        flag=0;
    }
    if(start<0)
    {
        flag =1;
    }
    else if (end <0)
    {
         flag =1;
    }

    int x = Sum_nive(arr[],start-arr[end],end-1);
    int y=Sum_nive(arr[],start,end-1);

}


void Sum_tabulation(string arr[], int n )
{


}






int main ()
{
    string arr[100];
    int n;
    cout<< "Enter Your number:";
    cin>> n;
    cout<<"Enter Your prices:\n";

    for(int i=0;i<n;i++)
    {
        cin>> arr[i];
    }
        Sum_nive(arr[],start,end-1);
        auto start = high_resolution_clock::now();
        long long ans = fib_dp(arr[i]);
        auto stop = high_resolution_clock::now();
        auto duration = duration_cast<nanoseconds>(stop - start);
        cout<<(arr[i], ans, duration.count());



return 0;

}






