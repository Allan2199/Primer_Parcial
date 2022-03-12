#include <iostream>
#include <string.h>

using namespace std;

class estudiante {
	
	protected: 
		string nombres, apellidos, curso;
		int nota1, nota2, nota3, nota4;
				
	protected:
		estudiante(){
		}
				
		estudiante (string nom, string ape, string cur, int n1, int n2, int n3, int n4){
			
			nombres = nom;
			apellidos = ape;
			curso = cur;
			nota1 = n1;
			nota2 = n2;
			nota3 = n3;
			nota4 = n4;

		}
		
			void mostrar ();
};
