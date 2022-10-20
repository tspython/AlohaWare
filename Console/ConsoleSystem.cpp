//Global includes
#include <iostream>
//Local includes
#include "ConsoleSystem.h"

using namespace std;

namespace aloha {
  ConsoleSystem::ConsoleSystem(MessageBus *messageBus): System::System(messageBus) {
  }
  
  void ConsoleSystem::handleMessage(Msg *msg) {
    switch(msg->type()) {
      case CONSOLE_PRINT:
      ConsoleSystem::printMessage(msg->data());
      break;
      case CONSOLE_LOG:
      ConsoleSystem::logMessage(msg->data());
      break;
      case CONSOLE_ERROR:
      ConsoleSystem::errorMessage(msg->data());
      break;
      default:
      break;
    }
  }

  void ConsoleSystem::printMessage(void* data) {
    //TODO: finish this function
    std::cout << "Message printed\n";
  }

  void ConsoleSystem::errorMessage(void* data) {
    //TODO:finish this function
    std::cerr << "Error Message printed\n";
  }

  void ConsoleSystem::logMessage(void* data) {
    //TODO: define log file output
  }
}
