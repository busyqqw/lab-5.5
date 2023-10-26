#include <iostream>
#include <Windows.h>
using namespace std;


double r1 = 0;
double r2 = 0;

// ������� ��� ����������� n-�� ����� ����������� �������
int nthTerm(int firstTerm, int difference, int n) {
    if (n == 1) {
        return firstTerm;
    }
    else {
        r1++;
        return nthTerm(firstTerm, difference, n - 1) + difference;
    }
}

// ������� ��� ����������� ���� ����� ����������� �������
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
    // ������������ ������ ��� ��������
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int firstTerm, difference, n;
    cout << "������ ������ ���� ����������� �������:  ";
    cin >> firstTerm;
    cout << "������ ������ ����������� �������: ";
    cin >> difference;
    cout << "������ ����� n-�� �����, ���� �� ������ ������: ";
    cin >> n;

    cout << "n-� ���� ����������� �������: " << nthTerm(firstTerm, difference, n) << endl;
    cout << "������� ������: " << r1 << endl;
    cout << "���� ����� ����������� �������: " << sumOfTerms(firstTerm, difference, n) << endl;
    cout << "������� ������: " << r2 << endl;
    

    return 0;
}