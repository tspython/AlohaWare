#ifndef MESSAGEBUS_H
#define MESSAGEBUS_H

#include "Message.h"
namespace aloha {
  class MessageBus
  {
  public:
    MessageBus();
    void postMessage(Msg msg);
  private:
    //Add Systems here
  };
}
#endif
