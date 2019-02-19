#include "Dataframe.h"

Dataframe::Dataframe(){
  //Set all data frame elements to 0
  for(auto& el: dataFrame)
    el = 0;
  checkSum_ = 0;
  header_ = 0;
  size_ = 0;
}

Dataframe::~Dataframe(){
  //do nothing
}

void Dataframe::setData(const Dataframe::dataframe_t& data, std::uint8_t size){

  dataFrame[0] = header;
  dataFrame[1] = size;

  for(int i=0; i<size; i++)
    dataFrame[i+2] = data[i];

  setChecksum();
  
  dataFrame[size+2] = checkSum_;
  
}

void Dataframe::setChecksum(){

  
  
}
