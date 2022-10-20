#include <iostream>
#include <vector>
using namespace std;
 
int t=0;
vector<char> arr1;

struct Activitiy
{
    char name;
    int start, end;
};
 
bool activityCompare(Activitiy s1, Activitiy s2)
{
    return (s1.end < s2.end);
}
 
void printMaxActivities(Activitiy arr[], int n)
{
    sort(arr, arr+n, activityCompare);
    int sum =0;
    int c = 0;
    for(int i=n-2; i>=0; i--){
        if(i == n-2 || c == 0)
           { arr1.push_back(arr[i].name);
            sum = arr[i].start + arr[i].end;
            c++;
            t++;
           }
        else if(arr[i].start >= sum){
            arr1.push_back(arr[i].name); 
            sum = arr[i].start + arr[i].end;
            i = n-2;
            t++;
        }
    }
}
 
int main()
{
    int m , x;
    int n;
    Activitiy arr[10];
    cout << " M X\n";
    cin >> m;
    cin >> x;
    fflush(stdout);
    cout << "n\n";
    cin >> n;
    fflush(stdout);
    for(int i=0; i<n; i++)
    { 
        fflush(stdout);
        cin >> arr[i].name;
        fflush(stdout);
        cin >> arr[i].start;
        fflush(stdout);
        cin >> arr[i].end;
        fflush(stdout);
    }
    
    printMaxActivities(arr, n);
    cout<<"profit: "<< t*m<<"\n";
    for(int i=0; i<n; i++)
    { 
        cout<<arr1[i]<<"\n";
    }
}