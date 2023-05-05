#include <iostream>

using std::cout;
using std::cin;

int main(){	
	int numeros[5];
	int numeros_copia[5];
	int  i, j, repete = 0, n = 0; 

	cout << "Digite 5 numeros de 10 a 100" << "\n";

	for(i = 0; i < 5; i++){
		cin >> numeros[i];
		if(i == 0){
			numeros_copia[n] = numeros[i];
			n++;	
		}else{
			repete = 0;
			
			for(j = 0; j < n; j++){
				if(numeros[i] == numeros_copia[j]){
					repete++;
				}
			}
			if(repete < 1){
				numeros_copia[n] = numeros[i];
				n++;
			}
		}
	}
		
	for(i = 0; i < n; i++){
		cout << "\n" << "" << numeros_copia[i] << "\n";
	}

	return 0;
}