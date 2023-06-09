#include <iostream>

void search(int arr[], int N, int x)
{
    int last = arr[N - 1];

    arr[N - 1] = x;
    int i = 0;
 
    while (arr[i] != x)
        i++;
 
    arr[N - 1] = last;
 
    if ((i < N - 1) || (arr[N - 1] == x))
        std::cout << x << " is present at index " << i;
    else
        std::cout << "Element Not found";
        
}

int main()
{
    int arr[] = { 2, 3, 4, 10, 40 };
    int x = 10;
    int N = sizeof(arr) / sizeof(arr[0]);

    search(arr, N, x);

    return 0;
}

/*

time complexity
1. worst case = 0(n)
2. best case (when key is found in the first iteration) = 0(1)

the average time complexity = 0(n), because on average, the key will be found after

*/