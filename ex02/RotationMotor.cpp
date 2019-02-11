#include "RotationMotor.h"

RotationMotor::RotationMotor()
{
  started = false;
  rpm = 0;
}
RotationMotor::~RotationMotor()
{
  
}

bool RotationMotor::start()
{
  if(!started)
    started = true;

  return started;
}

bool RotationMotor::restart()
{
  if(started)
  {
    rpm = 0;
  }
  
  return started;
}

bool RotationMotor::shutdown()
{
  if(started)
  {
    started = false;
    rpm = 0;
    return !started;
  }
  else
    return started;
}

int RotationMotor::incRPM()
{
  if(started)
  {
    rpm += STEP_RPM;
    if(rpm >= MAX_RPM)
      rpm = MAX_RPM;
  }
  
  return rpm;
}

int RotationMotor::decRPM()
{
  if(started)
  {
    rpm -= STEP_RPM;
    if(rpm <= MIN_RPM)
      rpm = MIN_RPM;
  }

  return rpm;
}

int RotationMotor::getRPM() const
{
  if(started)
    return rpm;
  else
    return -1;
}
