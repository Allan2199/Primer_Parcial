#include "estudiante.cpp"
#include <iostream>

using namespace std;

class archivo : estudiante {
	
	private : int codigo;
	
	public : 
	archivo (){
	}
	
	archivo(string nom, string ape, string cur, int n1, int n2, int n3, int n4, int c) : estudiante(nom,ape,cur,n1,n2,n3,n4){
	codigo = c;
	}
	
	void mostrar (){
		cout << "_____________________________________________________________________________________________________________________________________________________________________________________________________" << endl;
		cout << "datos del Estuante:       No." << codigo << " , " << nombres << " "  << apellidos << " , "  << curso << " , Nota 1: " << nota1 << " , Nota 2: " << nota2 << " , Nota 3: " << nota3 << " , Nota 4: " << nota4 << endl;
		}

};	
