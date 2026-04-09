#include <iostream>
#include <cmath>

using namespace std;

double calculatePerimeter(double a, double b) {
    return 2 * (a + b);
}

double calculateArea(double a, double b) {
    return a * b;
}

double calculateDiagonal(double a, double b) {
    return sqrt(a * a + b * b);
}

int main() {
    setlocale(LC_ALL, "Russian");

    double a, b;

    cout << "Введите длину и ширину прямоугольника через пробел: ";
    cin >> a >> b;

    // Проверка на корректность ввода (стороны должны быть больше нуля)
    if (a <= 0 || b <= 0) {
        cout << "Ошибка: стороны прямоугольника должны быть положительными числами." << endl;
        return 1;
    }

    cout << "---------------------------------" << endl;
    cout << "Периметр: " << calculatePerimeter(a, b) << endl;
    cout << "Площадь: " << calculateArea(a, b) << endl;
    cout << "Длина диагонали: " << calculateDiagonal(a, b) << endl;

    return 0;
}
