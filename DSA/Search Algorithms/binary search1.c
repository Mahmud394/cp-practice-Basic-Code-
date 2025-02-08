#include <stdio.h>

int main()
{
    int array[21] = {8, 10, 11, 12, 13, 14, 15, 16, 17, 19, 21, 22, 24, 25, 26, 27, 29, 30, 32, 34, 35};
    int s = 0, e = 20, key = 8;
    while (s <= e)
    {
        int mid = (s + e) / 2;
        if (array[mid] == key)
        {
            printf("%d is found at index %d\n", key, mid);
            break;
        }
        else if (array[mid] > key)
        {
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
    }
    if (s > e)
        printf("Not found! %d is not present in the list.\n", key);

    return 0;
}
