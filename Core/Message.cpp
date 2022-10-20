#include "Message.h"

namespace aloha {
  Msg::Msg(int type, void* data) {
  }
  int Msg::type() {
    return _type;
  }
  void* Msg::data() {
    return _data;
  }
}
