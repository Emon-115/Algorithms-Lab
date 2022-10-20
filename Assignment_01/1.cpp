#include<iostream>
using namespace std;

int GreatestCommonDivisor_2(int x,int y){
    if(x == y){
        return x;
    }

    if(x>y){
        GreatestCommonDivisor_2(x-y,y);
    }
    else{
        GreatestCommonDivisor_2(x,y-x);
    }
}

 int GreatestCommonDivisor(int x, int y)
    {
        if (x == 0)   // useing Euclid's algorithm.
            return y;

        if(y == 0)
            return x;

        if(x>y)
            GreatestCommonDivisor(x%y, y);

        else
            GreatestCommonDivisor(x, y%x);
    }

int main()
{
   int x,m;
   int y;
   cout<< "Enter The value of x and y:\n";
   cin>>x  >>y ;
   cout<< "\n";
   cout<<"Greatest Common Divisor method 1:" << GreatestCommonDivisor(x,y)<<"\n";
   cout<<"Greatest Common Divisor method 2:" << GreatestCommonDivisor_2(x,y);
   
   cout<< "\n";
}






