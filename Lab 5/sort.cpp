#include "sort.h"
#include <iostream>
#include <vector>

using namespace std;

void InsertionSort(vector<int> arr, int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        int val = 0;
        for (int j = 0; j <= i; j++)
        {
            if (arr[i + 1] < arr[j])
            {
                val = 1;
            }
            if (val == 1)
            {
                arr[j] = arr[j] ^ arr[i + 1];
                arr[i + 1] = arr[j] ^ arr[i + 1];
                arr[j] = arr[j] ^ arr[i + 1];
            }
        }
    }
    return;
};

void Quicksort(vector<int> arr, int size){

};