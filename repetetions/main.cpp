#include<iostream>
#include<ctime>
#include<cstdlib>
#include<cstring>

using namespace std ;

int postmartem(char processedString[] , int size){
	int max_length = 0, temp = 0 ;
	for(int i = 0 ; i <= size ; i++){
		if(processedString[i] == '1'){
			temp += 1 ;
		}else{
			if(max_length < temp){
				max_length = temp ;
			}
			temp = 0 ;
		}
	}
	return max_length;
}

int longest_A(string gene , int size){

	char processedString[size] ;
	int i = 0;
	while(i < size){
		if(gene[i] == 'A' || gene[i] == 'a'){
			processedString[i] = '1' ;
			i++;
		}else{
			processedString[i] = '0' ;
			i++;
		}	
	}
	
	return postmartem(processedString , size);
			
}

int longest_G(string gene , int size){
	char processedString[size] ;
	int i = 0;
	while(i < size){
		if(gene[i] == 'G' || gene[i] == 'g'){
			processedString[i] = '1' ;
			i++;
		}else{
			processedString[i] = '0' ;
			i++;
		}	
	}
	
	return postmartem(processedString , size);
}

int longest_C(string gene , int size){
	char processedString[size] ;
	int i = 0;
	while(i < size){
		if(gene[i] == 'C' || gene[i] == 'c'){
			processedString[i] = '1' ;
			i++;
		}else{
			processedString[i] = '0' ;
			i++;
		}	
	}
	
	return postmartem(processedString , size);
}

int longest_T(string gene , int size){
	char processedString[size] ;
	int i = 0;
	while(i < size){
		if(gene[i] == 'T' || gene[i] == 't'){
			processedString[i] = '1' ;
			i++;
		}else{
			processedString[i] = '0' ;
			i++;
		}	
	}
	
	return postmartem(processedString , size);
}

int main(){
	
	string gene_seq ;
	cout << "Enter the gene sequence :- " ;
	cin >> gene_seq ;
	
	int length_gene = gene_seq.size();
	
	int substring_A = longest_A(gene_seq , length_gene) ;
	int substring_G = longest_G(gene_seq , length_gene) ;
	int substring_T = longest_T(gene_seq , length_gene) ;
	int substring_C = longest_C(gene_seq , length_gene) ;
	
	cout << "longest occurence of adenine is : - " << substring_A << endl ;  
	cout << "longest occurence of gaunine is : - " << substring_G << endl ; 
	cout << "longest occurence of thyamine is : - " << substring_T << endl ; 
	cout << "longest occurence of cytosine is : - " << substring_C << endl ; 	
	
	cout << "The longest repetition is : - " ;
	
	int array [] = {substring_A,substring_T,substring_G,substring_C};
	int max = array[0];
	for(int i = 0 ; i < sizeof(array) / sizeof(int) ; i++){
		if(array[i] > max){
			max = array[i];
		}
	}
	cout << max ;
	return 0;
}
