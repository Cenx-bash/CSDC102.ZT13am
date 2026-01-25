#include <iostream>
using namespace std;

int main() {
    int arr[] = {12, 45, 23, 67, 34, 89, 56, 33, 78, 90};
    int n = 10;
    
    int largest = arr[0], smallest = arr[0], sum = 0;
    
    // Find largest, smallest, and sum
    for (int i = 0; i < n; i++) {
        if (arr[i] > largest) largest = arr[i];
        if (arr[i] < smallest) smallest = arr[i];
        sum += arr[i];
    }
    
    double average = (double)sum / n;
    
    cout << "Largest: " << largest << endl;
    cout << "Smallest: " << smallest << endl;
    cout << "Sum: " << sum << endl;
    cout << "Average: " << average << endl;
    
    cout << "\nClassification:\n";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " is ";
        if (arr[i] > average) cout << "Above Average\n";
        else cout << "Below or Equal Average\n";
    }
    
    // Optional Challenge: Reverse array in-place and repeat
    cout << "\n--- After Reversal ---\n";
    for (int i = 0; i < n / 2; i++) {
        swap(arr[i], arr[n - i - 1]);
    }
    
    // Reset and recompute
    largest = smallest = arr[0];
    sum = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] > largest) largest = arr[i];
        if (arr[i] < smallest) smallest = arr[i];
        sum += arr[i];
    }
    average = (double)sum / n;
    
    cout << "Reversed Array: ";
    for (int i = 0; i < n; i++) cout << arr[i] << " ";
    cout << "\nLargest: " << largest << endl;
    cout << "Smallest: " << smallest << endl;
    cout << "Sum: " << sum << endl;
    cout << "Average: " << average << endl;
    
    return 0;
}
