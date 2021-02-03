#include<iostream>
using namespace std;


int main(){
	int array[] = {10,20,30,40,50};
	int size = sizeof(array)/4;
	
	int new_array[2*size];
	
	for(int i = 0; i < size; i++){
		new_array[i] = array[i];
	}
	
	cout<< "Size of the new array is : - "<< sizeof(new_array)/4;
}
