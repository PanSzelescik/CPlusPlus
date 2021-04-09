#include <iostream>
#include <fstream>

using namespace std;

int charToInt(char c) {
    return (int) (c - '0'); // Taki trik z tabelą ASCI
}

int lastDigit(int n) {
    return n % 10;
}

int main() {
    // Nie wiem czy odczyta plik bo musialem u siebie uzyc sciezki bezwzglednej
    ifstream odczyt("pesel.txt");
    ofstream zapis_suma("pesel_suma.txt");
    ofstream zapis_plec("pesel_plec.txt");
    ofstream zapis_data("pesel_data.txt");
    ofstream zapis_poprawnosc("pesel_poprawnosc.txt");

    if (odczyt.is_open() && zapis_suma.is_open() && zapis_plec.is_open() && zapis_data.is_open() && zapis_poprawnosc.is_open()) {
        char pesel[12]; // 12 znaków bo PESEL ma 11 i jest znak nowej linii
        while (odczyt.getline(pesel, 12)) {
            // Zadanie 2
            int suma_cyfr = 0;
            for (int i = 0; i < 11; ++i) {
                suma_cyfr += charToInt(pesel[i]);
            }
            zapis_suma << suma_cyfr << endl;

            // Zadanie 3
            bool kobieta = charToInt(pesel[9]) % 2 == 0;
            zapis_plec << pesel << " - " << (kobieta ? "kobieta" : "mezczyzna") << endl;

            // Zadanie 4
            int year1 = 1; // Pierwsza cyfra roku
            int year2 = 9; // Druga cyfra roku
            int year3 = charToInt(pesel[0]); // Trzecia cyfra roku
            int year4 = charToInt(pesel[1]); // Czwarta cyfra roku
            int month1 = charToInt(pesel[2]); // Pierwsza cyfra miesiaca
            int month2 = charToInt(pesel[3]); // Druga cyfra miesiaca
            int day1 = charToInt(pesel[4]); // Pierwsza cyfra dnia
            int day2 = charToInt(pesel[5]); // Druga cyfra dnia
            if (month1 == 2 || month1 == 3) {
                year1 = 2;
                year2 = 0;
                month1 -= 2;
            } else if (month1 == 4 || month1 == 5) {
                year1 = 2;
                year2 = 1;
                month1 -= 4;
            } else if (month1 == 6 || month1 == 7) {
                year1 = 2;
                year2 = 2;
                month1 -= 6;
            } else if (month1 == 8 || month1 == 9) {
                year1 = 1;
                year2 = 8;
                month1 -= 8;
            }
            int suma_urodzenia = day1 + day2 + month1 + month2 + year1 + year2 + year3 + year4;
            zapis_data << pesel << " " << day1 << day2 << "." << month1 << month2 << "." << year1 << year2 << year3 << year4 << " " << suma_urodzenia << endl;

            //Zadanie 5
            int suma_kontrolna = charToInt(pesel[0]) * 1 +
                                 charToInt(pesel[1]) * 3 +
                                 charToInt(pesel[2]) * 7 +
                                 charToInt(pesel[3]) * 9 +
                                 charToInt(pesel[4]) * 1 +
                                 charToInt(pesel[5]) * 3 +
                                 charToInt(pesel[6]) * 7 +
                                 charToInt(pesel[7]) * 9 +
                                 charToInt(pesel[8]) * 1 +
                                 charToInt(pesel[9]) * 3 +
                                 charToInt(pesel[10]) * 1;
            bool poprawny = lastDigit(suma_kontrolna) == 0;
            zapis_poprawnosc << pesel << " - " << (poprawny ? "poprawny" : "niepoprawny") << endl;
        }
    } else {
        cout << "Nie udalo sie otworzyc jednego z plikow";
    }

    odczyt.close();
    zapis_suma.close();
    zapis_plec.close();
    zapis_data.close();
    zapis_poprawnosc.close();

    return 0;
}