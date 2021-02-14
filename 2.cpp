#include <iostream>
using namespace std;

int main() {
    char c;
    int n;
    
    cin >> c >> n;

    if (n == 0) {
        cout << c;
        return 0;
    }
    
    if (n == 1) {
        if (c == 'С') {
            cout << 'З';
        } else if (c == 'З') {
            cout << 'Ю';
        } else if (c == 'Ю') {
            cout << 'В';
        } else if (c == 'В') {
            cout << 'С';
        }
    } else if (n == -1) {
        if (c == 'С') {
            cout << 'В';
        } else if (c == 'В') {
            cout << 'Ю';
        } else if (c == 'Ю') {
            cout << 'З';
        } else if (c == 'З') {
            cout << 'С';
        }
    }
    
    return 0;
}
