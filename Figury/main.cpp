#include <iostream>

using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int prostokat() {
	cout << "Program obliczajacy pole prostokata" << endl;
	int a, b;
	cout << "Podaj bok a: ";
	cin >> a;
	cout << "Podaj bok b: ";
	cin >> b;
	int P = a * b;
	cout << "Pole prostokata wynosi: " << P;
	return 0;
}

int trapez() {
	cout << "Program obliczajacy pole trapezu" << endl;
	int a, b, h;
	cout << "Podaj bok a: ";
	cin >> a;
	cout << "Podaj bok b: ";
	cin >> b;
	cout << "Podaj wysokosc h: ";
	cin >> h;
	int P = (a + b) * h / 2;
	cout << "Pole trapezu wynosi: " << P;
	return 0;
}

int kolo() {
	cout << "Program obliczajacy pole kola" << endl;
	int r;
	cout << "Podaj promien r: ";
	cin >> r;
	double P = r * r * 3.14;
	cout << "Pole kola wynosi: " << P;
	return 0;
}

int main(int argc, char** argv) {
	cout << "Jakie pole chcesz obliczyc?" << endl;
	cout << "1) Prostokat" << endl;
	cout << "2) Trapez" << endl;
	cout << "3) Kolo" << endl;
	
	int type;
	cin >> type;
	
	switch (type) {
		case 1:
			return prostokat();
		case 2:
			return trapez();
		case 3:
			return kolo();
		default:
			cout << "Nieznana figura!!!";
			return 1;
	}
}
