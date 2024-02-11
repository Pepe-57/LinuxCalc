#include <iostream>
#include <cmath>

using namespace std;

#define VERSION "1.1"
#define OPERATIONS "1.Addition 2.Subtraction 3.Multiplication 4.Division 5.Square Root 6.Sin 7.Cos 8.Tan 9.Potency 10.Exit"

float a, b = 0;

float getnums() {
    cout << "First number: \n";
	cin >> a;
	cout << "Second number: \n";
	cin >> b;
    return a, b;
}
float SquareRoot(float a) noexcept {
    return sqrt(a);
}

float Addition(float a, float b) {
    return a + b;
}
float Subtraction(float a, float b) {
    return a - b;
}

float Multiplication(float a, float b) {
    return a * b;
}

float Division(int a, int b) {
    return a / b;
}

float Sin(float a) {
    return sin(a);
}

float Cos(float a) {
    return cos(a);
}

float Tan(float a) {
    return tan(a);
}

float Potency(float a, float b) {
    return pow(a, b);
}

int main()
{   
    cout << "Select operation: " OPERATIONS "\n";
    int operation;
    cin >> operation;

    switch(operation) {
        case 1:
            getnums();
            cout << "Result: " << Addition(a, b) << endl;
            break;
        case 2:
            getnums();
            cout << "Result: " << Subtraction(a, b) << endl;
            break;
        case 3:
            getnums();
            cout << "Result: " << Multiplication(a, b) << endl;
            break;
        case 4:
            getnums();
            cout << "Result: " << Division(a, b) << endl;
            break;
        case 5:
            cout << "Enter a number to find its square root: ";
            cin >> a;
            cout << "Result: " << SquareRoot(a) << endl;
            break;
        case 6:
            cout << "Enter a number to find its sine: ";
            cin >> a;
            cout << "Result: " << Sin(a) << endl;
            break;
        case 7:
            cout << "Enter a number to find its cosine: ";
            cin >> a;
            cout << "Result: " << Cos(a) << endl;
            break;
        case 8:
            cout << "Enter a number to find its tangent: ";
            cin >> a;
            cout << "Result: " << Tan(a) << endl;
            break;
        case 9:
            getnums();
            cout << "Result: " << Potency(a, b) << endl;
            break;
        case 10:
            break;    
        default:
            cout << "Invalid input" << endl;
            break;
    }
}

