#include <iostream>

class CartVec2D{
  friend std::ostream& operator<<(std::ostream& os, const CartVec2D& rhs);
  friend CartVec2D operator+(const CartVec2D& lhs, const CartVec2D& rhs);
  friend CartVec2D operator-(const CartVec2D& lhs, const CartVec2D& rhs);
  friend CartVec2D operator-(const CartVec2D& rhs);
  friend CartVec2D operator*(const CartVec2D& lhs, const double& rhs);
  friend CartVec2D operator*(const double& lhs, const CartVec2D& rhs);
  friend CartVec2D operator/(const CartVec2D& lhs, const double& rhs);
  friend CartVec2D operator/(const double& lhs, const CartVec2D& rhs);
  
 public:
 CartVec2D(double x, double y): x_(x), y_(y){};
  CartVec2D(): CartVec2D(0.0, 0.0){};
  CartVec2D(const CartVec2D& other) = default;
  CartVec2D& operator=(const CartVec2D& other) = default;
  ~CartVec2D() = default;

  CartVec2D &operator+=(const CartVec2D& rhs);
  CartVec2D &operator-=(const CartVec2D& rhs);
  CartVec2D &operator*=(const double& rhs);
  CartVec2D &operator/=(const double& rhs);

  void setX(double x);
  void setY(double y);
  void setXY(double x, double y);

  double getX() const;
  double getY() const;
  
  //double length() const;

 private:
  double x_;
  double y_;
};

inline void CartVec2D::setX(double x){
  x_ = x;
}

inline void CartVec2D::setY(double y){
  y_ = y;
}

inline void CartVec2D::setXY(double x, double y){
  x_ = x;
  y_ = y;
}

inline double CartVec2D::getX() const {
  return x_;
}

inline double CartVec2D::getY() const {
  return y_;
}
