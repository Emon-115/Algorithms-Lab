#include<iostream>
#include<cstdio>
using namespace std;

#define INF 999999
/*
struct Sol{
    int  _max, _min;
};

Sol maxMin(int A[], int i, int j){
    if (i==j){
        Sol s = {A[i], A[j]};
        return s;
    } else {
        int mid = (i+j)/2;
        Sol left = maxMin(A, i, mid);
        Sol right = maxMin(A, mid+1, j);

        int _max = max(left._max, right._max);
        int _min = min(left._min, right._min);
        /// return {_max, _min};
        Sol sol;
        sol._max = _max;
        sol._min = _min;
        return sol;
    }
}

/// 4 3 -1 10 5
int main(){
    int n;
    cin >> n;
    int A[n];
    for (int i=0;i<n;i++){
        cin >> A[i];
    }

    Sol sol = maxMin(A, 0, n-1);
    cout << sol._max << " " << sol._min << endl;
}
*/

/*
long pow(int x, int y){
    if (y==0)
        return 1;
    else {
        int mid = y/2;
        int a = pow(x, mid);
        if (y%2==0) /// even
            return a*a;
        else
            return x*a*a;
    }
}

int main(){
    int x, y;
    cin >> x >> y;
    cout << pow(x, y) << endl;
}
*/

/*
void _merge(int A[], int p, int q, int r);

void merge_sort(int A[], int p, int r){
    if (p<r){
        int q = (p+r)/2;
        merge_sort(A, p, q);
        merge_sort(A, q+1, r);
        _merge(A, p, q, r);
    }
}

void _merge(int A[], int p, int q, int r){
    int n1 = q - p + 1;
    int n2 = r - q;
    int L[n1+1], R[n2+1];
    for (int i=0;i<n1;i++){
        L[i] = A[p+i];
    }
    for (int j=0;j<n2;j++){
        R[j] = A[q+j+1];
    }
    L[n1] = INF;
    R[n2] = INF;

    int i=0, j=0;
    for (int k=p;k<=r;k++){
        if (L[i]<=R[j]){
            A[k] = L[i];
            i++;
        } else {
            A[k] = R[j];
            j++;
        }
    }
}

int main(){
    int n;
    cin >> n;
    int A[n];
    for (int i=0;i<n;i++){
        cin >> A[i];
    }
    merge_sort(A, 0, n-1);
    for (int i=0;i<n;i++){
        cout << A[i] << " ";
    }
    cout << endl;
}
*/

int cross_count(int A[], int p, int q, int r);

int count_inversion(int A[], int p, int r){
    if (p<r){
        int q = (p+r)/2;
        int c1 = count_inversion(A, p, q);
        int c2 = count_inversion(A, q+1, r);
        int c3 = cross_count(A, p, q, r);
        printf("i: %d j: %d :: %d %d %d\n", p, r, c1, c2, c3);
        return c1+c2+c3;
    }
}

int cross_count(int A[], int p, int q, int r){
    int n1 = q - p + 1;
    int n2 = r - q;
    int L[n1+1], R[n2+1];
    for (int i=0;i<n1;i++){
        L[i] = A[p+i];
    }
    for (int j=0;j<n2;j++){
        R[j] = A[q+j+1];
    }
    L[n1] = INF;
    R[n2] = INF;

    int i=0, j=0;
    int c = 0;
    for (int k=p;k<=r;k++){
        if (L[i]<=R[j]){
            A[k] = L[i];
            i++;
        } else {
            A[k] = R[j];
            j++;
            c += (n1-i);
        }
    }
    return c;
}

/**
5
4 3 -1 10 5
count_inv: 2+1+1=4
*/
int main(){
    int n;
    cin >> n;
    int A[n];
    for (int i=0;i<n;i++){
        cin >> A[i];
    }
    int c = count_inversion(A, 0, n-1);
    cout << "c : " << c << endl;
    for (int i=0;i<n;i++){
        cout << A[i] << " ";
    }
    cout << endl;
}
