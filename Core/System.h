//System.h
//System class definition

#ifndef SYSTEM_H
#define SYSTEM_H

#include "Message.h"
#include "MessageBus.h"

namespace aloha {
  class System
  {
  public:
    System(MessageBus *messageBus);
    void handleMessage(Msg *msg);
  private:
    MessageBus *_messageBus;
  };
}
#endif
