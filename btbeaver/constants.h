#ifndef COMMON_DEFS_H
#define COMMON_DEFS_H

/********** BLUETOOTH defines ********/

#define VERSION 11
// max possible NUMDEVS = 256
#define NUMDEVS 256
#define NAMELEN 34

#define BTPROTO_HCI 1
#define BTPROTO_RFCOMM 3
#define BTPROTO_L2CAP 0
#define SOL_HCI 0
#define HCI_FILTER 2
#define SCAN_PAGE 2
#define SCAN_INQUIRY 1
// #define HCIDEVUP _IOW('H',201,int)
#define HCIDEVUP 0x400448C9
// #define HCIDEVDOWN _IOW('H',202,int)
#define HCIDEVDOWN 0x400448CA
// #define HCISETSCAN _IOW('H',221,int)
#define HCISETSCAN 0x400448DD

struct sockaddr_hci {
    unsigned short hci_family;
    unsigned short hci_dev;
    unsigned short hci_channel;
};

struct sockaddr_un {
    unsigned short sun_family;
    char sun_path[108];
};

struct sockaddr_rc {
    unsigned short rc_family;
    unsigned char rc_bdaddr[6];
    unsigned char rc_channel;
};

struct sockaddr_l2 {
    unsigned short l2_family;
    unsigned short l2_psm;
    unsigned char l2_bdaddr[6];
    unsigned short l2_cid;
    unsigned char l2_bdaddr_type;
};

struct hci_filter {
    unsigned long type_mask;
    unsigned long event_mask[2];
    unsigned short opcode;
};

struct hci_dev_req {
    unsigned short dev_id;
    unsigned long dev_opt;
};

/************** END BLUETOOTH DEFINES ********/

// Target packet transmission time in microseconds
#define TRANSMITUS 2048

// ATT_MTU data cannot be more than 244
#define LEDATLEN 244

#define TOPUPCREDIT 200

#endif