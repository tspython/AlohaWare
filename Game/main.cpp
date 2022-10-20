//System includes
#include <iostream>
#include <unistd.h> //For getOpt
//Local includes
#include "../Core/MessageBus.h"
#include "../Console/ConsoleSystem.h"
//Namespaces
using namespace std;
using namespace aloha;

//Global variables
bool verbose = false;

///Message Bus and Systems go here
MessageBus messageBus;
///TEMP: Error Enums
enum error {
  MESSAGE_BUS_ERR = -7,
  DEBUG_SYS_ERR,  
};

int init() {
  //Initialize Bus and Systems here, if one fails, return the appropriate negative number
  //messageBus = new MessageBus::MessageBus();
  //if (!messageBus) {
  //  return MESSAGE_BUS_ERR;
  //}
  return 0;
}

int main(int argc, char **argv) {
  //Read arguments from commandline
  int arg = 0;
  while ((arg = getopt (argc, argv, "v")) != -1) {
    switch(arg) {
      //Add launch arguments here
      case 'v':
        //Debug case example
        verbose = true;
        std::cout << "main(): verbose enabled\n";
        break;
      default:
        break;
    }
  }
  //Initialize Message Bus and Systems
  int check_init = init();
  //Check that they initialized correctly
  if (check_init < 0) {
    std::cerr << "init(): Failed to initialize game, error code:" << check_init << "\n";
    exit(0);
  }
  return 0;
}
