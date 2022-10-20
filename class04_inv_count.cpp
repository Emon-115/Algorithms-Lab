#include<iostream>
#include<cstdio>
using namespace std;

#define INF 999999

int cross_count(int A[], int p, int q, int r);

int count_inversion(int A[], int p, int r){
    if (p<r){
        int q = (p+r)/2;
        int c1 = count_inversion(A, p, q);
        int c2 = count_inversion(A, q+1, r);
        int c3 = cross_count(A, p, q, r);
        printf("i: %d j: %d :: %d %d %d\n", p, r, c1, c2, c3);
        return c1+c2+c3;
    } else return 0;
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
        cout << R[j] << " ";
    }
    cout << endl;
    L[n1] = INF;
    R[n2] = INF;
    printf("%d %d %d n1 %d n2 %d\n", p, q, r, n1, n2);

    int i=0, j=0;
    int c = 0;
    for (int k=p;k<=r;k++){
        if (L[i]<=R[j]){
            A[k] = L[i];
            i++;
        } else {
            A[k] = R[j];
            if (R[j] < INF) c += (n1-i);
            j++;
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
