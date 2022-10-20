#ifndef DEBUG_H
#define DEBUG_H

#include "../Core/System.h"
#include "../Core/MessageBus.h"
#include "../Core/Message.h"

namespace aloha {
  //Debug message content struct

  class ConsoleSystem : public System {
  public:
    ConsoleSystem(MessageBus *messageBus);
    void handleMessage(Msg *msg);
  private:
    void printMessage(void* data);
    void errorMessage(void* data);
    void logMessage(void* data);
  };

}
#endif
