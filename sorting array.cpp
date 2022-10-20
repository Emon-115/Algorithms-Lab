
//array sorting ascending//

/*#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[100];
    int n,i,j,temp;
    cout<< "Enter Your size of Array:";
    cin>>n;
    cout<< "Enter Your Arrays:\n";
    for(i=0; i<n; i++)
    {
        cin>>arr[i];

    }
    for(i=0;i<n;i++)
    {
          for(j=i+1; j<n; j++)
            {
                if(arr[j] < arr[i])
                {
                    temp = arr[i];
                    arr[i] = arr[j];
                    arr[j] = temp;
                }

            }
    }
    cout<<"Elements of array in sorted ascending order:"<<endl;
    for(i=0; i<n; i++)
    {
        cout<<arr[i]<<endl;
    }

    return 0;

}
*/



//array sorting descending//

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[100];
    int n,i,j,temp;
    cout<< "Enter Your size of Array:";
    cin>>n;
    cout<< "Enter Your Arrays:\n";
    for(i=0; i<n; i++)
    {
        cin>>arr[i];

    }
    for(i=0;i<n;i++)
    {
          for(j=i+1; j<n; j++)
            {
                if(arr[j] > arr[i])
                {
                    temp = arr[i];
                    arr[i] = arr[j];
                    arr[j] = temp;
                }

            }
    }
    cout<<"Elements of array in sorted descending order:"<<endl;
    for(i=0; i<n; i++)
    {
        cout<<arr[i]<<endl;
    }

    return 0;

}

