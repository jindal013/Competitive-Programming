#include <iostream>
using namespace std;

struct Quotient {
    int nominator;
    int denominator;

    // Construct a new Quotient with the given
    // numerator and denominator
    Quotient(int n, int d) {
        nominator = n;
        denominator = d;
    }
    
    // Return a new Quotient, this instance plus
    // the "other" instance
    Quotient add(const Quotient &other) const {
        return Quotient(nominator*other.denominator+other.nominator*denominator, denominator*other.denominator);
    }
    
    // Return a new Quotient, this instance times
    // the "other" instance
    Quotient multiply(const Quotient &other) const { 
        return Quotient(nominator*other.nominator, denominator*other.denominator);
    }
    
    // Output the value on the screen in the format n/d
    void print() const { 
        cout << nominator << "/" << denominator << endl;
    }
};

int main(){
    Quotient q(5, 8);
    Quotient oq(4, 5);
    Quotient addq(q.add(oq));

    q.print();
    oq.print();
    addq.print();
}