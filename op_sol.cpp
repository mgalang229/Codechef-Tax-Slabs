#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

void solve() {
	int n;
	cin >> n;
	int tax=0;
  //create an if-else ladder to accumulate the taxes
  //find the min between 'n' and the smallest value in the range and apply the percentage of tax
	if(n>250000)
		tax+=(min(n, 500000)-250000)*5/100;
	if(n>500000)
		tax+=(min(n, 750000)-500000)*10/100;
	if(n>750000)
		tax+=(min(n, 1000000)-750000)*15/100;
	if(n>1000000)
		tax+=(min(n, 1250000)-1000000)*20/100;
	if(n>1250000)
		tax+=(min(n, 1500000)-1250000)*25/100;
	if(n>1500000)
		tax+=(n-1500000)*30/100;
  //subtract the total tax from the current money
	cout << n-tax << "\n";
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int t;
	cin >> t;
	while(t--)
		solve();
}
