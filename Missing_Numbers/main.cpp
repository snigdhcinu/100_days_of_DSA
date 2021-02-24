#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

/* Problem statement :- https://cses.fi/problemset/task/1083 */

// Check whether a specific no. is present in the array or not.
bool isPresent(int input[] , int size , int target){
	for(int i = 0 ; i < size ; i++)	{
		cout << "Checking for " << target << " in the input array"<<endl;
		if(target == input[i]){
			return true;
		}	
	}
	return false;
	
}

int main() {
	int limit;
	cout << "Enter the limit ";
	cin >> limit;
	
	cout << "Enter the elements " << endl;
	int input[limit - 1];
	for(int i = 0 ; i < limit - 1 ; i++){
		cin >> input[i];
	}
		
	int i = 1;
	while(i <= limit){
		if( !( isPresent(input , sizeof(input) / sizeof(int) , i) ) )	{
			cout << i <<" is the missing number";
			return 0;
		}
		i += 1;
	}
	
	return 0;
}
