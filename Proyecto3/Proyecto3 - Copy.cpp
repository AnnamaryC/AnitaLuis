//Annamary Cartagena
//feoni peoni
//flor narciso
#include <cmath>
#include <cstdlib>
#include <iostream>
#include <fstream>

using namespace std;


class NumeroRacional{
	private:
		int num;
		int den;
		int num2;
		int den2;
		int x;
	
	public:
		void SetNumeros ();
		friend NumeroRacional operator +(const NumeroRacional& a,const NumeroRacional& b);
    	friend NumeroRacional operator -(const NumeroRacional& a,const NumeroRacional& b);
    	friend NumeroRacional operator /(const NumeroRacional& a,const NumeroRacional& b);
    	friend NumeroRacional operator *(const NumeroRacional& a,const NumeroRacional& b);
		friend NumeroRacional suma(const NumeroRacional& num,const NumeroRacional& den,const NumeroRacional& num2,const NumeroRacional& den2);
   		friend NumeroRacional resta(const NumeroRacional& num,const NumeroRacional& den, const NumeroRacional& num2,const NumeroRacional& den2);
    	friend NumeroRacional dividir(const NumeroRacional& num,const NumeroRacional& den, const NumeroRacional& num2,const NumeroRacional& den2);
    	friend NumeroRacional multiplicar(const NumeroRacional& a,const NumeroRacional& b, const NumeroRacional& c,const NumeroRacional& d);
    	friend ostream& operator <<(ostream &salida , const NumeroRacional &a);
    	friend istream& operator >>(istream&salida, NumeroRacional &a);
    	NumeroRacional(double b);
    	NumeroRacional();
    	~NumeroRacional ();
};




NumeroRacional suma(const NumeroRacional& num,const NumeroRacional& den,const NumeroRacional& num2, const NumeroRacional& den2){
	NumeroRacional resultado, x , y;
	x = den * den2;
	y = (num * den2) + (num2 * den2);
	
	cout << x << " " << y << endl;
}

int menu();

int main (){
	int a, b, c, d, resultado;
	int opc;
	ifstream in;
	ofstream out;
	in.open("racionales.txt");
	out.open("salida.txt");
	
	
	in >> a >> b >> c >> d;
	cout << a << b << c << d << endl;
	do{
	opc = menu();
	
	switch(opc){
	case 1:
		out << "Opcion 1 elegida." << endl;
		suma(a,b,c,d);
		break;
	case 2:
		break;
	case 3:
		break;
	case 4:
		break;
	case 5:
		break;
	case 6:
		cout << "Fin del programa." << endl;
		break;
	
}
	
	}while(opc != 6);
	
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

