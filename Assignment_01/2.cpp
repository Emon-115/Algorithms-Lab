#include<iostream>
using namespace std;
#include <vector>

vector< int > arr;

int recursive(int n, int s1, int s2, int s3){
    int a,b,c;
    int sum = 0;

    if ( n == 0){
        return 0;
    }
    
    a = s1*2;
    b = s2+2;
    c = s3-1;
    sum = a*b*c;
    arr.push_back(sum);
    recursive(n-1, a, b, c);
}


int main()
{
    int n;
    int s1 = 2;
    int s2 = 3;
    int s3 = 4; 
    int sum = 0;
    int t_sum = 0;
    cout<<"Enter nth number:";
    cin >> n;
    sum = s1*s2*s3;
    arr.push_back(sum);
    if (n == 1){
        cout<< sum;
    }
    else{
        recursive(n,s1,s2,s3);
        for(int i=0;i<n;i++)
        {
            cout<< arr[i];
            if(i != n-1){
                cout<<"+";
            }
            t_sum+=arr[i];
        }
        cout<<"=";
        cout<<t_sum;
    }
    
}