#include <iostream>
#include <Windows.h>
using namespace std;


double r1 = 0;
double r2 = 0;

// Функція для знаходження n-го члена арифметичної прогресії
int nthTerm(int firstTerm, int difference, int n) {
    if (n == 1) {
        return firstTerm;
    }
    else {
        r1++;
        return nthTerm(firstTerm, difference, n - 1) + difference;
    }
}

// Функція для знаходження суми членів арифметичної прогресії
int sumOfTerms(int firstTerm, int difference, int n) {
    if (n == 1) {
        return firstTerm;
    }
    else {
        r2++;
        return nthTerm(firstTerm, difference, n) + sumOfTerms(firstTerm, difference, n - 1);
    }
}

int main() {
    // Встановлюємо локаль для кирилиці
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int firstTerm, difference, n;
    cout << "Введіть перший член арифметичної прогресії:  ";
    cin >> firstTerm;
    cout << "Введіть різницю арифметичної прогресії: ";
    cin >> difference;
    cout << "Введіть номер n-го члена, який ви хочете знайти: ";
    cin >> n;

    cout << "n-й член арифметичної прогресії: " << nthTerm(firstTerm, difference, n) << endl;
    cout << "Глибина рекурсії: " << r1 << endl;
    cout << "Сума членів арифметичної прогресії: " << sumOfTerms(firstTerm, difference, n) << endl;
    cout << "Глибина рекурсії: " << r2 << endl;
    

    return 0;
}