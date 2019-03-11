#include "RotationMotor.h"

#include <iostream>
#include <string>

int main(void)
{
  RotationMotor rm;
  bool exitRequested = false;
  std::string command;

  while(!exitRequested)
  {
    std::cout << "\nCommand: ";
    std::cin >> command;

    if(command == "start")
    {
      if(rm.start())
	std::cout << "Started" << std::endl;
      else
	std::cerr << "FAILED: Motor already started";
    }
    else if(command == "shutdown")
    {
      if(rm.shutdown())
	std::cout << "Shutdown successful" << std::endl;
      else
	std::cerr << "FAILED: Motor already shutdown";
    }
    else if(command == "restart")
    {
      if(rm.restart())
	std::cout << "Restarted. Rpm: " << rm.getRPM() << std::endl;
      else
	std::cerr << "FAILED: Motor not started.";
    }
    else if(command == "inc")
    {
      if(rm.incRPM())
	std::cout << "RPM increased to " << rm.getRPM() << std::endl;
      else
	std::cerr << "FAILED: Motor not started.";
    }
    else if(command == "dec")
    {
      if(rm.decRPM())
	std::cout << "RPM decreased to " << rm.getRPM() << std::endl;
      else
	std::cerr << "FAILED: Motor not started.";
    }
    else if(command == "get")
    {
      if(rm.getRPM() != -1)
	std::cout << "RPM: " << rm.getRPM() << std::endl;
      else
	std::cerr << "FAILED: Motor not started.";
    }
    else if(command == "exit")
    {
      exitRequested = true;
    }
    else
    {
      std::cerr << "ERROR: Command unknown: " << command;
    }
  }
  
  return 0;
}
