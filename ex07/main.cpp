#include "DOFxyRz.h"

#include <iostream>

int main(void){
  DOFxyRz roomba(1.2, 2.3);
  CartVec2D roo2(2.0, 2.0);

  std::cout << "roomba: " << roomba << std::endl;
  std::cout << "roo2: " << roo2 << std::endl;

  roomba *= 2.0;
  
  std::cout << "roomba: " << roomba << std::endl;
  std::cout << "roo2: " << roo2 << std::endl;

  roomba += roo2;
  
  std::cout << "roomba: " << roomba << std::endl;
  std::cout << "roo2: " << roo2 << std::endl;

  roomba = roomba + 4.0;
  
  std::cout << "roomba: " << roomba << std::endl;
  std::cout << "roo2: " << roo2 << std::endl;

  roomba = roomba - 8.0;
  
  std::cout << "roomba: " << roomba << std::endl;
  std::cout << "roo2: " << roo2 << std::endl;

  return 0;
}
