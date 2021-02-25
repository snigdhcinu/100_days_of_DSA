/* Problem Statement :- https://cses.fi/problemset/task/1094 */

// check for passing array by reference


#include <iostream>
#include <cstring>
#include <ctime>
#include <cstdlib>

using namespace std;

unsigned long int settleArray(unsigned long int* arr , int size){
	int i = 1 ;
	unsigned long int incrementation = 0;
	unsigned long int diff = 0;
	while(i < size){
		if(arr[i] < arr[i - 1]){
			diff = arr[i - 1] - arr[i];
			incrementation += diff ;
			arr[i] += diff ;
		}
		i += 1 ;
	}
	return incrementation ;
}

int main(){
	int size ;
	cout << "Enter the size of the array :- " ;
	cin >> size ; 
	
	unsigned long int input[size] ;
	cout << "Enter the elements of the array" << endl ;
	for(int i = 0 ; i < size ; i++){
		cin >> input[i] ;
	}
	
	unsigned long int modifications = settleArray(input , size) ;
	cout << "Total " << modifications << " changes have been made to satisfy the array." ;  
//	cout << modifications ;		// comment all cout and uncomment this cout for passing all test cases.
	return 0 ; 
}


