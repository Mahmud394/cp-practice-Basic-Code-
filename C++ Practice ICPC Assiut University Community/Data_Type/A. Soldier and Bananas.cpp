#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int i, number_of_dollars, cost_banana, number_of_bananas;
	long long sum=0;

	cin>> cost_banana>> number_of_dollars>>number_of_bananas;
	for(i=1; i<=number_of_bananas; i++){
		sum = sum+(i*cost_banana);
	}
	if(sum<=  number_of_dollars){
		cout <<0<<"\n";
	}
	else
     cout << sum -  number_of_dollars << "\n";

}