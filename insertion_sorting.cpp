//Jasnoor Kaur
//24070123049
//Batch: A2

#include <iostream>
using namespace std;

void insertionSort(int arr[], int size) {
    for (int i = 1; i < size; i++) {
        int current = arr[i];
        int j = i - 1;

        // Move elements greater than current one position ahead
        while (j >= 0 && arr[j] > current) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = current;
    }
}

int main() {
    int numbers[] = {54,90,11,66,34};
    int n = sizeof(numbers) / sizeof(numbers[0]);

    cout << "Original array: ";
    for (int i = 0; i < n; i++) {
        cout << numbers[i] << " ";
    }

    insertionSort(numbers, n);

    cout << "\nSorted array: ";
    for (int i = 0; i < n; i++) {
        cout << numbers[i] << " ";
    }

    cout << endl;
    return 0;
}

/*
Original array: 54 90 11 66 34 
Sorted array: 11 34 54 66 90 
*/
