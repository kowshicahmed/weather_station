#include <stdio.h>
#include "/usr/include/modbus/modbus.h"
#include <iostream>


int main(void) {
  modbus_t *mb;
  uint16_t tab_reg[2];


  mb = modbus_new_rtu("/dev/ttyUSB0", 9600, 'N', 8, 1);
  modbus_connect(mb);
  if (mb == NULL) {
    fprintf(stderr, "Unable to create the libmodbus context\n");
    return -1;
  }

modbus_set_slave(mb, 1);

if (modbus_connect(mb) == -1) {
    fprintf(stderr, "Connection failed: %s\n", modbus_strerror(errno));
    modbus_free(mb);
    return -1;
}
  /* Read 5 registers from the address 0 */
  if (modbus_read_registers(mb, 5004, 2, tab_reg) > 0)
    std::cout << tab_reg[0] << " " << tab_reg[1] << std::endl;
  else
    std::cout << "Error Reading data " << std::endl;
  modbus_close(mb);
  modbus_free(mb);
}