//A train is moving from Sealdah to Barasat. One of the passengers wants to go to Madhyamgram station. After a certain time, the train stop at a station. Write a c program to check whether that passenger has reached Madhyamgram or not.
#include <stdio.h>

int main() {
    int arr[11] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11};  // Stations represented by numbers
    int element = 9;  // Madhyamgram station is represented by the number 9
    int start = 0;
    int stop = (sizeof(arr) / sizeof(int)) - 1;  // Adjusting to the last index of the array
    int found = 0;  // Flag to check if the element is found
    
    // Implementing binary search
    while (start <= stop) {
        int mid = start + (stop - start) / 2;
        
        if (arr[mid] == element) {
            printf("He has reached Madhyamgram.\n");
            found = 1;
            break;
        } else if (arr[mid] > element) {
            stop = mid - 1;
        } else {
            start = mid + 1;
        }
    }
    
    if (!found) {
        printf("He boarded the wrong train!\n");
    }

    return 0;
}
