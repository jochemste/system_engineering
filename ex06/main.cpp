#include "CartVec2D.h"

#include <iostream>

int main(void){

  CartVec2D cv1;
  CartVec2D cv2(21.3, 34.7);
  CartVec2D cv3;

  std::cout << "cv1: " << cv1 << std::endl;
  std::cout << "cv2: " << cv2 << std::endl;

  cv1 += cv2;
  cv2 = cv1 * 2.0;

  std::cout << "cv1: " << cv1 << std::endl;
  std::cout << "cv2: " << cv2 << std::endl;

  cv1 = -cv2;

  std::cout << "cv1: " << cv1 << std::endl;
  std::cout << "cv2: " << cv2 << std::endl;

  cv2 = -cv1 + cv2;
  
  std::cout << "cv1: " << cv1 << std::endl;
  std::cout << "cv2: " << cv2 << std::endl;

  cv3 = cv2 / 2.5;
  
  std::cout << "cv1: " << cv1 << std::endl;
  std::cout << "cv2: " << cv2 << std::endl;  
  std::cout << "cv3: " << cv3 << std::endl;

  return 0;
}
