#include<iostream>
#include<cstdio>
using namespace std;


int Fib(int n){
    if (n==0 || n==1)
        return n;
    else
        return Fib(n-1)+Fib(n-2);
}

int Fact(int n){
    if (n==0 || n==1)
        return 1;
    else
        return n* Fact(n-1);
}

/// base case: y==0 return 1
/// recursion: x^y = x * x^(y-1)
int power(int x, int y){
    if (y==0)
        return 1;
    else
        return x * power(x, y-1);
}

int maximum(int A[], int n){
    if (n==1) return A[0];
    else{
        ///return max(A[n-1], maximum(A, n-1));
        int m = maximum(A, n-1);
        if (A[n-1] < m) return m;
        else return A[n-1];
    }
}

int count_odd(int A[], int n){
    if (n==1) {
        if (A[0]%2==0) return 0;
        else return 1;
    } else {
        if (A[n-1]%2==0)
            return  count_odd(A, n-1);
        else
            return 1 + count_odd(A, n-1);
    }
}

float avg(int A[], int n, int N){
    if (n==1)
        return A[0]*1.0/N;
    else
        return A[n-1]*1.0/N + avg(A, n-1, N);
}

void print_rev(int A[], int n){
    if (n==1){
        cout << A[0] << endl;
    } else {
        cout << A[n-1] << endl;
        print_rev(A, n-1);
    }
}

int series_d(int f, int s, int n){
    if (n==0)
        return 0;
    else
        return f*s + series_d(f*2, s+2, n-1);
}

int main(){
    int n=3;
    cout << series_d(2, 3, n) << endl;
    /*
    int n;
    cin >> n;
    int A[n];
    for (int i=0;i<n;i++){
        cin >> A[i];
    }
    print_rev(A, n) ;
    */
}
/**
5
2 5 -1 10 3
*/
