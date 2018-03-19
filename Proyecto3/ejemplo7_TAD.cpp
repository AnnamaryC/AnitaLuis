
// Ejemplo utilizando sobrecarga de operadores y funciones amigas
// Implementacion del TAD NumeroReal que permite manipular numeros reales y en el que
// se sobrecargan los operadores +, -, *, /, << y >>


#include <iostream>

using namespace std;

class NumeroReal { // Definicion de la clase NumeroReal
public:
    friend NumeroReal operator +(const NumeroReal& a,const NumeroReal& b);
    friend NumeroReal operator -(const NumeroReal& a,const NumeroReal& b);
    friend NumeroReal operator /(const NumeroReal& a,const NumeroReal& b);
    friend NumeroReal operator *(const NumeroReal& a,const NumeroReal& b);
    friend ostream& operator <<(ostream &salida , const NumeroReal &a);
    friend istream& operator >>(istream&salida, NumeroReal &a);
    NumeroReal(double b);
    NumeroReal();
    ~NumeroReal ();
private:
    double x;
};

// Constructores
NumeroReal::NumeroReal(double a) {
    x = a;
}
NumeroReal::NumeroReal() {
}

// Destructor
NumeroReal::~NumeroReal() {
}

//Sobrecarga de operadores mediante funciones amigas
NumeroReal operator +(const NumeroReal& a ,const NumeroReal& b) {
    NumeroReal temporal;
    
    temporal.x = a.x + b.x;
    return temporal;
}

NumeroReal operator -(const NumeroReal& a ,const NumeroReal& b) {
    NumeroReal temporal;
    
    temporal.x = a.x - b.x;
    return temporal;
}

NumeroReal operator *(const NumeroReal& a ,const NumeroReal& b) {
    NumeroReal temporal;
    
    temporal.x = a.x * b.x;
    return temporal;
}

NumeroReal operator /(const NumeroReal& a ,const NumeroReal& b) {
    if (b.x == 0){
        cout << "Division por 0. Detiene ejecucion." << endl;
        exit(1);
    }
    NumeroReal temporal;
    temporal.x = a.x / b.x;
    return temporal;
}

ostream &operator <<(ostream& salida , const NumeroReal& a){
    salida << a.x ;
    return salida;
}

istream &operator >>(istream& entrada, NumeroReal& a){
    entrada >> a.x;
    return entrada;
}

//Utilizacion de la clase NumeroReal
int main() {
    NumeroReal A, B, C, resultado;
    
    // Formato de numeros reales con dos numeros decimales
    cout.setf (ios :: fixed);
    cout.setf (ios :: showpoint);
    cout.precision (2);
    
    cout << "Introduzca tres numeros reales: ";
    cin >> A;
    cin >> B;
    cin >> C;
    cout << "A = " << A << ", B = " << B << ", C = " << C << endl;
    resultado = A - B + C;
    cout << "Resultado = A - B + C = " << resultado << endl;
    resultado = A / B ;
    cout << "Resultado = A / B = " << resultado << endl;
    resultado = A * resultado;
    cout << "Resultado = A * resultado = " << resultado << endl;
    resultado = B * resultado / A;
    cout << "Resultado = B * resultado / A = " << resultado << endl;
    return 0;
}
