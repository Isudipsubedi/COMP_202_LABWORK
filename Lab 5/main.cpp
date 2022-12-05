#include <iostream>
using namespace std;
#include <vector>
#include <chrono>

void Insertionsort(vector<int> &a)
{
    int key;
    int i;
    int j;
    int n = a.size();
    for (i = 1; i < n; i++)
    {
        key = a[i];
        j = i - 1;

        while (j >= 0 && a[j] > key)
        {
            a[j + 1] = a[j];
            j = j - 1;
        }
        a[j + 1] = key;
    }
}
int main()
{
    vector<int> a;
    srand(time(0));
    auto start = chrono::system_clock::now();
    for (int i = 0; i < 1000; i++)
    {
        int rndm = rand() % 100 + 1;
        a.push_back(rndm);
    }
    Insertionsort(a);
    auto end = chrono::system_clock::now();
    std::chrono::duration<double> elapsed_seconds = end - start;
    std::cout << "Time taken " << elapsed_seconds.count() << " sec" << endl;
    for (int i = 0; i < a.size(); i++)
    {
        cout << a[i] << " ";
    }
}