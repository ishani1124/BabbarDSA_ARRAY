#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cout << "Enter the size of array: ";
  cin >> n;
  int a[n];
  cout << "Enter array elements " << endl;
  for (int i = 0; i < n; i++)
    cin >> a[i];
  int pivot = 0;
  int point = -1; //For Index incrementation starting with 0
  for (int j = 0; j < n; j++)
  {
    if (a[j] < pivot)
    {
      point++;
      swap(a[j], a[point]);
    }
  }
  cout << "After Sorting the array: " << endl;
  for (int i = 0; i < n; i++)
    cout << a[i] << " ";
}