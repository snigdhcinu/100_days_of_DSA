#include <iostream>
#include <cstdlib>
using namespace std ;

/* Problem Statement :- https://cses.fi/problemset/task/1070 */

void generateArray(int* arr , int n){
	int i = 0 ; 
	int val = 1 ;
	while(i < n){
		arr[i] = val ;
		i += 1 ; 
		val += 1 ;
	}
}

void printArray(int arr[] , int size){
	for(int i = 0 ; i < size ; i++){
		cout << arr[i] << " " ; 
	}
	cout << endl ;
}

// odd-even algorithm
void createArray(int* result , int arr[] , int size){ 
	
	int curr = 0 ; 
	for ( int i = 1 ; i < size ; i += 2 ){
		result[curr] = arr[i] ;
		curr += 1 ; 
	} 
	for( int i = 0 ; i < size ; i += 2 ){
		result[curr] = arr[i] ;
		curr += 1 ;
	}
}

int diff(int a , int b){
	return abs(a - b) ;
}

bool checkBeauty(int result[] , int n){
	int prev = 0 ;
	int curr = 1 ;
	for( int i = 0 ; i < n ; i++){
		if(diff(result[curr] , result[prev]) == 1){
			return false ;
		}
	}
	return true ;
}

int main() {
	int n ;
	cout << "Enter the value of n :- " ;
	cin >> n ;
	
	if(n == 1){
		cout << '1' ;
		return 0 ;
	}
	
	int array[n] ;
	generateArray(array , n) ;
	cout << "The generated array is :- " << endl ;
	printArray(array , n) ; 
	
	int result[n] ; 
	createArray(result , array , n) ;
	
	bool output = checkBeauty(result , n) ; 
	cout << "After beautification, the result obtained is : - " << endl ;
	
	if(output){
		printArray(result , n);
	}else{
		cout << "NO SOLUTION" ;
	}
	return 0 ; 
}
