#include <iostream>
#include <unordered_map> // unordered_map library.
using namespace std;

bool isSumOfTwo(int *arr, int len, int x)
{
    unordered_map<int, int> umap; // Creating a unordered map container with key(type int) and value(type int)
    for (int i = 0; i < len; i++)
    {
        if (umap[x - arr[i]] == 1) // the expression 'x-b' which is equal to 'a' so both will have same value.
        {
            return true; // return true if there is alread a key with same value.
        }
        umap[arr[i]] = 1; // otherwise, set a = 1 or unmap[b] = 1 where b is nothing but the 'x-a'.
    }
    return false; // not found, then exit with false or 0.
}

int main()
{
    int arr[] = {0, -1, 2, -3, 1}; // the given array.
    int x = -2;                    // and value which is the sum of two elements present in array.
    int len = sizeof(arr) / sizeof(int);
    bool ans = isSumOfTwo(arr, len, x);

    ans ? cout << "Yes" : cout << "No."; // if a and b are present in array then print 'yes', otherwise 'no'

    return 0;
}