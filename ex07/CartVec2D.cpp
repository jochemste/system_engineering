#include "CartVec2D.h"

std::ostream& operator<<(std::ostream& os, const CartVec2D& rhs){
  os << "x: " << rhs.x_;
  os << " y: " << rhs.y_;

  return os;
}

CartVec2D operator+(const CartVec2D& lhs, const CartVec2D& rhs){
  CartVec2D result;

  result += lhs;
  result += rhs;
  
  return result;
}

CartVec2D operator-(const CartVec2D& lhs, const CartVec2D& rhs){
  CartVec2D result;

  result -= lhs;
  result -= rhs;

  return result;
}

CartVec2D operator-(const CartVec2D& rhs){
  CartVec2D result;
  
  result.x_ = -rhs.x_;
  result.y_ = -rhs.y_;

  return result;
}

CartVec2D operator*(const CartVec2D& lhs, const double& rhs){
  CartVec2D result(lhs);

  result *= rhs;

  return result;
}

CartVec2D operator*(const double& lhs, const CartVec2D& rhs){
  CartVec2D result(rhs);
  
  result *= lhs;

  return result;
}

CartVec2D operator/(const CartVec2D& lhs, const double& rhs){
  CartVec2D result(lhs);

  result /= rhs;

  return result;
}

CartVec2D operator/(const double& lhs, const CartVec2D& rhs){
  CartVec2D result(rhs);
  
  result /= lhs;

  return result;
}


CartVec2D &CartVec2D::operator+=(const CartVec2D& rhs){
  x_ += rhs.x_;
  y_ += rhs.y_;

  return* this;
}

CartVec2D &CartVec2D::operator-=(const CartVec2D& rhs){
  x_ -= rhs.x_;
  y_ -= rhs.y_;

  return* this;
}

CartVec2D &CartVec2D::operator*=(const double& rhs){
  x_ *= rhs;
  y_ *= rhs;

  return* this;
}

CartVec2D &CartVec2D::operator/=(const double& rhs){
  x_ /= rhs;
  y_ /= rhs;

  return* this;
}
