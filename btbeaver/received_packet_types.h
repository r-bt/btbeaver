/***************** Received PACKET TYPES for readhci() and findhci() *****************/
// 1 still available
#define IN_DATA ((long long int)1 << 1) // UIH or LE data
#define IN_CLHAND ((long long int)1 << 2) // classic open reply
#define IN_ATTDAT ((long long int)1 << 3) // 02 channel 4 ATT e.g. LE characteristic value
#define IN_LESCAN ((long long int)1 << 4) // LE scan reply
#define IN_LINKREQ ((long long int)1 << 5) // HCI event 17 link key req
#define IN_IOCAPREQ ((long long int)1 << 6) // HCI event 31 io cap
#define IN_ACOMP ((long long int)1 << 7) // HCI event 06 authentication complete
#define IN_PCOMP ((long long int)1 << 8) // HCI event 36 simple pair complete
#define IN_CONFREQ ((long long int)1 << 9) // HCI event 33 confirmation request
#define IN_L2ASKCT ((long long int)1 << 10) // L2CAP channel 0001 opcode 02 connect request
#define IN_L2REPCT ((long long int)1 << 11) // L2CAP channel 0001 opcode 03 connect reply with result=0
#define IN_L2ASKCF ((long long int)1 << 12) // L2CAP channel 0001 opcode 04 config request
#define IN_L2REPCF ((long long int)1 << 13) // L2CAP channel 0001 opcode 05 config reply
#define IN_L2ASKDIS ((long long int)1 << 14) // L2CAP channel 0001 opcode 06 disconnect request
#define IN_L2REPDIS ((long long int)1 << 15) // L2CAP channel 0001 opcode 07 disconnect reply
#define IN_L2ASKINFO ((long long int)1 << 16) // L2CAP channel 0001 opcode 0A info request
#define IN_L2REPINFO ((long long int)1 << 17) // L2CAP channel 0001 opcode 0B info reply
#define IN_L2REPALL (IN_L2REPCT | IN_L2REPCF | IN_L2REPDIS | IN_L2REPINFO)
#define IN_ENCR ((long long int)1 << 18) // Encrypt change with status = 0
#define IN_RFUA ((long long int)1 << 19) // rfcomm UA reply
#define IN_PNRSP ((long long int)1 << 20) // PN RSP
#define IN_LEHAND ((long long int)1 << 21) // LE open reply
#define IN_DISCH ((long long int)1 << 22) // disconnect CONTROL/RFCOMM channel
#define IN_DISCOK ((long long int)1 << 23) // disconnect done
#define IN_STATOK ((long long int)1 << 24) // event 0E with first param status=0
#define IN_SSAREQ ((long long int)1 << 25) // SSA request 06 on psm 1
#define IN_SSAREP ((long long int)1 << 26) // SSA response 07
#define IN_CSCAN ((long long int)1 << 27) // classic scan result Event 02/22/2F
#define IN_CNAME ((long long int)1 << 28) // read classic name following scan
#define IN_KEY ((long long int)1 << 29) // link key notification
#define IN_BADD ((long long int)1 << 30) // read local board address
#define IN_INQCOMP ((long long int)1 << 31) // Event 01 inquiry complete
#define IN_CONREQ ((long long int)1 << 32)
#define IN_CONCHAN ((long long int)1 << 33)
#define IN_RFCHAN ((long long int)1 << 34)
#define IN_MSC ((long long int)1 << 35)
#define IN_AUTOEND ((long long int)1 << 36)
#define IN_PINREQ ((long long int)1 << 37) // HCI event 16 pin code
#define IN_NOTIFY ((long long int)1 << 38)
#define IN_ECHO ((long long int)1 << 39)
#define IN_IOCAPRESP ((long long int)1 << 40) // HCI event 32
#define IN_PAIRED ((long long int)1 << 41) // HCI event 36
#define IN_LECMD ((long long int)1 << 42) // LE server operation
#define IN_PASSREQ ((long long int)1 << 43) // HCI event 34
#define IN_PARAMREQ ((long long int)1 << 44) // HCI event 3E/6
#define IN_DATLEN ((long long int)1 << 45) // HCI event 3E/7
#define IN_CONUP5 ((long long int)1 << 46) // channel 5 connection paramters
#define IN_LEACK ((long long int)1 << 47) // write ctic response
#define IN_IMMED ((long long int)1 << 63)

/***************** END Received PACKET TYPES *************/