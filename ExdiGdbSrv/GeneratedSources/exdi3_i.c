

/* this ALWAYS GENERATED file contains the IIDs and CLSIDs */

/* link this file in with the server and any clients */


 /* File created by MIDL compiler version 8.01.0628 */
/* at Tue Jan 19 11:14:07 2038
 */
/* Compiler settings for exdi3.idl:
    Oicf, W1, Zp8, env=Win64 (32b run), target_arch=AMD64 8.01.0628 
    protocol : all , ms_ext, c_ext, robust
    error checks: allocation ref bounds_check enum stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
/* @@MIDL_FILE_HEADING(  ) */



#ifdef __cplusplus
extern "C"{
#endif 


#include <rpc.h>
#include <rpcndr.h>

#ifdef _MIDL_USE_GUIDDEF_

#ifndef INITGUID
#define INITGUID
#include <guiddef.h>
#undef INITGUID
#else
#include <guiddef.h>
#endif

#define MIDL_DEFINE_GUID(type,name,l,w1,w2,b1,b2,b3,b4,b5,b6,b7,b8) \
        DEFINE_GUID(name,l,w1,w2,b1,b2,b3,b4,b5,b6,b7,b8)

#else // !_MIDL_USE_GUIDDEF_

#ifndef __IID_DEFINED__
#define __IID_DEFINED__

typedef struct _IID
{
    unsigned long x;
    unsigned short s1;
    unsigned short s2;
    unsigned char  c[8];
} IID;

#endif // __IID_DEFINED__

#ifndef CLSID_DEFINED
#define CLSID_DEFINED
typedef IID CLSID;
#endif // CLSID_DEFINED

#define MIDL_DEFINE_GUID(type,name,l,w1,w2,b1,b2,b3,b4,b5,b6,b7,b8) \
        EXTERN_C __declspec(selectany) const type name = {l,w1,w2,{b1,b2,b3,b4,b5,b6,b7,b8}}

#endif // !_MIDL_USE_GUIDDEF_

MIDL_DEFINE_GUID(IID, IID_IeXdiServerFactory3,0x22EFA264,0x6FD7,0x4992,0x94,0x27,0x12,0x5B,0x51,0x1A,0x47,0x7C);


MIDL_DEFINE_GUID(IID, IID_IeXdiServer3,0x2E501506,0x9703,0x4B6F,0x9D,0x0D,0x6B,0x42,0xB0,0xE4,0x1E,0x6F);


MIDL_DEFINE_GUID(IID, IID_IeXdiCodeBreakpoint3,0x386D8BCB,0x9D1E,0x4BF4,0xBE,0x90,0x90,0xD7,0x80,0x25,0x45,0xFE);


MIDL_DEFINE_GUID(IID, IID_IeXdiDataBreakpoint3,0xFC90E444,0x6E23,0x40C1,0xA8,0xD0,0x12,0x03,0xC8,0xAD,0xB3,0x24);


MIDL_DEFINE_GUID(IID, IID_IeXdiX86Context3,0xEBBBE2D6,0x9B1E,0x4F35,0xB9,0x56,0x28,0xA7,0x8C,0x34,0x8F,0x0F);


MIDL_DEFINE_GUID(IID, IID_IeXdiX86ExContext3,0x3F2A6A8A,0xD56B,0x4605,0x8A,0x93,0xAC,0x1C,0x9B,0x7E,0x63,0x18);


MIDL_DEFINE_GUID(IID, IID_IeXdiARM4Context3,0x25A27A99,0xC6F7,0x4A27,0x87,0x49,0xFA,0x7E,0xA6,0x38,0xAD,0xB5);


MIDL_DEFINE_GUID(IID, IID_IeXdiArmV8Arch64Context3,0x2146BE85,0x7866,0x4309,0xB9,0x73,0xF9,0x65,0x0D,0x1A,0xA8,0x86);


MIDL_DEFINE_GUID(IID, IID_IeXdiX86_64Context3,0x3A5BF3FF,0x8CDA,0x4789,0x83,0x23,0xBE,0x04,0xA9,0x70,0xD0,0x06);


MIDL_DEFINE_GUID(IID, IID_IeXdiIA64Context3,0x24C6A990,0x780C,0x428E,0xBE,0x5B,0xE2,0x7E,0x2C,0xAE,0xA0,0x5A);


MIDL_DEFINE_GUID(IID, IID_IeXdiEBCContext3,0x6C4E5523,0x3AC1,0x4014,0xB4,0x54,0xE5,0x4E,0x18,0x0A,0xBD,0x8E);


MIDL_DEFINE_GUID(IID, IID_IeXdiClientNotifyRunChg3,0xCEC95378,0x3797,0x4079,0x9C,0x70,0xA4,0x5A,0xB2,0xF8,0x52,0x78);


MIDL_DEFINE_GUID(IID, IID_IeXdiKeepaliveInterface3,0x2AD8BA47,0xDE4D,0x47E2,0xA9,0x22,0x78,0xE5,0x79,0x0A,0x0E,0x0A);


MIDL_DEFINE_GUID(IID, IID_IeXdiControlComponentFunctions,0x630e91f3,0xdfe2,0x49c8,0xb2,0x74,0x28,0x43,0x59,0x5a,0x4f,0xa6);

#undef MIDL_DEFINE_GUID

#ifdef __cplusplus
}
#endif



