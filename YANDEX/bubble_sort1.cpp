#include <iostream>

void bubble_sort(int *arr, int size)
{
    bool swapped = false;

    for (int i = 0; i < size - 1; ++i)
    {
        for (int j = 0; j < size - i - 1; ++j)
        {
            if (arr[j] > arr[j + 1])
            {
                int tmp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = tmp;
                swapped = true;
            }

        }

       if(swapped == false)
            break;
    }
}

void printArray(int A[], int size)
{
    for (int i = 0; i < size; i++)
        std::cout << A[i] << " ";
}

int main()
{
    using namespace std;
	srand(time(NULL));

    
	int n = 4;
    int arr[n];
	for (size_t i = 0; i < n ; i++)
	{
		arr[i] = rand() % 100;
	}
	
    int arr_size = sizeof(arr) / sizeof(arr[0]);
 
    // cout << cyan << "Given array is \n" << reset;
    printArray(arr, arr_size);
	
	std::cout << "\n\n";
    bubble_sort(arr, arr_size);
 
    cout <<  "\nSorted array is \n";
    printArray(arr, arr_size);
    return 0;
}

