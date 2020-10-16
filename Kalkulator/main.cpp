#include <iostream>

using namespace std;

int main(int argc, char** argv) {
	float a, b;
	
	cout << "Podaj pierwsza liczbe: ";
	cin >> a;
	cout << "Podaj druga liczbe: ";
	cin >> b;
	
	float dodawanie = a + b;
	float odejmowanie = a - b;
	float mnozenie = a * b;
	float dzielenie = a / b;
	
	cout << a << "+" << b << "=" << dodawanie << endl;
	cout << a << "-" << b << "=" << odejmowanie << endl;
	cout << a << "*" << b << "=" << mnozenie << endl;
	cout << a << "/" << b << "=" << dzielenie << endl;
	
	return 0;
}
