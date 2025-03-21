//
// Generated By: dol2asm
// Translation Unit: J3DVertex
//

#include "JSystem/J3DGraphBase/J3DVertex.h"
#include "JSystem/J3DGraphAnimator/J3DJointTree.h"
#include "JSystem/J3DGraphBase/J3DSys.h"
#include "JSystem/JKernel/JKRHeap.h"
#include "string.h"
#include <dolphin/os.h>
#include "global.h"

/* 80310EF8-80310F78 30B838 0080+00 0/0 1/1 0/0 .text            __ct__13J3DVertexDataFv */
J3DVertexData::J3DVertexData() {
    mVtxNum = 0;
    mNrmNum = 0;
    mColNum = 0;
    mTexCoordNum = 0;
    mPacketNum = 0;

    mVtxAttrFmtList = NULL;
    mVtxPosArray = NULL;
    mVtxNrmArray = NULL;
    mVtxNBTArray = NULL;

    for (int i = 0; i < ARRAY_SIZE(mVtxColorArray); i++)
        mVtxColorArray[i] = NULL;

    for (int i = 0; i < ARRAY_SIZE(mVtxTexCoordArray); i++)
        mVtxTexCoordArray[i] = NULL;

    mVtxPosFrac = 0;
    mVtxPosType = GX_F32;
    mVtxNrmFrac = 0;
    mVtxNrmType = GX_F32;
}

/* 80310F78-80310FD8 30B8B8 0060+00 0/0 1/1 0/0 .text
 * setVertexData__15J3DVertexBufferFP13J3DVertexData            */
void J3DVertexBuffer::setVertexData(J3DVertexData* pVtxData) {
    mVtxData = pVtxData;
    mVtxPosArray[0] = pVtxData->getVtxPosArray();
    mVtxNrmArray[0] = pVtxData->getVtxNrmArray();
    mVtxColArray[0] = pVtxData->getVtxColorArray(0);
    mVtxPosArray[1] = NULL;
    mVtxNrmArray[1] = NULL;
    mVtxColArray[1] = NULL;

    mTransformedVtxPosArray[0] = pVtxData->getVtxPosArray();
    mTransformedVtxNrmArray[0] = pVtxData->getVtxNrmArray();
    mTransformedVtxPosArray[1] = NULL;
    mTransformedVtxNrmArray[1] = NULL;

    frameInit();
}

/* 80310FD8-80311030 30B918 0058+00 0/0 3/3 0/0 .text            init__15J3DVertexBufferFv */
void J3DVertexBuffer::init() {
    mVtxData = NULL;

    mVtxPosArray[1] = NULL;
    mVtxPosArray[0] = NULL;

    mVtxNrmArray[1] = NULL;
    mVtxNrmArray[0] = NULL;

    mVtxColArray[1] = NULL;
    mVtxColArray[0] = NULL;

    mTransformedVtxPosArray[1] = NULL;
    mTransformedVtxPosArray[0] = NULL;

    mTransformedVtxNrmArray[1] = NULL;
    mTransformedVtxNrmArray[0] = NULL;

    mCurrentVtxPos = NULL;
    mCurrentVtxNrm = NULL;
    mCurrentVtxCol = NULL;

    frameInit();
}

/* 80311030-8031106C 30B970 003C+00 0/0 1/1 0/0 .text            __dt__15J3DVertexBufferFv */
J3DVertexBuffer::~J3DVertexBuffer() {}

/* 8031106C-80311090 30B9AC 0024+00 0/0 1/1 0/0 .text            setArray__15J3DVertexBufferCFv */
void J3DVertexBuffer::setArray() const {
    j3dSys.setVtxPos(mCurrentVtxPos);
    j3dSys.setVtxNrm(mCurrentVtxNrm);
    j3dSys.setVtxCol(mCurrentVtxCol);
}

/* 80311090-803111B0 30B9D0 0120+00 1/1 0/0 0/0 .text copyLocalVtxPosArray__15J3DVertexBufferFUl
 */
s32 J3DVertexBuffer::copyLocalVtxPosArray(u32 flag) {
    if (flag & 1) {
        for (int i = 0; i < 2; i++) {
            mVtxPosArray[i] = new (0x20) Vec[mVtxData->getVtxNum()];

            if (mVtxPosArray[i] == NULL) {
                return kJ3DError_Alloc;
            }
            memcpy(mVtxPosArray[i], mVtxData->getVtxPosArray(), mVtxData->getVtxNum() * 12);
            DCStoreRange(mVtxPosArray[i], mVtxData->getVtxNum() * 12);
        }
    } else {
        mVtxPosArray[0] = mVtxData->getVtxPosArray();

        if (mVtxPosArray[1] == NULL) {
            mVtxPosArray[1] = new (0x20) Vec[mVtxData->getVtxNum()];
            if (mVtxPosArray[1] == NULL) {
                return kJ3DError_Alloc;
            }
        }
        memcpy(mVtxPosArray[1], mVtxData->getVtxPosArray(), mVtxData->getVtxNum() * 12);
        DCStoreRange(mVtxPosArray[1], mVtxData->getVtxNum() * 12);
    }

    return kJ3DError_Success;
}

/* 803111B0-803112D0 30BAF0 0120+00 1/1 0/0 0/0 .text copyLocalVtxNrmArray__15J3DVertexBufferFUl
 */
