#include <iostream>
using namespace std;

int main() {
    double celsius, fahrenheit;

    cout << "input temperature in celsius: ";
    cin >> celsius;

    fahrenheit = (9.0 / 5.0) * celsius + 32;

    cout << "input temperature in fahrenheit: " << fahrenheit << endl;

    return 0;
}