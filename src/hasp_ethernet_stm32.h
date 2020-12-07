/* MIT License - Copyright (c) 2020 Francis Van Roie
   For full license information read the LICENSE file in the project folder */

#ifndef HASP_ETHERNET_STM32_H
#define HASP_ETHERNET_STM32_H

void ethernetSetup();
void ethernetLoop(void);

bool ethernetEvery5Seconds();
#endif