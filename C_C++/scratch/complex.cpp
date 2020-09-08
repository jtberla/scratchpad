#include <iostream>

using namespace std;

class Complex{
    
    private:
    double real;
    double imag;
    
    public:
    Complex(double re, double im){
        real = re;
        imag = im;
    }
    void add(Complex c){
        real += c.real;
        imag += c.imag;
    }
    void print(){
        cout << real << " + " << imag << "j\n";
    }
};

int main(){
    Complex a(0,1);
    Complex x(1,0);

    x.print();

    return 0;
}