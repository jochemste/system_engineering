#include "Dataframe.h"

#include <iostream>

int main(){
  Dataframe df;
  Dataframe::dataframe_t data = {20, 15, 5, 21, 3};
  Dataframe::dataframe_t datfra;
  std::cout << "--Exercise 04: Dataframe class--\n";

  df.setData(data, 5);

  datfra = df.getDataframe();

  if(df.checksumIsCorrect())
    std::cout << "checksum is correct\n";
  else
    std::cout << "ERROR: checksum is incorrect\n";

  df.show();
  std::cout << std::endl << std::endl;
  df.showAll();

  df.clear();
  std::cout << std::endl << std::endl;
  df.showAll();

  df.setDataframe(datfra);
  std::cout << std::endl << std::endl;
  df.show();

    if(df.checksumIsCorrect())
    std::cout << "checksum is correct\n";
  else
    std::cout << "ERROR: checksum is incorrect\n";

}
