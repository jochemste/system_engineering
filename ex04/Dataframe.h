#ifndef DATAFRAME_H
#define DATAFRAME_H

///Dataframe header file

#include <iostream>
#include <array>

class Dataframe{
 public:
  using dataframe_t = std::array<uint8_t, 255>;///struct used for data and dataframes

  Dataframe();///Constructor
  ~Dataframe();///destructor

  void setData(const Dataframe::dataframe_t& data, std::uint8_t size); ///sets Data into a dataframe, adding header, size and checksum
  void setChecksum(); ///sets the checksum, used by setData
  void setDataframe(const Dataframe::dataframe_t& dataframe); ///Parameter has to be a full dataframe, including header, size and checksum
  std::array<std::uint8_t, 255> getDataframe(); ///returns the dataframe
  void show() const; ///shows the used elements in the dataframe, up to and including the checksum
  void showAll() const; ///shows all elements in the dataframe array
  bool checksumIsCorrect() const; ///checks if the checksum is correct
  void clear(); ///clears all elements of the array, by setting them to 0
  
 private:
  std::array<std::uint8_t, 255> dataFrame_; ///the array used to store the dataframe
  uint8_t header_; ///stores the fixed header data
};

#endif
