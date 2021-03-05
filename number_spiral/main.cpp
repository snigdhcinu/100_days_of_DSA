#include <iostream>
using namespace std ;

// Problem Statement : - https://cses.fi/problemset/task/1071

int main() {
	int array[5][5] = {
					{1,2,9,10,25},
					{4,3,8,11,24}, 
					{5,6,7,12,23}, 
					{16,15,14,13,22}, 
					{17,18,19,20,21}
				};
	int n ;
//	cout << "Enter the no. of queries : - " ;
	cin >> n ;
	
	int result[n] ;
	
	int r,c;
	for (int i = 0 ; i < n ; i++){
//		cout << "Enter rows : "  ;
		cin >> r ;
		
//		cout << "Enter cols : "  ;
		cin >> c ;
		
//		cout << "The element at position " << r << " X " << c << " is : - " << endl ;
//		cout << array[r - 1][c - 1] << endl ;
		result[i] = array[r - 1][c - 1] ;
	}
	for(int i = 0 ; i < n ; i++){
		cout << result[i] << endl ;
	}
 	return 0;
}
