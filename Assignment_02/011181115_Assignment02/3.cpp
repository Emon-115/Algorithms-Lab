#include <iostream>
#include <vector>
using namespace std;

vector <int> total;
int coin[] = { 1, 5, 10, 25 };
int n = sizeof(coin) / sizeof(coin[0]);

void coins(int money)
{
	sort(coin, coin + n);
	for (int i = n - 1; i >= 0; i--) {

		while (money >= coin[i]) {
			money -= coin[i];
			total.push_back(coin[i]);
            
		}
	}
}	

int main()
{
	int n;
    cout<< "Enter your n:";
    cin >> n;
	coins(n);
    int a = sizeof(total);
    int s25=0,s10=0,s5=0,s1=0;
	for (int i = 0; i < a; i++)
    {
        if(total[i] == 25)
        {
            s25++;
        }
        else if(total[i] == 10){
            s10++;
        }
        else if(total[i] == 5){
            s5++;
        }
        else if(total[i] == 1){
            s1++;
        }
    }
    cout<<"25 cents "<<s25<<" 10 cents "<<s10<<" 5 cents "<<s5<<" 1 cents "<<s1<<"\n";
    int t =0;
    t = s25+s10+s5+s1;
    cout<<"Totall "<< t << " coins";
}
