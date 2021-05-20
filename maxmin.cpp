#include <iostream>
using namespace std;

void max(int a[], int n)
{
    int max1 = a[0];
    for (int j = 0; j < n; j++)
    {
        if (a[j] > max1)
            max1 = a[j];
    }
    cout << "The maximum element in the array is : " << max1 << endl;
}

void min(int a[], int n)
{
    int min1 = a[0];
    for (int j = 0; j < n; j++)
    {
        if (a[j] < min1)
            min1 = a[j];
    }
    cout << "The minimum element in the array is : " << min1 << endl;
}

int main()
{
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    int a[n];
    cout << "Enter the array elements: " << endl;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    min(a, n);
    max(a, n);
}