#include "DOFxyRz.h"

std::ostream& operator<<(std::ostream& os, const DOFxyRz& rhs){
  os << rhs.cartvec_;
  os << " z: " << rhs.rz_;

  return os;
}

DOFxyRz operator+(const DOFxyRz& lhs, const CartVec2D& rhs){
  DOFxyRz result;

  result += lhs.cartvec_;
  result += rhs;

  return result;
}

DOFxyRz operator+(const DOFxyRz& lhs, const double& rhs){
  DOFxyRz result(lhs);
  double tempZ = result.getZ() + rhs;
  
  while(tempZ > M_PI){
    tempZ = tempZ - 0.00000001;
  }

  result.setZ(tempZ);

  return result;
}

DOFxyRz operator-(const DOFxyRz& lhs, const double& rhs){
  DOFxyRz result(lhs);
  double tempZ = result.getZ() - rhs;
  
  while(tempZ < -M_PI){
    tempZ = tempZ + 0.00000001;
  }

  result.setZ(tempZ);

  return result;
}

DOFxyRz operator-(const DOFxyRz& lhs, const CartVec2D& rhs){
  DOFxyRz result;

  result -= lhs.cartvec_;
  result -= rhs;

  return result;
}

DOFxyRz &DOFxyRz::operator+=(const CartVec2D& rhs){
  cartvec_ += rhs;

  return *this;
}

DOFxyRz &DOFxyRz::operator-=(const CartVec2D& rhs){
  cartvec_ -= rhs;

  return *this;
}

DOFxyRz &DOFxyRz::operator*=(const double& rhs){
  cartvec_ *= rhs;

  return *this;
}

DOFxyRz &DOFxyRz::operator/=(const double& rhs){
  cartvec_ /= rhs;

  return *this;
}
