#include<iostream>
#include<math.h>
using namespace std;

class shapes{

public:
    //For square
    float area(double a){
        return a * a;
    }

    //For rectangle
    float area(float a, float b){
        return a * b;
    }

    //For triangle
    float area(float a, float b, float c){
        float semi_per = (a + b + c)/2;
        semi_per = (semi_per*(semi_per - a)*(semi_per - b)*(semi_per - c));
        return sqrt(semi_per);
    }

    //For circle
    float area(float r){
        return M_PI * r * r;
    }
};

int main(){
    shapes s;
    int ch;
    double side;
    float length, breadth, side1, side2, side3, radius;
    while(1){
        cout << "==FIND THE AREA==\n";
        cout << "1. Square\n";
        cout << "2. Rectangle\n";
        cout << "3. Triangle\n";
        cout << "4. Circle\n\n";
        cout << "Enter your choice = ";
        cin >> ch;
        switch(ch){
            case 1:
                cout << "Enter the length of the side = ";
                cin >> side;
                cout << "Area of the square is " << s.area(side);
                break;
            case 2:
                cout << "Enter the length = ";
                cin >> length;
                cout << "Enter the breadth = ";
                cin >> breadth;
                cout << "Area of the rectangle is " << s.area(length, breadth);
                break;
            case 3:
                cout << "Enter side 1 = ";
                cin >> side1;
                cout << "Enter side 2 = ";
                cin >> side2;
                cout << "Enter side 3 = ";
                cin >> side3;
                cout << "Area of the triangle is " << s.area(side1, side2, side3);
                break;
            case 4:
                cout << "Enter the radius = ";
                cin >> radius;
                cout << "Area of the circle is " << s.area(radius);
                break;
            default:
                cout << "Enter a valid choice!";
        }
        cout << endl;
    }
    return 1;
}
