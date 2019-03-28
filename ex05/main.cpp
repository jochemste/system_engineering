#include "RotationMotor.h"
#include "CommandProcessor.h"

#include <functional>
#include <iostream>
#include <string>

int main(void)
{
  RotationMotor rotMot;
  CommandProcessor cmdp;
  std::string command;
  auto i=0;

  cmdp.addCommand("start", [&i, &rotMot](){ i=rotMot.start(); });
  cmdp.addCommand("restart", [&i, &rotMot](){ i=rotMot.restart(); });
  cmdp.addCommand("shutdown", [&i, &rotMot](){ i=rotMot.shutdown(); });
  cmdp.addCommand("incRPM", [&i, &rotMot](){ i=rotMot.incRPM(); });
  cmdp.addCommand("decRPM", [&i, &rotMot](){ i=rotMot.decRPM(); });

  cmdp.addCommand("getRPM", [&i, &rotMot](){ i=rotMot.getRPM(); } );
  
  while(command != "q"){
    std::cout << "Enter command: ";
    std::cin >> command;

    if(command != "q")
      cmdp.executeCommand(command);

    std::cout << command << ": " << i << std::endl;
  }
  
  return 0;
}
