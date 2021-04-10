#include <iostream>

void insertion_sort(int *arr, int n)
{
    int i, sorted, j; 
    for (i = 1; i < n; i++)
    {
        sorted = arr[i];  // sorted = 1
        j = i -1; // j = 0
        for (; j >=0 && arr[j] > sorted; j--) // 5 > 1
        {
            arr[j+1] = arr[j]; // arr[1] = arr[0] 
        }
        arr[j + 1] = sorted; // arr[1] = 1;
    }
}

int main()
{
    int arr[5] = {5, 1, 4, 3, 2};
    insertion_sort(arr, 5);
    for (int i = 0; i < 5; ++i)
        std::cout << arr[i] << std::endl;
    
}