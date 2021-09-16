#include <stdio.h>
#include "modbus.h"
#include <iostream>
#include "TestClass.h"

int main(void) {
  modbus_t *mb;
  uint16_t tab_reg[32];

  TestClass item {10};
  std::cout << item.get_item() << std::endl;

  mb = modbus_new_rtu("/dev/ttyUSB0", 115200, 'N', 8, 1);;
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
  modbus_read_registers(mb, 0, 5, tab_reg);
  std::cout << tab_reg[0] << " ," << tab_reg[1] << std::endl;

  modbus_close(mb);
  modbus_free(mb);
}