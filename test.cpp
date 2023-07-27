/******** C file *****************/

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "btlib.hpp"

// int callback(int clientnode, int cticn, unsigned char* dat, int len);

int main()
{

    return 1;
    // int cticn;

    // if (init_blue("devices.txt") == 0)
    //     return (0);

    // // Populate characteristics and match addresses to names
    // le_scan();

    // // Get the characteristic index

    // int characteristic_index = find_ctic_index(7, UUID_16, strtohex("00010002574F4F2053706865726F2121", NULL));
    // std::cout << "Characteristic index: " << characteristic_index << std::endl;

    // set_le_wait(200);
    // connect_node(7, CHANNEL_LE, 0);
    // connect_node(8, CHANNEL_LE, 0);
    // connect_node(9, CHANNEL_LE, 0);
    // connect_node(10, CHANNEL_LE, 0);

    // unsigned char data[] = { 0x8d, 0xa, 0x13, 0xd, 0x0, 0xd5, 0xd8 };

    // // printf("Writing to characteristic...\n");

    // write_ctic(7, characteristic_index, data, 7);
    // write_ctic(8, characteristic_index, data, 7);
    // write_ctic(9, characteristic_index, data, 7);
    // write_ctic(10, characteristic_index, data, 7);

    // // printf("Wrote %d bytes\n", bytes_written);

    // // find_ctics(7);
    // // // cticn = find_ctic_index(7, UUID_16, strtohex("7f280002-8204-f393-e0a9-e50e24dcca9e", NULL));
    // // // notify_ctic(7, cticn, NOTIFY_ENABLE, callback);
    // // read_notify(10000); // read for 10s

    // // close_all();

    // // return (0);
}

int callback(int clientnode, int cticn, unsigned char* dat, int len)
{
    int n;

    // // printf("Notify =");
    // for (n = 0; n < len; ++n)
    //     printf(" %02X", dat[n]);
    // // printf("\n");
    return (SERVER_CONTINUE);
}
