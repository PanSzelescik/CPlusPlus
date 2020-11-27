#include <iostream>
#include <cstdlib> //rand
#include <ctime>  //time

using namespace std;

void zadanie1() {
    cout << "Zadanie 1." << endl;
    int liczby[10] = {5234, 2, 4, 1234, 834, 3, 3, 9846, 2983, 73254};
    for (int liczba : liczby) {
        cout << liczba << " ";
    }
    cout << endl;
}

void zadanie2() {
    cout << "Zadanie 2." << endl;
    char litery[6] = {'S', 'z', 'y', 'm', 'o', 'n'};
    for (char litera : litery) {
        cout << litera;
    }
    cout << endl;
}

void zadanie3() {
    cout << "Zadanie 3." << endl;
    int liczby[200];
    for (int i = 0; i < 200; i++) {
        liczby[i] = i + 1;
    }
    // W zadaniu nic nie bylo o wyswietlaniu liczb
    /*for (int liczba : liczby) {
        cout << liczba << " ";
    }*/
    cout << endl;
}

void zadanie4() {
    cout << "Zadanie 4." << endl;
    int liczby[50];
    int liczba = 0;
    int index = 0;
    while (index < 50) {
        if (liczba % 7 == 0) {
            liczby[index] = liczba;
            index++;
        }
        liczba++;
    }
    // W zadaniu nic nie bylo o wyswietlaniu liczb
    /*for (int liczba2 : liczby) {
        cout << liczba2 << " ";
    }*/
    cout << endl;
}

void zadanie5() {
    cout << "Zadanie 5." << endl;
    char litery[52];
    int index = 0;
    for (int i = 65; i <= 122; i++) {
        litery[index] = (char) i;
        index++;
        if (i == 90) {
            i = 96;
        }
    }
    for (char litera : litery) {
        cout << litera;
    }
    cout << endl;
}

void zadanie6() {
    cout << "Zadanie 6." << endl;
    int liczby[10];
    for (int i = 0; i < 10; i++) {
        int x;
        cout << "Podaj " << i + 1 << " liczbe:" <<  endl;
        cin >> x;
        liczby[i] = x;
    }
    for (int liczba : liczby) {
        cout << liczba << " ";
    }
    cout << endl;
}

void zadanie7_8i9() {
    cout << "Zadanie 7." << endl;
    int liczby[100];
    for (int i = 0; i < 100; i++) {
        liczby[i] = rand();
    }
    cout << "Zadanie 8." << endl;
    for (int liczba : liczby) {
        cout << liczba << " ";
    }
    cout << endl;
    cout << "Zadanie 9." << endl;
    int min = liczby[0], max = liczby[0];
    for (int liczba : liczby) {
        if (liczba > max) {
            max = liczba;
        }

        if (liczba < min) {
            min = liczba;
        }
    }
    cout << "Najmniejsza liczba: " << min << endl;
    cout << "Najwieksza liczba: " << max << endl;
}

void zadanie10() {
    cout << "Zadanie 10." << endl;
    int liczby[20];
    for (int i = 0; i < 20; i++) {
        liczby[i] = (rand() % 26) + 25;
    }

    int rozmiar = sizeof(liczby) / sizeof(int);
    for (int i = 0; i < rozmiar; i++) {
        cout << liczby[i] << " ";
    }
    cout << endl;
    for (int i = rozmiar - 1; i >= 0; i--) {
        cout << liczby[i] << " ";
    }
    cout << endl;
}

int main() {
    srand(time(NULL));

    zadanie1();
    zadanie2();
    zadanie3();
    zadanie4();
    zadanie5();
    zadanie6();
    zadanie7_8i9();
    zadanie10();

    return 0;
}