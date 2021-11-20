#include <iostream>
#include <string>
using namespace std;

template <class Type>
Type findLargest(Type x[5],int size);
int main()
{
  int a1[5] = { 0, 2, 3, 4, 5 };
  double a2[5] = { .1, .2, .3, .4, .5 };
  cout << findLargest(a1, 5) << '\n';
  cout << findLargest(a2, 5) << '\n';
  return 0;
}

template <class Type>
Type findLargest(Type x[5], int size)
{
  Type test = x[5];
  for (int i = 0; i < size ; i++) {
    if (test < x[i])
      test = x[i];
  }
  return test;
}
