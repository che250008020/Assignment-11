#include <iostream>
using namespace std;

int main() {
    int *sales = new int[100];
    // (Assume code here to store first 100 sales data)
    int *temp = new int[200];
    for (int i = 0; i < 100; i++) {
        temp[i] = sales[i];
    }
    delete[] sales;
    sales = temp;
    cout << "Array resized from 100 to 200 elements successfully.";
    return 0;
}
