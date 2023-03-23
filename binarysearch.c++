#include <iostream>
using namespace std;

int findTrivial(int arr[], int n, int key) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            return i;
        }
    }
    return -1; // key not found
}

int findBinary(int arr[], int n, int key) {
    int left = 0;
    int right = n - 1;
    while (left <= right) {
        int mid = (left + right) / 2;
        if (arr[mid] == key) {
            return mid;
        }
        else if (arr[mid] < key) {
            left = mid + 1;
        }
        else {
            right = mid - 1;
        }
    }
    return -1; // key not found
}

int main() {
    // test findTrivial
    int arr1[] = { 1, 2, 3, 4, 5 };
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    int key1 = 3;
    int result1 = findTrivial(arr1, n1, key1);
    cout << "findTrivial test 1: " << result1 << endl; // expected output: 2

    int arr2[] = { 10, 20, 30, 40, 50 };
    int n2 = sizeof(arr2) / sizeof(arr2[0]);
    int key2 = 60;
    int result2 = findTrivial(arr2, n2, key2);
    cout << "findTrivial test 2: " << result2 << endl; // expected output: -1

    // test findBinary
    int arr3[] = { 1, 2, 3, 4, 5 };
    int n3 = sizeof(arr3) / sizeof(arr3[0]);
    int key3 = 3;
    int result3 = findBinary(arr3, n3, key3);
    cout << "findBinary test 1: " << result3 << endl; // expected output: 2

    int arr4[] = { 10, 20, 30, 40, 50 };
    int n4 = sizeof(arr4) / sizeof(arr4[0]);
    int key4 = 60;
    int result4 = findBinary(arr4, n4, key4);
    cout << "findBinary test 2: " << result4 << endl; // expected output: -1

    return 0;
}