#include "FindDebuggerData.h"
#include <limits>
DBGKD_GET_VERSION64 KdVersionBlock;
KDDEBUGGER_DATA64 KdbuggerData64;
ULONG64 DebuggerDataListInValue = 0;
BOOLEAN bGetKdVersionBlock = FALSE;
BOOLEAN bGetKdbuggerData64 = FALSE;

ULONG64 KiWaitNeverInValue = 0;
ULONG64 KiWaitAlwaysInVaule = 0;
ULONG64 KdpDataBlockEncoded = 0;


//RtlpBreakWithStatusInstruction
VOID DecodeDebuggerBlockData64(PVOID BlockData, DWORD BlockSize)
{

    if (KdVersionBlock.MinorVersion <= 7600 || KiWaitAlwaysInVaule == 0 
        || KiWaitNeverInValue == 0 || KdpDataBlockEncoded == 0) {
        return;
    }


#define BitsCount(val) (sizeof(val) * CHAR_BIT)
#define Shift(val, steps) ((steps) % BitsCount(val))
#define ROL(val, steps)                                                                            \
    (((val) << Shift(val, steps)) | ((val) >> (BitsCount(val) - Shift(val, steps))))
#define BSWAP_64(x)                                                                                \
    (((unsigned __int64)(x) << 56) | (((unsigned __int64)(x) << 40) & 0xff000000000000ULL) |                       \
     (((unsigned __int64)(x) << 24) & 0xff0000000000ULL) | (((unsigned __int64)(x) << 8) & 0xff00000000ULL) |      \
     (((unsigned __int64)(x) >> 8) & 0xff000000ULL) | (((unsigned __int64)(x) >> 24) & 0xff0000ULL) |              \
     (((unsigned __int64)(x) >> 40) & 0xff00ULL) | ((unsigned __int64)(x) >> 56))


    unsigned __int64 EncodedChunks[128];    //Maybe in new version need large than 1024 byte
    unsigned __int64 DebuggerData[128];

    RtlCopyMemory(EncodedChunks, BlockData, BlockSize);

    unsigned __int64 Nchunks = BlockSize / sizeof(unsigned __int64);
    for (unsigned __int64 i = 0; i < Nchunks; ++i)
    {
        unsigned __int64 decodedChunk = EncodedChunks[i];
        decodedChunk = ROL((decodedChunk ^ KiWaitNeverInValue), (KiWaitNeverInValue & 0xFF));
        decodedChunk = decodedChunk ^ (KdpDataBlockEncoded | 0xFFFF000000000000ULL);
        decodedChunk = BSWAP_64(decodedChunk);
        decodedChunk = decodedChunk ^ KiWaitAlwaysInVaule;
        (reinterpret_cast<unsigned __int64*>(DebuggerData))[i] = decodedChunk;
    }
    memcpy(BlockData, DebuggerData, BlockSize);
}

VOID SearchDecodeArg64(PVOID buffer, DWORD bufferSize)
{
    


    return VOID();
}

BOOLEAN KdVersionBlock64(DWORD dwSize, ULONG64 toReadAddress, PVOID buffer)
{
    if (bGetKdVersionBlock == FALSE && dwSize == sizeof(_DBGKD_GET_VERSION64) && KdVersionBlock.KernBase < toReadAddress)
    {
        PDBGKD_GET_VERSION64 pTemp = (PDBGKD_GET_VERSION64)buffer;

        if (KdVersionBlock.KernBase == pTemp->KernBase) {

            RtlCopyMemory(&KdVersionBlock, pTemp, sizeof(DBGKD_GET_VERSION64));
            bGetKdVersionBlock = TRUE;
        }
    }
    return bGetKdVersionBlock;
}

BOOLEAN KdVersionBlock86(DWORD dwSize, ULONG64 toReadAddress, PVOID buffer)
{
    return FALSE;
}

