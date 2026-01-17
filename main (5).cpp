#include <iostream>
using namespace std;

//FRACTION STRUCTURE
struct Fraction {
    int num;
    int den;
};

//FUNCTION
Fraction & largestFraction(Fraction& f1,Fraction & f2, Fraction & f3) {
    if (f1.num * f2.den >= f2.num * f1.den && f1.num * f3.den >= f3.num *f1.den)
{
    return f1;
}
 else if (f2.num * f1.den >= f1.num * f2.den && f2.num * f3.den >= f3.num * f2.den)
 {
     return f2;
 }
 else
 {
     return f3;
 }
}

int main() {
    Fraction* a = new Fraction{1,2};
    Fraction* b = new Fraction{3,4};
    Fraction* c = new Fraction{2,3};
    
Fraction & largest = largestFraction(*a, *b, *c);

cout << "Largest Fraction:" << largest.num <<"/" << largest.den <<endl;

delete a;
delete b;
delete c;

return 0;
}