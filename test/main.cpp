#include <iostream>
#include <string>
#include <modbuspp.h>

using namespace std;
using namespace Modbus;

int main (int argc, char **argv) {
  string port ("/dev/ttyUSB0");

  Master mb (Rtu, port , "11520E1"); // new master on RTU
  Slave & slv = mb.addSlave (1); // to the slave at address 33

  if (mb.open ()) { // open a connection
    // success, do what you want here
    uint16_t values[2];

    if (slv.readInputRegisters (1, values, 2) == 2) {

      cout << "R0=" << values[0] << endl;
      cout << "R1=" << values[1] << endl;
    }
    else {
      cerr << "Unable to read input registers !"  << endl;
      exit (EXIT_FAILURE);
    }
    mb.close();
  }
  else {
    cerr << "Unable to open MODBUS connection to " << port << endl;
    exit (EXIT_FAILURE);
  }

  return 0;
}
