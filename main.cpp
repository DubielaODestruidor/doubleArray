#include <iostream>

int main() {

    std::cout << "Enter the number of elements in the array:";
    int n;
    std::cin >> n;

    double arr[n];
    std::cout << "Enter the elements of the array: " << std::endl;
    for (int i = 0; i < n; i++)
        std::cin >> arr[i];

    double sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }
    std::cout << "Sum of elements of the array: " << std::endl;
    std::cout << sum << std::endl;

    return 0;
}