s32 J3DVertexBuffer::copyLocalVtxNrmArray(u32 flag) {
    if (flag & 1) {
        for (int i = 0; i < 2; i++) {
            mVtxNrmArray[i] = new (0x20) VertexNormal[mVtxData->getNrmNum()];

            if (mVtxNrmArray[i] == NULL) {
                return kJ3DError_Alloc;
            }
            memcpy(mVtxNrmArray[i], mVtxData->getVtxNrmArray(), mVtxData->getNrmNum() * 12);
            DCStoreRange(mVtxNrmArray[i], mVtxData->getNrmNum() * 12);
        }
    } else {
        mVtxNrmArray[0] = mVtxData->getVtxNrmArray();

        if (mVtxNrmArray[1] == NULL) {
            mVtxNrmArray[1] = new (0x20) VertexNormal[mVtxData->getNrmNum()];
            if (mVtxNrmArray[1] == NULL) {
                return kJ3DError_Alloc;
            }
        }
        memcpy(mVtxNrmArray[1], mVtxData->getVtxNrmArray(), mVtxData->getNrmNum() * 12);
        DCStoreRange(mVtxNrmArray[1], mVtxData->getNrmNum() * 12);
    }

    return kJ3DError_Success;
}

/* 803112D0-80311478 30BC10 01A8+00 0/0 1/1 0/0 .text copyLocalVtxArray__15J3DVertexBufferFUl */
s32 J3DVertexBuffer::copyLocalVtxArray(u32 flag) {
    void* oldPosArray[2];
    void* oldNrmArray[2];

    for (int i = 0; i < 2; i++)
        oldPosArray[i] = mVtxPosArray[i];

    if (~flag & 2) {
        s32 ret = copyLocalVtxPosArray(flag);
        if (ret != 0) {
            for (int i = 0; i < 2; i++) {
                if (oldPosArray[i] != mVtxPosArray[i]) {
                    if (mVtxPosArray[i] != mVtxData->getVtxPosArray())
                        delete mVtxPosArray[i];
                    mVtxPosArray[i] = oldPosArray[i];
                }
            }
            return ret;
        }
    } else {
        mVtxPosArray[0] = mVtxPosArray[1] = mVtxData->getVtxPosArray();
    }

    for (int i = 0; i < 2; i++)
        oldNrmArray[i] = mVtxNrmArray[i];

    if (~flag & 4) {
        s32 ret = copyLocalVtxNrmArray(flag);
        if (ret != 0) {
            for (int i = 0; i < 2; i++) {
                if (oldPosArray[i] != mVtxPosArray[i]) {
                    if (mVtxPosArray[i] != mVtxData->getVtxPosArray())
                        delete mVtxPosArray[i];
                    mVtxPosArray[i] = oldPosArray[i];
                }
                if (oldNrmArray[i] != mVtxNrmArray[i]) {
                    if (mVtxNrmArray[i] != mVtxData->getVtxNrmArray())
                        delete mVtxNrmArray[i];
                    mVtxNrmArray[i] = oldNrmArray[i];
                }
            }
            return ret;
        }
    } else {
        mVtxNrmArray[0] = mVtxNrmArray[1] = mVtxData->getVtxNrmArray();
    }

    return kJ3DError_Success;
}

/* 80311478-8031152C 30BDB8 00B4+00 0/0 1/1 0/0 .text
 * allocTransformedVtxPosArray__15J3DVertexBufferFv             */
s32 J3DVertexBuffer::allocTransformedVtxPosArray() {
    if (mTransformedVtxPosArray[0] != NULL && mTransformedVtxPosArray[1] != NULL)
        return kJ3DError_Success;

    for (int i = 0; i < 2; i++) {
        if (i == 0 || mTransformedVtxPosArray[i] == NULL) {
            mTransformedVtxPosArray[i] = new (0x20) Vec[mVtxData->getVtxNum()];
            if (mTransformedVtxPosArray[i] == NULL)
                return kJ3DError_Alloc;
        }
    }

    return kJ3DError_Success;
}

/* 8031152C-803115E0 30BE6C 00B4+00 0/0 1/1 0/0 .text
 * allocTransformedVtxNrmArray__15J3DVertexBufferFv             */
s32 J3DVertexBuffer::allocTransformedVtxNrmArray() {
    if (mTransformedVtxNrmArray[0] != NULL && mTransformedVtxNrmArray[1] != NULL)
        return kJ3DError_Success;

    for (int i = 0; i < 2; i++) {
        if (i == 0 || mTransformedVtxNrmArray[i] == NULL) {
            mTransformedVtxNrmArray[i] = new (0x20) VertexNormal[mVtxData->getNrmNum()];
            if (mTransformedVtxNrmArray[i] == NULL)
                return kJ3DError_Alloc;
        }
    }

    return kJ3DError_Success;
}

/* 803115E0-803115F4 30BF20 0014+00 0/0 1/1 0/0 .text            __ct__14J3DDrawMtxDataFv */
J3DDrawMtxData::J3DDrawMtxData() {
    mEntryNum = 0;
    mDrawMtxFlag = NULL;
    mDrawMtxIndex = NULL;
}

/* 803115F4-80311630 30BF34 003C+00 0/0 2/2 0/0 .text            __dt__14J3DDrawMtxDataFv */
J3DDrawMtxData::~J3DDrawMtxData() {}
