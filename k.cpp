#include <bits/stdc++.h>
using namespace std;

int main()
{
      int n;
      cout << "Enter the size of array: ";
      cin >> n;
      int a[n];
      cout << "Enter the elements: " << endl;
      for (int i = 0; i < n; i++)
            cin >> a[i];
      cout << "Enter the value of k: ";
      int k;
      cin >> k;
      sort(a, a + n);
      cout << "The Kth smallest element is " << a[k - 1] << endl;
      cout << "The Kth largest element is " << a[n - k] << endl;
      return 0;
}
