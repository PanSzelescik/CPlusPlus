#include <iostream>

using namespace std;

int main() {
	double a, b;
	
	cout << "Podaj pierwsza liczbe: ";
	cin >> a;
	cout << "Podaj druga liczbe: ";
	cin >> b;
	
	double dodawanie = a + b;
	double odejmowanie = a - b;
	double mnozenie = a * b;
	double dzielenie = a / b;
	
	cout << a << "+" << b << "=" << dodawanie << endl;
	cout << a << "-" << b << "=" << odejmowanie << endl;
	cout << a << "*" << b << "=" << mnozenie << endl;
	cout << a << "/" << b << "=" << dzielenie << endl;
	
	return 0;
}
