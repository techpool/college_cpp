/*
	Write a program to perform, addition and substraction of two complex numbers using + operator and - operator
	overloading.
*/
#include<iostream.h>
class complex{
	private:
		int i;
		int r;

	public:
		void setInput(){
			cout << "Enter the real part: ";
			cin >> r;
			cout << "Enter the imaginary part: ";
			cin >> i;
		}

		void displayData(){
			cout << "Complex number: ";
			cout << r ;

			if(i < 0){
				cout << i << "i\n";
			} else {
				cout << "+" << i << "i\n";
			}
		}

		complex operator + (complex &c1){
			complex c;
			c.r = r + c1.r;
			c.i = i + c1.i;
			return c;
		}

		complex operator - (complex &c1){
			complex c;
			c.r = r - c1.r;
			c.i = i - c1.i;
			return c;
		}

		friend ostream &operator << (ostream &output, complex &c){
			if(c.i < 0){
				output << c.r << c.i << "i\n";
			} else {
				output << c.r << "+" << c.i << "i\n";
			}
         return output;
		}
};

int main(){

	complex c1, c2, c3;
	cout << "COMPLEX NUMBER 1:\n";
	c1.setInput();
	cout << "COMPLEX NUMBER 2:\n";
	c2.setInput();
	c3 = c1 + c2;
	cout << "C1 + C2: " << c3;
	c3 = c1 - c2;
	cout << "C1 - C2: " << c3;
	return 0;
}