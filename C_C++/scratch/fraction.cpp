#include <iostream>

using namespace std;

class Fraction{ //2(a)
    private:
    int numerator;
    int denominator;

    public:
    Fraction(){numerator = 0; denominator = 1;}
    Fraction(int n, int d){numerator = n; denominator = d;}
    double value(){
        double v = (double)numerator/(double)denominator;
        return v;
        }
    void add(Fraction f){numerator = (numerator*f.denominator + denominator*f.numerator); denominator *= f.denominator;}
    void printFraction(){cout << numerator << " / " << denominator;}
};

int main(){ //2(b)
    Fraction myFrac1(1, 2);
    cout << "My first fraction is:\n";
    myFrac1.printFraction();
    cout << "\nwhich has a value of:\n" << myFrac1.value() << "\n\n";

    Fraction myFrac2(1, 4);
    cout << "My second fraction is:\n";
    myFrac2.printFraction();
    cout << "\nwhich has a value of:\n" << myFrac2.value() << "\n\n";

    myFrac1.add(myFrac2);
    cout << "The sum of my first and second fraction is:\n";
    myFrac1.printFraction();
    cout << "\nwhich has a value of:\n" << myFrac1.value() << "\n\n";

    return 0;
}