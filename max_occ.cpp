// WAP for maximum occurance element in an integer //

#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 2, 2, 3, 1, 2};
    int n = 6;

    int maxCount = 0;
    int maxElement = arr[0];

    for (int i = 0; i < n; i++) {
        int count = 0;

        for (int j = 0; j < n; j++) {
            if (arr[i] == arr[j]) {
                count++;
            }
        }

        if (count > maxCount) {
            maxCount = count;
            maxElement = arr[i];
        }
    }

    cout << "Maximum occurring element: " << maxElement;

    return 0;
}
