#include <stdio.h>
#include <stdlib.h>

int main() {
    int arr[] = {2, 5, 6, 10, 12, 15, 18, 20}; // Sample input array
    int len = sizeof(arr) / sizeof(arr[0]); // Get the length of the array

    // Loop through the array to find the points (x,y) that have no values between them
    for (int i = 0; i < len - 1; i++) {
        int x = arr[i]; // Get the value of x
        int y = arr[i+1]; // Get the value of y

        int has_value_between = 0; // Flag to check if there is any value between x and y

        // Loop through the array to check if there is any value between x and y
        for (int j = i+1; j < len; j++) {
            if (arr[j] > x && arr[j] < y) { // If there is a value between x and y
                has_value_between = 1; // Set the flag to true
                break; // Exit the loop
            }
        }

        // If there is no value between x and y, print the values and the distance between them
        if (!has_value_between) {
            printf("(%d, %d) distance: %d\n", x, y, y-x);
        }
    }

    return 0; // Return 0 to indicate success
}
