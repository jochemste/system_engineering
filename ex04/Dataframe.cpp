#include "Dataframe.h"

Dataframe::Dataframe(){
  //Set all data frame elements to 0
  for(auto& el: dataFrame_)
    el = 0;
  
  header_ = 19;
}

Dataframe::~Dataframe(){
  //do nothing
}

void Dataframe::setData(const Dataframe::dataframe_t& data, std::uint8_t size){
  dataFrame_.at(0) = header_;
  dataFrame_.at(1) = size;

  for(int i=0; i<size; i++)
    dataFrame_[i+2] = data[i];

  setChecksum();
  
}

void Dataframe::setChecksum(){
  std::uint8_t sum = 0;
  for(int i=1; i<(dataFrame_.at(1)+2); i++){
    sum += dataFrame_.at(i);
  }
  
  dataFrame_.at(dataFrame_.at(1)+2) = 256-sum;
}

void Dataframe::setDataframe(const Dataframe::dataframe_t& dataframe){
  dataFrame_ = dataframe;
}

std::array<std::uint8_t, 255> Dataframe::getDataframe(){
  return dataFrame_;
}

void Dataframe::show() const{
  for(int i=0; i<(dataFrame_.at(1)+3); i++)
    std::cout << "[" << static_cast<int>(dataFrame_.at(i)) << "]";
  std::cout << std::endl;
}

void Dataframe::showAll() const{
  for(auto el: dataFrame_)
    std::cout << "[" << static_cast<int>(el) << "]";
  std::cout << std::endl;
}

bool Dataframe::checksumIsCorrect() const{
  int sum = 0;
  for(int i=1; i<dataFrame_.at(1)+3; i++)
    sum += static_cast<int>(dataFrame_.at(i));

  if(sum == 256)
    return true;
  else
    return false;
}

void Dataframe::clear(){
  for(auto& el: dataFrame_)
    el = 0;
}
