// WAP for search an element //

#include <iostream>
using namespace std;

int main() {
    int arr[] = {4, 7, 1, 9, 3};
    int n = 5;
    int key = 9;

    int index = -1;  // default if not found

    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            index = i;
            break;   // stop once found
        }
    }

    if (index != -1)
        cout << "Element found at index: " << index;
    else
        cout << "Element not found";

    return 0;
}

