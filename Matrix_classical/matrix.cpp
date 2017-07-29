#include <iostream>

using namespace std;

template<size_t I, size_t J>
void mx_print(double (&tab)[I][J]){
		
		for(int i= 0; i< I; i++){
			for(int j= 0; j< J; j++){
				cout << tab[i][j] << " ";
			}
			cout << endl;
		}
}

template<size_t I, size_t J>
void mx_addition(double (&mx1)[I][J], double (&mx2)[I][J]){

	double mx[I][J];

	for(int i= 0; i< I; i++){
		for(int j= 0; j<J; j++){
			mx[i][j] = mx1[i][j] + mx2[i][j];
		}
	}

	mx_print(mx);
}

template<size_t I, size_t J>
void mx_soustraction(double (&mx1)[I][J], double (&mx2)[I][J]){

	double mx[I][J];

	for(int i= 0; i< I; i++){
		for(int j= 0; j<J; j++){
			mx[i][j] = mx1[i][j] - mx2[i][j];
		}
	}

	mx_print(mx);
}

template<size_t I, size_t J>
void mx_multiplication(double (&mx1)[I][J], double (&mx2)[I][J]){
	
	double mx[I][J];

	for(int i= 0; i<I; i++){
		for(int j= 0; j<J; j++){
			
		}
	}
}

template<size_t I, size_t J>
void scalar_multiplication(double sc, double (&mx1)[I][J]){
	
}

int main(){
	
	int const tabsize= 5;
	double tab[tabsize][tabsize];

	for(int i= 0; i< tabsize; i++){
		for(int j= 0; j< tabsize; j++){
			tab[i][j]= 1.0;
		}
	}
	
	mx_print(tab);
	mx_addition(tab,tab);

	return 0;
}
