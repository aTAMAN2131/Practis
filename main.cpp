#include <iostream>
#include <array>

using namespace std;

double AxisLength(const array<double, 100>& array, int n) {
    double min = array[0];
    double max = array[0];

    for (int i = 1; i < n; i++) {
        if (array[i] < min) {
            min = array[i];
        }
        if (array[i] > max) {
            max = array[i];
        }
    }

    double axLen = max - min;

    return axLen;
}

int main() {
    int n;

    cout << "Введіть кількість елементів у послідовності: ";
    if (!(cin >> n) || n <= 0) {
        cout << "Введіть правильне значення\n";
        return 1;
    }

    array<double, 100> array;

    cout << "Введіть елементи послідовності:\n";
    for (int i = 0; i < n; i++) {
        if (!(cin >> array[i])) {
            cout << "Введіть правильне значення\n";

            while (cin.get() != '\n');

            return 1;
        }
    }

    double length = AxisLength(array, n);

    cout << "Найменша довжина числової осі: " << length << "\n";

    return 0;
}