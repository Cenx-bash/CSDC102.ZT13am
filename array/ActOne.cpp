#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int arr[10] = {4, 7, 1, 9, 3, 6, 2, 8, 5, 10};
    
    // Print array
    cout << "Array: [";
    for (int i = 0; i < 10; i++) {
        cout << arr[i] << (i < 9 ? ", " : "");
    }
    cout << "]\n";
    
    // Sum and average
    int sum = 0;
    for (int i = 0; i < 10; i++) sum += arr[i];
    cout << "Sum: " << sum << "\n";
    cout << "Average: " << (float)sum / 10 << "\n";
    
    // Second largest and smallest
    int sorted[10];
    copy(arr, arr + 10, sorted);
    sort(sorted, sorted + 10);
    cout << "Second largest: " << sorted[8] << "\n";
    cout << "Second smallest: " << sorted[1] << "\n";
    
    // Rotation (right by 2)
    int k = 2;
    int rotated[10];
    for (int i = 0; i < 10; i++) {
        rotated[(i + k) % 10] = arr[i];
    }
    cout << "Rotated array (right by " << k << "): [";
    for (int i = 0; i < 10; i++) {
        cout << rotated[i] << (i < 9 ? ", " : "");
    }
    cout << "]\n";
    
    return 0;
}
