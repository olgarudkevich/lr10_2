#include <iostream>
#include <cmath>    
#include <iomanip> 

using namespace std;


double calculateSum(double x);

int main() {
    setlocale(LC_ALL, "Ukrainian");

    double x_input;

    cout << "Формула: S = S(k=1..8) [ sin(x^k) / (4*k) ]" << endl << endl;

    // 1. Введення даних
    cout << "Будь ласка, введіть значення x: ";
    cin >> x_input;

    // 2. Виклик функції обчислення
    double result = calculateSum(x_input);

    // 3. Виведення результату
    cout << "\nОбчислення завершено." << endl;
    cout << "Результат S = " << fixed << setprecision(10) << result << endl;

    return 0;
}

double calculateSum(double x) {
    // Тіло функції
    double sum = 0.0;

    for (int k = 1; k <= 8; ++k) {

        double numerator = sin(pow(x, k));

        double denominator = 4.0 * k;

        sum += (numerator / denominator);
    }

    return sum;
}