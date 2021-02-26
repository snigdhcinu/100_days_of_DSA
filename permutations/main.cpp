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
//		cout << " | " << arr[i] ; 
		cout << arr[i] << " " ;
//		if(i == size - 1)
//			cout << " | " ; 
	}
	cout << endl ;
}

// requires modification
void createArray(int* result , int arr[] , int size){
	int start , median , end ; 
	start = 0 ; 
	end = size - 1 ; 
	median = size / 2 ; 
	
	for ( int curr = 0 ; curr < size ; curr++ ){
		if( curr == 1) {
			result[curr] = arr[median] ;
			continue ; 
		}else if( (curr % 2 == 0) && (curr != 2) ){
			result[curr] = arr[start] ;
			start += 1 ;
			continue ;
		}else if( ((curr % 2 != 0) && (curr != 1)) || (curr == 2) ){
			result[curr] = arr[end] ;
			end -= 1 ;
			continue ; 
		}
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
//	cout << "Enter the value of n :- " ;
	cin >> n ;
	
	int array[n] ;
	generateArray(array , n) ;
//	printArray(array , n) ; 
	
	int result[n] ; 
	createArray(result , array , n) ;
//	printArray(result , n) ;
	bool output = checkBeauty(result , n) ; 
//	cout << output ;
	
	if(output){
		printArray(result , n);
	}else{
		cout << "NO SOLUTION" ;
	}
//	return result ; 
return 0 ;
}
