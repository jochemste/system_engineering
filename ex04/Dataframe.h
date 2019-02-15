#ifndef DATAFRAME_H
#define DATAFRAME_H

#include <iostream>
#include <array>

class Dataframe{
 public:
  using dataframe_t = std::array<uint8_t, 255>;

  Dataframe();
  ~Dataframe();

  void setData(const Dataframe::dataframe_t& data, std::uint8_t size);
  
 private:
  std::array<std::uint8_t, 255> dataFrame;
  
};

#endif
