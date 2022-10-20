#include <iostream>
#include<cstdio>
#include <chrono>
using namespace std::chrono;
using namespace std;
 
void lcstable(char X[], char Y[], int x_len, int y_len) {
  int LCS_table[x_len + 1][y_len + 1];


  
  for (int i = 0; i <= x_len; i++) {
    for (int j = 0; j <= y_len; j++) {
      if (i == 0 || j == 0)
        LCS_table[i][j] = 0;
      else if (X[i - 1] ==Y[j - 1])
        LCS_table[i][j] = LCS_table[i - 1][j - 1] + 1;
      else
        LCS_table[i][j] = max(LCS_table[i - 1][j], LCS_table[i][j - 1]);
    }
  }

  int index = LCS_table[x_len][y_len];
  char lcsAlgo[index + 1];
  lcsAlgo[index] = '\0';

  int i = x_len, j = y_len;
  while (i > 0 && j > 0) {
    if (X[i - 1] ==Y[j - 1]) {
      lcsAlgo[index - 1] =X[i - 1];
      i--;
      j--;
      index--;
    }

    else if (LCS_table[i - 1][j] > LCS_table[i][j - 1])
      i--;
    else
      j--;
  }
    int m = sizeof(lcsAlgo);
    int count=0;
    for(int i=0;i<m-1;i++){
        count++;
    }
 cout << "Tabular mathod:"<<count<<"\n";
  cout << "LCS:" << lcsAlgo;
}





int lcs( char X[], char Y[], int x_len, int y_len )
{
    if (x_len == 0 || y_len == 0)
        return 0;
   
    if (X[x_len-1] == Y[y_len-1]){
       
        return 1 + lcs(X, Y, x_len-1, y_len-1);
    }
   
    else
        return max(lcs(X, Y, x_len, y_len-1), lcs(X, Y, x_len-1, y_len));
}
 
int main()
{
    char X[] = "AXCDAX";
    char Y[] = "XDCAXA";
    int x_len = strlen(X);
    int y_len = strlen(Y);
    //auto s = high_resolution_clock::now();
    int n = lcs( X, Y, x_len, y_len ) ;
    //auto st = high_resolution_clock::now();
    //auto duration = duration_cast<nanoseconds>(st - s);   // there has an error in duration.count
    //printf("\nduration: %d ", duration.count());
    cout <<"Naive method:"<< n<<"\n";

    //auto s = high_resolution_clock::now();
    lcstable(X, Y, x_len, y_len);
    //auto st = high_resolution_clock::now();
    //auto duration = duration_cast<nanoseconds>(st - s);
    //printf("\nduration: %d ", duration.count());


}
