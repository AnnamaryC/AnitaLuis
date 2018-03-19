#include <iostream>
#include <cstdlib>
#include <fstream>
#include <cmath>
#include <iomanip>
#include <string>
#include <limits>
using namespace std;

//it
//it
//nowoowhAYDkawudf

class NumerosRacional{
	public:
		Numeros();
		SetNumeros1(int a, int b);
		SetNumeros2(int c, int d);
		friend int suma( int num, int den, int num2, int den2);
		friend int resta(int num, int den, int num2, int den2);
		friend int division(int num, int den, int num2, int den2);
		friend int multiplicacion(int num, int den, int num2, int den2);
		friend int comparacion(int num, int den, int num2, int den2);
	private:
		int num;
		int num2;
		int den;
		int den2;
	};
	

	
NumerosRacional::Numeros(){
	num = 0;
	den = 0;
	num2 = 0;
	den = 0;
}

NumerosRacional::SetNumeros1(int a, int b){
	num = a;
	den = b;
}

NumerosRacional::SetNumeros2(int c, int d){
	num2= c;
	den2 = d;
}

suma( int num, int den, int num2, int den2, int& x, int&y){;
	x = (num *  den2) + (num2 * den);
	y = (den * den2);
	
	cout << "Sumar de fracciones: " << x << "/" << y << endl;
	
}

resta( int num, int den, int num2, int den2, int& x, int& y){
	x = (num *  den2) - (num2 * den);
	y = (den * den2);
	
	cout << "Resta de fracciones: " << x << "/" << y << endl;
	
}

division(int num, int den, int num2, int den2, int& x, int& y){
	x = (num * den2);
	y =(num2 * den2);
	
	cout << "Division de fraciones: " << x << "/" << y << endl;
}

multiplicacion(int num, int den, int num2, int den2, int& x, int& y){
	x = (num * num2);
	y = (den * den2);
	cout << "Multiplicacion de fracciones: " << x << "/" << y << endl;
}

comparacion(int num, int den, int num2, int den2){
	if (num == num2 && den == den2)
		cout << "Las fracciones son iguales." << endl;
	else
		cout << "Las fracciones no son iguales" << endl;
}


int menu ();

int main (){
	int a, b, c, d, x= 0, y=0;
	int opc;
	ifstream in;
	ofstream out;
	in.open("racionales.txt");
	out.open("salida.txt");
	
	
	//	in.ignore(1, '/');

	in >> a >> b >> c >> d;
	cout << a << b << c << d << endl;
	
	
	
	if (a == 0 || b == 0 || c == 0 || d == 0)
		cout << "ERROR: algun valor es igual a cero, porfavor cambiar valor diferente de cero." << endl;
	else{
		do{
		opc = menu();
		
		switch(opc){
		case 1:
			suma(a,b,c,d,x,y);
			out << "Opcion 1 elegida" << endl;
			out << "Sumar de fracciones: " << x << "/" << y << endl << endl;
			break;
		case 2:
			resta(a,b,c,d,x,y);
			out << "Opcion 2 elegida" << endl;
			out << "Resta de fracciones: " << x << "/" << y << endl << endl;
			break;
		case 3:
			division(a,b,c,d,x,y);
			out << "Opcion 3 elegida" << endl;
			out << "Division de fracciones: " << x << "/" << y << endl << endl;
			break;
		case 4:
			multiplicacion(a,b,c,d,x,y);
			out << "Opcion 4 elegida" << endl;
			out << "Multiplicacion de fracciones: " << x << "/" << y << endl << endl;
			break;
		case 5:
			out << "Opcion 5 elegida"<< endl << endl;
			comparacion(a,b,c,d);
			break;
		case 6:
			cout << "Fin del programa." << endl;
			break;
		
	}}while (opc != 6);
}

in.close();
out.close();
	return 0;
}


int menu(){
	int opc;
	do{
		cout << "Selecione uno de los siguiente." << endl
			 << "1. Suma numeros Racionales." << endl
			 <<"2. Resta numeros Racionales." << endl
			 << "3. dividir numeros Racionales." << endl
			 << "4. Multiplicar numeros racionales." << endl
			 << "5. Comparar numeros racionales." << endl
			 <<"6. Salir del Programa." << endl;
		cin >> opc;
		if(opc < 1 || opc >6)
			cout << "ERROR: favor repetir" << endl;
}while (opc < 1 || opc >6 );
}



