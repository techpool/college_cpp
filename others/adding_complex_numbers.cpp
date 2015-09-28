#include<iostream>
using namespace std;
class Complex{
private:
    int real, imaginary;
public:
    Complex(){

    }

    Complex(int x, int y){
        real = x;
        imaginary = y;
    }

    Complex operator + (Complex &c2){
        Complex c;
        c.real = this->real + c2.real;
        c.imaginary = this->imaginary + c2.imaginary;
        return c;
    }

    Complex operator - (Complex &c2){
        Complex c;
        c.real = this->real - c2.real;
        c.imaginary = this->imaginary - c2.imaginary;
        return c;
    }

    friend ostream& operator << (ostream &out, Complex &c){
        if(c.imaginary < 0){
            out << c.real << " " << c.imaginary << "i";
        } else {
            out << c.real << " + " << c.imaginary << "i";
        }
        return out;
    }
};

int main(){
    Complex c1(10, 20), c2(5, 7), c3;
    c3 = c2 - c1;
    cout << "The result is ";
    cout << c3;
}
