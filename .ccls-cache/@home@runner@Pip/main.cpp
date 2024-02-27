#include <iostream>
#include <array>
int main() {
    int N;
    std::cout << "Введіть кількість елементів масиву: ";
    std::cin >> N;
    if (N <= 0) {
        std::cout << "Кількість елементів масиву має бути більшою за 0." << std::endl;
        return 1;
    }
    std::array<int, 100> A; 
    std::cout << "Введіть елементи масиву:\n";
    for (int i = 0; i < N; i++) {
        std::cin >> A[i];
        if (A[i] <= 0) {
            std::cout << "Елементи масиву повинні бути натуральними." << std::endl;
            return 1; 
        }
    }
    int k;
    std::cout << "Введіть число k: ";
    std::cin >> k;
    if (k <= 0) {
        std::cout << "Число k має бути більше за 0." << std::endl;
        return 1; 
    }
    int sum = 0;
    for (int i = 0; i < N; i++) {
        if (A[i] % k == 0) {
            sum += A[i];
        }
    }
    std::cout << "Сума елементів, кратних " << k << ": " << sum << std::endl;
 