#include <iostream>
using namespace std;

int main() {
    int y;
    
    int color;
    int animal;
    
    cin >> y;
    y = y - 1983;
    
    color = ((y - 1) % 60 + 1) / 12 + 1;
    if (color == 6) {
        color = 5;
    }
    animal = (y - 1) % 12 + 1;
    
    cout << "Год ";
    
    if (animal == 1 || animal == 2 || animal == 6 || animal == 7 || animal == 8
        || animal == 9 || animal == 10 || animal == 11 || animal == 12) {
        if (color == 1) {
            cout << "зеленой ";
        } else if (color == 2) {
            cout << "красной ";
        } else if (color == 3) {
            cout << "желтой ";
        } else if (color == 4) {
            cout << "белой ";
        } else if (color == 5) {
            cout << "черной ";
        }
    } else {
        if (color == 1) {
            cout << "зеленого ";
        } else if (color == 2) {
            cout << "красного ";
        } else if (color == 3) {
            cout << "желтого ";
        } else if (color == 4) {
            cout << "белого ";
        } else if (color == 5) {
            cout << "черного ";
        }
    }
    
    if (animal == 1) {
        cout << "крысы";
    } else if (animal == 2) {
        cout << "коровы";
    } else if (animal == 3) {
        cout << "тигра";
    } else if (animal == 4) {
        cout << "зайца";
    } else if (animal == 5) {
        cout << "дракона";
    } else if (animal == 6) {
        cout << "змеи";
    } else if (animal == 7) {
        cout << "лошади";
    } else if (animal == 8) {
        cout << "овцы";
    } else if (animal == 9) {
        cout << "обезьяны";
    } else if (animal == 10) {
        cout << "курицы";
    } else if (animal == 11) {
        cout << "собаки";
    } else if (animal == 12) {
        cout << "свиньи";
    }

    return 0;
}
