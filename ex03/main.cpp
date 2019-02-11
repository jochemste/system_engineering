#include "RotationMotor.h"

#include <iostream>
#include <array>

int main(void)
{
  //assignment a..e
  std::array<int, 3> ar{2, -2, 3};

  for(auto& element: ar)
  {
    std::cout << element << " ";
    element *= 10;
  }

  std::cout << std::endl;

  ar[0] = 10 * ar.at(1);
  // ar[0] = 10 * ar[1];
  
  for(const auto element: ar)
    std::cout << element << " ";

  std::cout << std::endl;

  //assignment f
  std::array<int, 3> ar2;

  ar2 = ar;
  for(auto element: ar2)
    std::cout << element << " ";

  std::cout << std::endl;

  //assignment g
  std::array<RotationMotor, 4> rmArr;
  
  for(auto& element: rmArr)
  {
    element.start();
    element.setRPM(640);
  }

  for(const auto element: rmArr)
    std::cout << element.getRPM() << " ";

  std::cout << std::endl;
}

//A) -200, -20, 30
//B) 2, -2, 3. This is because it cannot change ar. It is not pointing to ar
//C) To prevent mistakenly changing values here
//D) element will get the arr values as a copy, instead of pointing to the
//   ar values
//E) ar[1] uses operator overloading, while ar.at(1) is a normal member
//   function. at() has out-of-range checking, by throwing an exception if
//   the position surpasses the size.
