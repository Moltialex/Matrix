#include <iostream>

using namespace std;

int main(){
	
	int const tabsizeX= 5;
	int const tabsizeY= 5;
	char tab[tabsizeX][tabsizeY];

	for(int i= 0; i<tabsizeX; i++){
		for(int j= 0; j<tabsizeY; j++){
			tab[i][j]= '.';
		}
	}
	
	for(int i= 0; i<tabsizeX; i++){
		for(int j= 0; j<tabsizeY; j++){
			cout << tab[i][j] << " ";
		}
		cout << endl;
	}

	return 0;
}
