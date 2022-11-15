#include <bits/stdc++.h>

using namespace std;

void reverse(int a[], int low, int high)
{
  if (low < high)
  {
    int temp = a[low];
    a[low] = a[high];
    a[high] = temp;
    reverse(a, low + 1, high - 1);
  }

  else

  return;

}

int main()
{
  int a[] = {1, 2, 3, 4, 5};
  int n = 5;
  reverse(a, 0, n - 1);
  for (int i = 0; i < n; i++)
    {
      cout << a[i] << " ";
    }
  return 0;
}