#include <iostream>
#include<algorithm> 
#include<cstdio>
#include <chrono>
using namespace std;
using namespace std::chrono;



int nive(int price[], int start, int end)
{
 
   
    if (end <= start)
        return 0;
 
  
    int profit = 0;
 
    for (int i = start; i < end; i++) {
 
        for (int j = i + 1; j <= end; j++) {
 
          
            if (price[j] > price[i]) {
 
             
                int curr_profit = price[j] - price[i]
                                  + nive(price, start, i - 1)
                                  + nive(price, j + 1, end);
 
               
                profit = max(profit, curr_profit);
            }
        }
    }
    return profit;
}


void tabulation(int price[], int n ){
    int T[n-1][n+1];

    
    for(int i=0; i < n-1; i++)
    {
        for(int j=0; j < n+1; j++ )
        {
        T[i][j] = 0;
        }
    }

    for(int i=0; i < n-1; i++)
    {
        for(int j=0; j < n+1; j++ )
        {
        
        if(j == 0) {
            continue;
        }


        else if(i == 0) {
            T[i][j] = price[i] + T[i][j-i-1];
        }

        
        else if(j-i-1 < 0) {
            T[i][j] = T[i-1][j];
        }


        else {
            T[i][j] = std::max(T[i-1][j], (price[i] + T[i][j-i-1]));
        }
        }
    }
    
    cout << "Maximum profit is " << T[n-2][n] << endl;
    
}




int main() {
  int price[15];
  int n;

  cout<< "Enter n:";
  cin >> n;
  cout << "Enter prices:";
  for(int i =0;i<n;i++) {
      cin >> price[i];
  }
    //auto s = high_resolution_clock::now();
    int pr =  nive(price,0,n-1);
    //auto st = high_resolution_clock::now();
    //auto duration = duration_cast<nanoseconds>(st - s);
    //printf("\nduration: %d ", duration.count());
    cout << "Profit in naive"+ pr << "\n";

    //auto s = high_resolution_clock::now();
    tabulation(price, n);
    //auto st = high_resolution_clock::now();
    //auto duration = duration_cast<nanoseconds>(st - s);
    //printf("\nduration: %d ", duration.count());
}





