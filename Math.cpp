#include "Math.hpp"
#include <iostream>

Math::Math(int x, int y)
{
  gx = x;
  gy = y;
}

int Math::add()
{
  return gx + gy;
}

int Math::subtract()
{
  return gx - gy;
}

int Math::multiply()
{
  return gx * gy;
}

int Math::divide()
{
  return gx / gy;
}

int main()
{
  int x = 10, y = 5;

  Math math = Math(x,y);
  int addtion = math.add();
  int subtraction = math.subtract();
  int multiplication = math.multiply();
  int division = math.divide();

  std::cout << x << " + " << y << " = " << addtion << '\n';
  std::cout << x << " - " << y << " = " << subtraction << '\n';
  std::cout << x << " * " << y << " = " << multiplication << '\n';
  std::cout << x << " / " << y << " = " << division << '\n';
}

