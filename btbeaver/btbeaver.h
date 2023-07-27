#include <stdio.h> 
#include "constants.h"

#ifndef BTBEAVER_HPP
#define BTBEAVER_HPP

struct cticdata {
    int type; // CTIC_UNUSED=allocated but unused CTIC_ACTIVE=used CTIC_END=terminate
    int cticn; // index
    int size; // number of bytes 0=unknown
    int perm; // permissions 0=unknown 02=read 04=write no ack 08=write ack
    int notify; // 1=enable notifications
    int psnx;
    int lasthandle; // in primary service
    char name[NAMELEN]; // name of characteristic - your choice
    int chandle; // characteristic handle 0=unknown
    int uuidtype; // 0=unknown 2=2-byte 16=16-byte
    int iflag; // 1=have read info from remote device
    unsigned char value[LEDATLEN];
    unsigned char uuid[16];
    int (*callback)(int node, int cticn, unsigned char* data, int dataSize);
    struct cticdata* nextctic; // next in chain
};

class BTBeaver {
private:
public:
    BTBeaver(); // Constructor

    int meshpacket(unsigned char* buf);
    void clscanx(void);
    int lescanx(void);
    int clconnect(int ndevice, int channel, int method);
    int leservices(int ndevice, int flags, char* uuid);
    int clservices(int ndevice, int flags, char* uuid);
    void printlocalchannels(void);
    int services(int ndevice, int flags, char* uuid);
    int printchannels(int ndevice, int flags, struct servicedata* serv, int servlen);
    int printctics0(int devicen, int flags);
    int printctics1(int devicen);
    int savectic(int devicen, struct servicedata* serv, int servlen);
    int finduuidtext(int uuid);
    void hexdump(unsigned char* buf, int len);
    void printascii(unsigned char* s, int len);
    unsigned char calcfcs(unsigned char* s, int count);
    int pushins(long long int typebit, int ndevice, int len, unsigned char* s);
    int addins(int nx, int len, unsigned char* s);
    void popins(void);
    int decodesdp(unsigned char* sin, int len, struct servicedata* serv, int servlen);
    int decodedes(unsigned char* sin, int len, struct sdpdata* sdpp);
    int openremotesdp(int ndevice);
    int clconnect0(int ndevice);
    int clconnectxx(int ndevice);
    void clearins(int ndevice);
    int connectpsm(int psm, int channel, int ndevice);
    int disconnectl2(int ndevice, int psm);
    void setcredits(int ndevice);
    int readpack(char* c, int clen, int* ndevice, int count, int endchar, int toflag, int abtflag);
    int readrf(int* ndevice, char* inbuff, int count, char endchar, int flag, int timeoutms);
    int readhci(int ndevice, long long int mustflag, long long int lookflag, int timout, int toshort);
    int setkeymode(int setflag);
    int leconnect(int ndevice);
    int openremotesdpx(int ndevice);
    int sconnectx(int ndevice);
    unsigned int timems(int flag);
    unsigned int strinstr(char* s, char* t);
    int hexchar(char c);
    int entrylen(unsigned int* ind, int in);
    int devalloc(void);
    struct cticdata* cticalloc(int dn);
    struct cticdata* ctic(int ndevice, int n);
    int devok(int ndevice);
    int devokp(int ndevice);
    int devlist(int mask);
    void flushprint();
    int bluezdown(void);
    int readkey(void);
    int devn(int node);
    int devnp(int node);
    int devnfrombadd(unsigned char* badd, int type, int dirn);
    char* baddstr(unsigned char* badd, int dirn);
    int disconnectdev(int ndevice);
    void meshreadon(void);
    void meshreadoff(void);
    int statusok(int flag, unsigned char* md);
    int readline(FILE* stream, char* s);
    int newnode(void);
    int classicserverx(int clientnode);
    int psmcheck(int n, long long lookflag);
    void immediate(long long lookflag);
    int bincmp(unsigned char* s, unsigned char* t, int count, int dirn);
    void waitdis(int ndevice, unsigned int timout);
    int writecticx(int node, int cticn, unsigned char* data, int count, int notflag, int (*callback)(int node, int cticn, unsigned char* data, int dataSize));
    void replysdp(int ndevice, int in, unsigned char* uuid, char* name);
    int addaid(unsigned char* sdp, unsigned char* aid, int* rn, int aidj, int aidk, int aidn);
    void rwlinkey(int rwflag, int ndevice);
    int localctics(int starthandle);
    void leserver(int ndevice, int count, unsigned char* dat);
    int nextctichandle(int start, int end, int* handle, int flag);
    int findcticuuid(int start, int end, unsigned char* uuidrev, int size);
    char* cticerrs(struct cticdata* cp);
    void addname(void);
    int setlelen(int ndevice, int len, int flag);

    int closehci(void);
    int sendhci(unsigned char* cmd, int ndevice);
    int hcisock(void);
    int findhci(long long int type, int devicen, int popflag);
    void printins(void);

    int sconnect(int ndevice);
    int readserial(int* ndevice, char* inbuff, int count, char endchar, int exitflags, int timeoutms);
    unsigned char* strtohexx(char* s, int slen, int* num);

    void readleatt(int node, int handle);
    void printval(unsigned char* s, int len, unsigned char* t);
    int splitcmd(unsigned char* s);
    int splitwrite(unsigned char* cmd, int len);
    int stuuid(unsigned char* s);
};

#endif
