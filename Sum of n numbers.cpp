#include <iostream>

int main()
{
  int n, sum;
  std::cout << "Enter the range of n:";
  std::cin >> n;
  sum=n*(n+1)/2;
  std::cout << "Sum of the range will be:"<<sum;
  return 0;
}
