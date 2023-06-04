#include <iostream>

int search(int arr[], int N, int x)
{
    for (int i = 0; i < N; i++)
        if (arr[i] == x)
            return i;
            
    return -1;
}

int main()
{
    int arr[] = { 2, 3, 4, 10, 40 };
    int x = 10;
    int N = sizeof(arr) / sizeof(arr[0]);

    int result = search(arr, N, x);
    (result == -1)
        ? std::cout << "Element is not present in array"
        : std::cout << "Element is present at index " << result;

    return 0;
}

/*

time complexity
1. worst case = 0(n)
2. best case (when key is found in the first iteration) = 0(1)

the average time complexity = 0(n), because on average, the key will be found after

---

auxiliary space = O(1) as except for the variable to iterate through the list, no other variable is used.

*/