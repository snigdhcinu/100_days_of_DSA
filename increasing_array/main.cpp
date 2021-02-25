/* Problem Statement :- https://cses.fi/problemset/task/1094 */

// check for passing array by reference


#include <iostream>
#include <cstring>
#include <ctime>
#include <cstdlib>

using namespace std;

int settleArray(int* arr , int size){
	int i = 1 ;
	int incrementation = 0;
	while(i < size){
		if(arr[i] < arr[i - 1]){
			incrementation += (arr[i - 1] - arr[i]) ;
			arr[i] += (arr[i - 1] - arr[i]) ;
		}
		i += 1 ;
	}
	return incrementation ;
}

int main(){
	int size ;
	cout << "Enter the size of the array :- " ;
	cin >> size ; 
	
	int input[size] ;
	cout << "Enter the elements of the array" << endl ;
	for(int i = 0 ; i < size ; i++){
		cin >> input[i] ;
	}
	
	int modifications = settleArray(input , size) ;
	cout << "Total " << modifications << " changes have been made to satisfy the array." ;  
	return 0 ; 
}


