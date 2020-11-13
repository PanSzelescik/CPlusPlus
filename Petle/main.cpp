#include <iostream>

using namespace std;

void zadanie1() {
    cout << "Zadanie 1." << endl;
    for (int i = 1; i <= 100; i++) {
        cout << i << "-";
    }
    cout << endl << endl;
}

void zadanie2() {
    cout << "Zadanie 2." << endl;
    for (int i = 100; i <= 200; i++) {
        cout << i << endl;
    }
    cout << endl;
}

void zadanie3() {
    cout << "Zadanie 3." << endl;
    for (int i = -1; i >= -100; i--) {
        cout << i << " ";
    }
    cout << endl << endl;
}

void zadanie4() {
    cout << "Zadanie 4." << endl;
    for (int i = 400; i >= 200; i--) {
        cout << i << " ";
    }
    cout << endl << endl;
}

void zadanie5() {
    cout << "Zadanie 5." << endl;
    for (int i = 0; i < 50; i++) {
        cout << "*";
    }
    cout << endl << endl;
}

void zadanie6() {
    cout << "Zadanie 6." << endl;
    for (int i = 10; i <= 150; i++) {
        if (i % 11 == 0) {
            cout << i << " ";
        }
    }
    cout << endl << endl;
}

void zadanie7() {
    cout << "Zadanie 7." << endl;
    for (int i = 3; i <= 300; i++) {
        if (i % 3 == 0 && i % 13 == 0) {
            cout << i << " ";
        }
    }
    cout << endl << endl;
}

void zadanie8() {
    cout << "Zadanie 8." << endl;
    int a, b;
    cout << "Podaj pierwsza liczbe: " << endl;
    cin >> a;
    cout << "Podaj druga liczbe: " << endl;
    cin >> b;
    for (int i = a; i <= b; i++) {
        if (i % 5 == 0) {
            cout << i << " ";
        }
    }
    cout << endl << endl;
}

void zadanie9() {
    cout << "Zadanie 9." << endl;
    for (int i = 65; i <= 122; i++) {
        cout << (char) i;
        if (i == 90) { // Musimy przeskoczyć kilka znaków takich jak [ ] _
            i = 96;
        }
    }
    cout << endl << endl;
}

void zadanie10() {
    cout << "Zadanie 10." << endl;
    int a, b;
    cout << "Podaj pierwszy bok: " << endl;
    cin >> a;
    cout << "Podaj drugi bok: " << endl;
    cin >> b;
    for (int i = 1; i <= a; i++) {
        for (int j = 1; j <= b; j++) {
            if (i == 1 || i == a || j == 1 || j == b) {
                cout << "*";
            } else {
                cout << " ";
            }
        }
        cout << endl;
    }
}

int main() {
    zadanie1();
    zadanie2();
    zadanie3();
    zadanie4();
    zadanie5();
    zadanie6();
    zadanie7();
    zadanie8();
    zadanie9();
    zadanie10();
    return 0;
}