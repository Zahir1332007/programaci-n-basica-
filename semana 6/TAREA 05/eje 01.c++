#include <iostream>
using namespace std;

int main() {
    const int n = 5;
    int arr[n] = {1, 2, 3, 4, 5};
    int k = 2; 
    k = k % n;
    int rotated[n];
    for (int i = 0; i < n; ++i) {
        rotated[(i + k) % n] = arr[i];
    }
    for (int i = 0; i < n; ++i) {
        arr[i] = rotated[i];
    }
    cout << "Array rotado: ";
    for (int i = 0; i < n; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}
