#include <iostream>
using namespace std;

int main() {
    int numbers[] = {10, 20, 30, 40, 50,10000000000000};
    int size = sizeof(numbers) / sizeof(numbers[0]);

    cout << "Array elements:" << endl;
    for (int i = 0; i < size; i++) {
        cout << numbers[i] << endl;
    }

    cout << "\nFirst element: " << numbers[0] << endl;
    cout << "Last element: " << numbers[size - 1] << endl;

    return 0;
}