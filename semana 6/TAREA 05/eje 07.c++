#include<iostream>
using namespace std;
int main() {
    int arr[] = {0, 1, 0, 3, 12};
    int n = sizeof(arr) / sizeof(arr[0]); 
    int contador = 0; 
    for (int i = 0; i < n; i++) {
        if (arr[i] != 0) {
            arr[contador++] = arr[i];
        }
    }
    while (contador < n) {
        arr[contador++] = 0;
    }
    cout << "Array después de mover ceros al final: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}
