
#include <stdio.h>

int main()
{
    int arr[] = {10, 25, 5, 40, 30};
    // int n = 5;

    int largest = arr[0];
    int second = -1;

    for (int i = 1; i < 5; i++)
    {
        if (arr[i] > largest)
        {
            second = largest;
            largest = arr[i];
        }
        else if (arr[i] > second && arr[i] < largest)
        {
            second = arr[i];
        }
    }

    printf("Second largest = %d", second);

    return 0;
}
