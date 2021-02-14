#include <iostream>
using namespace std;

int main() {
    int a;
    int d;
    cin >> a;
    
    d = a / 100;
    
    if (d == 1) {
        cout << "Сто ";
    } else if (d == 2) {
        cout << "Двести ";
    } else if (d == 3) {
        cout << "Триста ";
    } else if (d == 4) {
        cout << "Четыреста ";
    } else if (d == 5) {
        cout << "Пятьсот ";
    } else if (d == 6) {
        cout << "Шестьсот ";
    } else if (d == 7) {
        cout << "Семьсот ";
    } else if (d == 8) {
        cout << "Восемьсот ";
    } else if (d == 9) {
        cout << "Девятьсот ";
    }
    
    d = a % 100;
    
    if (d == 10) {
        cout << "десять ";
    } else if (d == 11) {
        cout << "одиннадцать ";
    } else if (d == 12) {
        cout << "двенадцать ";
    } else if (d == 13) {
        cout << "тринадцать ";
    } else if (d == 14) {
        cout << "четырнадцать ";
    } else if (d == 15) {
        cout << "пятнадцать ";
    } else if (d == 16) {
        cout << "шестнадцать ";
    } else if (d == 17) {
        cout << "семнадцать ";
    } else if (d == 18) {
        cout << "восемнадцать ";
    } else if (d == 19) {
        cout << "девятнадцать ";
    }
    
    if (d >= 10 && d < 20 || d == 0) {
        return 0;
    }
    
    d = d / 10;
    
    if (d == 2) {
        cout << "двадцать ";
    } else if (d == 3) {
        cout << "тридцать ";
    } else if (d == 4) {
        cout << "сорок ";
    } else if (d == 5) {
        cout << "пятьдесят ";
    } else if (d == 6) {
        cout << "шестьдеяст ";
    } else if (d == 7) {
        cout << "семьдесят ";
    } else if (d == 8) {
        cout << "восеьмдесят ";
    } else if (d == 9) {
        cout << "девяносто ";
    }
    
    d = a % 10;
    if (d == 0) {
        return 0;
    }
    
    if (d == 1) {
        cout << "один";
    } else if (d == 2) {
        cout << "два";
    } else if (d == 3) {
        cout << "три";
    } else if (d == 4) {
        cout << "четыре";
    } else if (d == 5) {
        cout << "пять";
    } else if (d == 6) {
        cout << "шесть";
    } else if (d == 7) {
        cout << "семь";
    } else if (d == 8) {
        cout << "восемь";
    } else if (d == 9) {
        cout << "девять";
    }

    return 0;
}
