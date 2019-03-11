#ifndef ROTATIONMOTOR_H
#define ROTATIONMOTOR_H

#include <iostream>
#include <map>

class RotationMotor{

 public:

  RotationMotor();
  ~RotationMotor();

  bool start();
  bool restart();

  bool shutdown();

  int incRPM();
  int decRPM();
  int getRPM() const;
  
 private:

  bool started;
  int rpm;

  static const int MAX_RPM = 4500;
  static const int MIN_RPM = 0;
  static const int STEP_RPM = 500;
  
};

#endif
