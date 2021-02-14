#include <iostream>
using namespace std;

int main() {
    int d;
    cin >> d;
    
    if (d == 10) {
        cout << "Десять ";
    } else if (d == 11) {
        cout << "Одиннадцать ";
    } else if (d == 12) {
        cout << "Двенадцать ";
    } else if (d == 13) {
        cout << "Тринадцать ";
    } else if (d == 14) {
        cout << "Четырнадцать ";
    } else if (d == 15) {
        cout << "Пятнадцать ";
    } else if (d == 16) {
        cout << "Шестнадцать ";
    } else if (d == 17) {
        cout << "Семнадцать ";
    } else if (d == 18) {
        cout << "Восемнадцать ";
    } else if (d == 19) {
        cout << "Девятнадцать ";
    } else if (d == 20) {
        cout << "Двадцать ";
    } else if (d == 21) {
        cout << "Двадцать одно ";
    } else if (d == 22) {
        cout << "Двадцать два ";
    } else if (d == 23) {
        cout << "Двадцать три ";
    } else if (d == 24) {
        cout << "Двадцать четыре ";
    } else if (d == 25) {
        cout << "Двадцать пять ";
    } else if (d == 26) {
        cout << "Двадцать шесть ";
    } else if (d == 27) {
        cout << "Двадцать семь ";
    } else if (d == 28) {
        cout << "Двадцать восемь ";
    } else if (d == 29) {
        cout << "Двадцать девять ";
    } else if (d == 30) {
        cout << "Тридцать ";
    } else if (d == 31) {
        cout << "Тридцать одно ";
    } else if (d == 32) {
        cout << "Тридцать два ";
    } else if (d == 33) {
        cout << "Тридцать три ";
    } else if (d == 34) {
        cout << "Тридцать четыре ";
    } else if (d == 35) {
        cout << "Тридцать пятое ";
    } else if (d == 36) {
        cout << "Тридцать шесть ";
    } else if (d == 37) {
        cout << "Тридцать семь ";
    } else if (d == 38) {
        cout << "Тридцать восемь ";
    } else if (d == 39) {
        cout << "Тридцать девять ";
    } else if (d == 40) {
        cout << "Сорок ";
    }
    
    if (d <= 20) {
        cout << "учебных заданий";
    } else if (d == 21 || d == 31) {
        cout << "учебное задание";
    } else if (d == 22 || d == 23 || d == 24 || d == 32 || d == 33 || d == 34) {
        cout << "учебных задания";
    } else {
        cout << "учебных заданий";
    }
    
    return 0;
}
