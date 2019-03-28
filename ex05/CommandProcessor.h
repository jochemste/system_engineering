#ifndef COMMANDPROCESSOR_H
#define COMMANDPROCESSOR_H

#include <iostream>
#include <functional>
#include <map>
#include <string>

class CommandProcessor{
 public:
  using commandfunction_t = std::function<void()>; ///struct

  CommandProcessor(); ///default constructor
  ~CommandProcessor(); ///destructor

  void addCommand(const std::string& command, CommandProcessor::commandfunction_t cf);
  void executeCommand(const std::string& command);
  
 private:
  std::map<std::string, commandfunction_t> commands_;
};

#endif
