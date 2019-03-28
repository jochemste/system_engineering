#include "DOFxyRz.h"

std::ostream& operator<<(std::ostream& os, const DOFxyRz& rhs){
  os << rhs.cartvec_;
  os << " z: " << rhs.rz_;

  return os;
}

DOFxyRz operator+(const DOFxyRz& lhs, const CartVec2D& rhs){
  DOFxyRz result;

  result += lhs;
  result += rhs;

  return result;
}

DOFxyRz operator-(const DOFxyRz& lhs, const CartVec2D& rhs){
  DOFxyRz result;

  result -= lhs;
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
