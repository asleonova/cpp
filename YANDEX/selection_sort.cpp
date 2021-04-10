#include <iostream>

void selectionSort(int *arr, int size)
{
    int i, j, min;
    for (i = 0; i < size - 1; i++)
    {
        min = i;
        for (j = i + 1; j < size; j++)
        {
            if (arr[j] < arr[min])
                min = j;
        }
            int tmp = arr[min];
            arr[min] = arr[i];
            arr[i] = tmp;
    }
}

int main()
{
    int arr[5] = {2, 1, 5, 4, 3};
    selectionSort(arr, 5);
    for (int i = 0; i < 5; ++i)
        std::cout << arr[i] << std::endl;
    return 0;
}