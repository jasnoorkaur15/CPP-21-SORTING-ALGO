//Jasnoor Kaur
//24070123049
//Batch:A2

#include <iostream>
using namespace std;

// Function to swap two integers
void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Function to sort an array using a simple comparison method
void s_sort(int* a, int elements) {
    int n = 0;
    int* b;

    while (n != elements) {
        b = a + 1;
        for (int i = 0; i < (elements - 1) - n; i++) {
            if (*a > *b) {
                swap(a, b);
            }
            b++;
        }
        n++;
        a++;
    }
}

int main() {
    int no_el;
    cout << "How many elements in your array?" << endl;
    cin >> no_el;

    int arr[no_el];
    cout << "Enter " << no_el << " elements:" << endl;
    for (int i = 0; i < no_el; i++) {
        cin >> arr[i];
    }

    s_sort(&arr[0], no_el);

    cout << "Sorted Array: ";
    for (int i = 0; i < no_el; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}

/*
How many elements in your array?
5
Enter 5 elements:
34 12 7 45 23
Sorted Array: 7 12 23 34 45
*/
