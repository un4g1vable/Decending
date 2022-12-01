#include <iostream> 
using namespace std;

bool decending(int a) {
    if (a < 10)
        return true;
    else
        return (a / 10) % 10 > a % 10 and decending(a / 10);
}

int main () {
    setlocale(LC_ALL, "Russian");
    int digit;
    cout << "\n" "Введите число:" << endl;
    cin >> digit;

    if (decending(digit))
        cout << "\n" "Убывает" << endl;
    else
       cout << "\n" "Неубывает" << endl; 

}

