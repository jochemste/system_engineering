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
  void setChecksum();
  void setDataframe(const Dataframe::dataframe_t& dataframe);
  std::array<std::uint8_t, 255> getDataframe();
  void show() const;
  void showAll() const;
  bool checksumIsCorrect() const;
  void clear();
  
 private:
  std::array<std::uint8_t, 255> dataFrame_;
  uint8_t checkSum_;
  uint8_t header_;
  uint8_t size_;
  
};

#endif
