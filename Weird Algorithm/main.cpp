#include <iostream>
using namespace std;
/* Problem statement :- https://cses.fi/problemset/task/1068  */

int forOdd(int x){
	x = (x * 3) + 1;
	return x;
}

int forEven(int x){
	x = x / 2;
	return x;
}

int main() {
	unsigned long int n;
	cout << "Enter the number :- " ;
	cin>>n;
	
	while(n != 1){
		cout << n << "->";
		n = (n % 2 == 0) ? forEven(n) : forOdd(n);
	}
	cout << n ;
	
	return 0;
}
