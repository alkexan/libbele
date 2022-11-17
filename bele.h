#ifndef _BELE_H_
#define _BELE_H_ 1
#if defined(__cplusplus)
extern "C" {
#endif

/*
 * beget.c
 */
unsigned char be8getv(void*);
unsigned short be16getv(void*);
unsigned int be24getv(void*);
unsigned int  be32getv(void*);
unsigned long be64getv(void*);

unsigned int be8get(void*, unsigned char*);
unsigned int be16get(void*, unsigned short*);
unsigned int be24get(void*, unsigned int*);
unsigned int be32get(void*, unsigned int*);
unsigned int be64get(void*, unsigned long*);

unsigned int be8put(void*, unsigned char);
unsigned int be16put(void*, unsigned short);
unsigned int be24put(void*, unsigned int);
unsigned int be32put(void*, unsigned int);
unsigned int be64put(void*, unsigned long);

/*
 * leget.c
 */
unsigned char le8getv(void*);
unsigned short le16getv(void*);
unsigned int le24getv(void*);
unsigned int le32getv(void*);
unsigned long le64getv(void*);

unsigned int le8get(void*, unsigned char*);
unsigned int le16get(void*, unsigned short*);
unsigned int le24get(void*, unsigned int*);
unsigned int le32get(void*, unsigned int*);
unsigned int le64get(void*, unsigned long*);

unsigned int le8put(void*, unsigned char);
unsigned int le16put(void*, unsigned short);
unsigned int le24put(void*, unsigned int);
unsigned int le32put(void*, unsigned int);
unsigned int le64put(void*, unsigned long);

#if defined(__cplusplus)
}
#endif
#endif
