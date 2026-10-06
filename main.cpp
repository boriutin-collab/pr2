#include <iostream>
#include <cmath>
#include <iomanip>
#include <windows.h>
using namespace std;

int main() {
    SetConsoleOutputCP(CP_UTF8);
    // Integer2: повні тонни та залишок кілограмів.
    int M;
    cout << "Завдання 1. Integer2\nM (кг) = ";
    cin >> M;
    int tons = M / 1000;
    int kilograms = M % 1000;
    cout << "Повних тонн: " << tons << '\n';
    cout << "Залишок кілограмів: " << kilograms << '\n';

    // Boolean6: перевірка двох нерівностей.
    int A, B, C;
    cout << "\nЗавдання 2. Boolean6\nA, B, C = ";
    cin >> A >> B >> C;
    bool result = (A < B) && (B < C);
    cout << "A < B < C: " << boolalpha << result << '\n';

    // Math12: обчислення математичного виразу.
    const double pi = 3.141592653589793;
    double x;
    cout << "\nЗавдання 3. Math12\nx = ";
    cin >> x;
    double angle = fmod(fabs(2 * x * x + 5 * x - 31.15), pi);
    double numerator = tan(angle) + log(fabs(x - 2.5)) / log(5.0);
    double sinValue = sin(x * x * x);
    double denominator = cbrt(fabs(sinValue * sinValue
        + (1.0 / 3.0) * log(fabs(x * x - 2.5)) / log(5.0)));
    double y = numerator / denominator;
    cout << fixed << setprecision(6) << "y = " << y << '\n';
    return 0;
}
