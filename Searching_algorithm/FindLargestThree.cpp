#include <iostream>
using namespace std;

// Function to find the first three largest numbers in an array
void findFirstThreeLargest(int arr[], int n) {
    int largest1 = arr[0];
    int largest2 = arr[0];
    int largest3 = arr[0];

    for (int i = 1; i < n; i++) {
        if (arr[i] > largest1) {
            largest3 = largest2;
            largest2 = largest1;
            largest1 = arr[i];
        } else if (arr[i] > largest2) {
            largest3 = largest2;
            largest2 = arr[i];
        } else if (arr[i] > largest3) {
            largest3 = arr[i];
        }
    }

    cout << "The first three largest numbers are: " << largest1 << ", " << largest2 << ", " << largest3 << endl;
}

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    int arr[100]; // Assuming a maximum array size of 100
    cout << "Enter the array elements:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    findFirstThreeLargest(arr, n); // Call the function to find the first three largest numbers

    return 0;
}
