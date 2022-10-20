#ifndef MESSAGE_H
#define MESSAGE_H

namespace aloha {
  enum Types
  {
    GAME_QUIT = 1,
    CONSOLE_PRINT,
    CONSOLE_LOG,
    CONSOLE_ERROR,
  };

  class Msg
  {
  public:
    Msg(int type, void* data);
    int type();
    void* data();

  private:
    int _type;
    void* _data;
  };
}
#endif
