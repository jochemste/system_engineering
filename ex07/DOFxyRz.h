#include "CartVec2D.h"

#include <iostream>
#include <cmath>

class DOFxyRz{
  friend std::ostream& operator<<(std::ostream& os, const DOFxyRz& rhs);
  friend DOFxyRz operator+(const DOFxyRz& lhs, const CartVec2D& rhs);
  friend DOFxyRz operator+(const DOFxyRz& lhs, const double& rhs);
  friend DOFxyRz operator-(const DOFxyRz& lhs, const double& rhs);  
  friend DOFxyRz operator-(const DOFxyRz& lhs, const CartVec2D& rhs);
  friend DOFxyRz operator-(const DOFxyRz& rhs);
  friend DOFxyRz operator*(const DOFxyRz& lhs, const double& rhs);
  friend DOFxyRz operator*(const double& lhs, const DOFxyRz& rhs);
  friend DOFxyRz operator/(const DOFxyRz& lhs, const double& rhs);
  friend DOFxyRz operator/(const double& lhs, const DOFxyRz& rhs);
  
 public:
  DOFxyRz(double x, double y): cartvec_(x, y), rz_(0) {};
  DOFxyRz(): DOFxyRz(0.0, 0.0) {};
  DOFxyRz(const DOFxyRz& other) = default;
  DOFxyRz& operator=(const DOFxyRz& other) = default;
  ~DOFxyRz() = default;

  DOFxyRz &operator+=(const CartVec2D& rhs);
  DOFxyRz &operator-=(const CartVec2D& rhs);
  DOFxyRz &operator*=(const double& rhs);
  DOFxyRz &operator/=(const double& rhs);

  CartVec2D heading() const;
  void setZ(double z);
  double getZ() const;
  
 private:
  CartVec2D cartvec_;
  double rz_;
};

inline CartVec2D heading() const{
  CartVec2D heading;
}

inline void DOFxyRz::setZ(double z){
  rz_ = z;
}

inline double DOFxyRz::getZ() const{
  return rz_;
}
