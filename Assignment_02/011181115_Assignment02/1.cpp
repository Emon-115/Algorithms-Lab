#include<iostream>
#include<vector>
using namespace std;

vector <int> sum;
int it=0;
int print_primes(int A,int p){
    if(A == p){
        cout<< A;
        sum.push_back(A);
        it++;
        
    }
    else if(A == 0 || A == 1) {
        return 0;
    }
    
    else if(A>1){
        if(A%p == 0){
            return 0;
        }
        else{
            print_primes(A,p+1);
        }    
    }
}

int main()
{
    int t_sum = 0;
    int A[10];
    int n;
    cout << "Enter n: ";
    cin >> n;
    cout<<"Enter array numbers>>>>";
    for(int i=0;i<n;i++){
        cin>>A[i];
    }
    int p =2;
    for(int i=0;i<n;i++){
        print_primes(A[i],p);    
    }
    cout<<"#prime=" <<it;
}