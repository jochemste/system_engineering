#include "CommandProcessor.h"

CommandProcessor::CommandProcessor(){
  commands_.clear();
}

CommandProcessor::~CommandProcessor(){

}

void CommandProcessor::addCommand(const std::string& command, CommandProcessor::commandfunction_t cf){
  commands_[command] = cf;
}

void CommandProcessor::executeCommand(const std::string& command){
    //p is an iterator
    auto p = commands_.find(command);
    if(p != end(commands_)){
      auto commandfunc = (*p).second;
      commandfunc();
    } else {
      //error?
      std::cerr << "ERROR: Command not recognised\n";
    }
	
}
