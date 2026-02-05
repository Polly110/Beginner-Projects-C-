#include <iostream>
int main()
{
  float radius, area;
  std::cout << "Please enter the radius:";
  std::cin >> radius;
  area=3.14*radius*radius;
  std::cout <<"The area will be:"<<area;
  return 0;
}
