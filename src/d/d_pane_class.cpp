//
// Generated By: dol2asm
// Translation Unit: d/d_pane_class
//

#include "d/d_pane_class.h"
#include "JSystem/J2DGraph/J2DOrthoGraph.h"
#include "JSystem/J2DGraph/J2DPicture.h"
#include "JSystem/J2DGraph/J2DScreen.h"
#include "JSystem/J2DGraph/J2DTextBox.h"
#include "JSystem/J2DGraph/J2DWindow.h"
#include "JSystem/JKernel/JKRArchive.h"
#include "JSystem/JKernel/JKRExpHeap.h"
#include "JSystem/JSupport/JSUMemoryStream.h"
#include "d/d_lib.h"
#include "m_Do/m_Do_ext.h"
#include "m_Do/m_Do_graphic.h"

/* 80253930-80253984 24E270 0054+00 0/0 11/11 0/0 .text            __ct__8CPaneMgrFv */
CPaneMgr::CPaneMgr() {
    mpFirstStackAlpha = NULL;
    mpFirstStackSize = NULL;
}

/* 80253984-80253A18 24E2C4 0094+00 0/0 58/58 2/2 .text
 * __ct__8CPaneMgrFP9J2DScreenUxUcP10JKRExpHeap                 */
CPaneMgr::CPaneMgr(J2DScreen* p_scrn, u64 tag, u8 flags, JKRExpHeap* p_heap) {
    J2DPane* pane = p_scrn->search(tag);
    mFlags = flags;
    initiate(pane, p_heap);
}

/* 80253A18-80253AB4 24E358 009C+00 1/0 11/11 0/0 .text            __dt__8CPaneMgrFv */
CPaneMgr::~CPaneMgr() {
    if (mpFirstStackSize) {
        heap->free(mpFirstStackSize);
        mpFirstStackSize = NULL;
    }
    if (mpFirstStackAlpha) {
        heap->free(mpFirstStackAlpha);
        mpFirstStackAlpha = NULL;
    }
}

/* 80253AB4-80253B2C 24E3F4 0078+00 1/0 0/0 0/0 .text            setAlpha__8CPaneMgrFUc */
void CPaneMgr::setAlpha(u8 alpha) {
    if (mFlags & 2) {
        field_0x10 = (u8*)mpFirstStackAlpha;
        childPaneSetAlpha(getPanePtr()->getFirstChildPane(), alpha);
    }

    getPanePtr()->setAlpha(alpha);
}

/* 80253B2C-80253C08 24E46C 00DC+00 0/0 3/3 0/0 .text            reinit__8CPaneMgrFv */
void CPaneMgr::reinit() {
    mInitPos.x = getPanePtr()->getBounds().i.x;
    mInitPos.y = getPanePtr()->getBounds().i.y;

    mGlobalPos.x = getGlobalPosX();
    mGlobalPos.y = getGlobalPosY();

    mInitSize.x = getPanePtr()->getWidth();
    mInitSize.y = getPanePtr()->getHeight();

    mInitScale.x = getPanePtr()->getScaleX();
    mInitScale.y = getPanePtr()->getScaleY();

    mInitTrans.x = getPanePtr()->getTranslateX();
    mInitTrans.y = getPanePtr()->getTranslateY();

    mRotateZ = getPanePtr()->getRotateZ();
    mRotateOffset.x = getPanePtr()->getRotOffsetX();
    mRotateOffset.y = getPanePtr()->getRotOffsetY();
}

/* 80253C08-80254000 24E548 03F8+00 1/1 0/0 0/0 .text initiate__8CPaneMgrFP7J2DPaneP10JKRExpHeap
 */
void CPaneMgr::initiate(J2DPane* p_pane, JKRExpHeap* p_heap) {
    mPane = p_pane;

    if (p_heap) {
        heap = p_heap;
    } else {
        heap = (JKRExpHeap*)mDoExt_getCurrentHeap();
    }

    mpFirstStackAlpha = NULL;
    field_0x10 = NULL;
    mpFirstStackSize = NULL;
    field_0x20 = NULL;
    mChildPaneCount = 0;

    if (mFlags) {
        childPaneCount(getPanePtr()->getFirstChildPane());
        if (mFlags & 1) {
            mpFirstStackSize = heap->alloc(mChildPaneCount * 12, 0x20);
            field_0x20 = (s16*)mpFirstStackSize;
            childPaneGetSize(getPanePtr()->getFirstChildPane());
        }
        if (mFlags & 2) {
            mpFirstStackAlpha = heap->alloc(mChildPaneCount, 0x20);
            field_0x10 = (u8*)mpFirstStackAlpha;
            childPaneGetAlpha(getPanePtr()->getFirstChildPane());
        }
    }

    mInitPos.x = p_pane->getBounds().i.x;
    mInitPos.y = p_pane->getBounds().i.y;

    mGlobalPos.x = getGlobalPosX();
    mGlobalPos.y = getGlobalPosY();

    mInitSize.x = p_pane->getWidth();
    mInitSize.y = p_pane->getHeight();

    mInitScale.x = getPanePtr()->getScaleX();
    mInitScale.y = getPanePtr()->getScaleY();

    mInitTrans.x = getPanePtr()->getTranslateX();
    mInitTrans.y = getPanePtr()->getTranslateY();

    mRotateZ = p_pane->getRotateZ();
    mRotateOffset.x = p_pane->getRotOffsetX();
    mRotateOffset.y = p_pane->getRotOffsetY();

    if (p_pane->getKind() == 'PAN2') {
        mInitAlpha = 255;
    } else {
        mInitAlpha = p_pane->getAlpha();
    }

    field_0x60 = 0;
    field_0x62 = 0;
    mScaleAnime = 0;
    field_0x66 = 0;
    field_0x68 = 0;
    mColorAnime = 0;
    mAlphaTimer = 0;

    switch (getPanePtr()->getKind()) {
    case 'WIN1':
    case 'WIN2':
        mInitWhite.set(((J2DWindow*)mPane)->getWhite());
        mInitBlack.set(((J2DWindow*)mPane)->getBlack());
        return;
    case 'PIC1':
    case 'PIC2':
        mInitWhite.set(((J2DPicture*)mPane)->getWhite());
        mInitBlack.set(((J2DPicture*)mPane)->getBlack());
        return;
    case 'TBX1':
    case 'TBX2':
        mInitWhite.set(((J2DTextBox*)mPane)->getWhite());
        mInitBlack.set(((J2DTextBox*)mPane)->getBlack());
        return;
    }
    mInitWhite.set(255, 255, 255, 255);
    mInitBlack.set(0, 0, 0, 0);
}

/* 80254000-8025400C 24E940 000C+00 0/0 1/0 0/0 .text            getBlack__9J2DWindowCFv */
JUtility::TColor J2DWindow::getBlack() const {
    return mBlack;
}

/* 8025400C-80254018 24E94C 000C+00 0/0 1/0 0/0 .text            getWhite__9J2DWindowCFv */
JUtility::TColor J2DWindow::getWhite() const {
    return mWhite;
}

/* 80254018-80254134 24E958 011C+00 1/1 0/0 0/0 .text childPaneGetSize__8CPaneMgrFP7J2DPane */
void CPaneMgr::childPaneGetSize(J2DPane* p_pane) {
    if (p_pane != NULL) {
        field_0x20[0] = p_pane->getBounds().i.x;
        field_0x20[1] = p_pane->getBounds().i.y;
        field_0x20[2] = p_pane->getWidth();
        field_0x20[3] = p_pane->getHeight();
        field_0x20[4] = p_pane->getRotOffsetX();
        field_0x20[5] = p_pane->getRotOffsetY();
        field_0x20 += 6;

        childPaneGetSize(p_pane->getFirstChildPane());
        childPaneGetSize(p_pane->getNextChildPane());
    }
}

/* 80254134-802542E8 24EA74 01B4+00 1/1 0/0 0/0 .text childPaneSetSize__8CPaneMgrFP7J2DPaneff */
void CPaneMgr::childPaneSetSize(J2DPane* p_pane, f32 param_1, f32 param_2) {
    if (p_pane != NULL) {
        p_pane->move(field_0x20[0] * param_1, field_0x20[1] * param_2);
        p_pane->resize(field_0x20[2] * param_1, field_0x20[3] * param_2);

        if (p_pane->getRotateZ() != 0.0f) {
            p_pane->rotate(field_0x20[4] * param_1, field_0x20[5] * param_2, ROTATE_Z, p_pane->getRotateZ());
        }

        field_0x20 += 6;

        childPaneSetSize(p_pane->getFirstChildPane(), param_1, param_2);
        childPaneSetSize(p_pane->getNextChildPane(), param_1, param_2);
    }
}

/* 802542E8-80254364 24EC28 007C+00 2/2 18/18 0/0 .text            getGlobalPosX__8CPaneMgrFv */
f32 CPaneMgr::getGlobalPosX() {
    f32 posX = getPosX();
    for (J2DPane* pane = getPanePtr()->getParentPane(); pane != NULL;
        pane = pane->getParentPane()) {
        posX += pane->getBounds().i.x;
    }
    return posX;
}

/* 80254364-802543E0 24ECA4 007C+00 2/2 15/15 0/0 .text            getGlobalPosY__8CPaneMgrFv */
f32 CPaneMgr::getGlobalPosY() {
    f32 posY = getPosY();
    for (J2DPane* pane = getPanePtr()->getParentPane(); pane != NULL;
        pane = pane->getParentPane()) {
        posY += pane->getBounds().i.y;
    }
    return posY;
}

/* 802543E0-80254408 24ED20 0028+00 0/0 1/0 0/0 .text setWhite__9J2DWindowFQ28JUtility6TColor */
bool J2DWindow::setWhite(JUtility::TColor white) {
    mWhite = white;
    return true;
}

/* 80254408-80254430 24ED48 0028+00 0/0 1/0 0/0 .text setBlack__10J2DTextBoxFQ28JUtility6TColor */
bool J2DTextBox::setBlack(JUtility::TColor black) {
    mBlackColor = black;
    return true;
}

/* 80254430-80254458 24ED70 0028+00 0/0 1/0 0/0 .text setBlack__9J2DWindowFQ28JUtility6TColor */
bool J2DWindow::setBlack(JUtility::TColor black) {
    mBlack = black;
    return true;
}

/* 80254458-80254568 24ED98 0110+00 1/1 7/7 0/0 .text
 * setBlackWhite__8CPaneMgrFQ28JUtility6TColorQ28JUtility6TColor */
void CPaneMgr::setBlackWhite(JUtility::TColor black, JUtility::TColor white) {
    switch (mPane->getKind()) {
    case 'WIN1':
    case 'WIN2':
        ((J2DWindow*)mPane)->setBlackWhite(black, white);
        break;
    case 'PIC1':
    case 'PIC2':
        ((J2DPicture*)mPane)->setBlackWhite(black, white);
        break;
    case 'TBX1':
    case 'TBX2':
        ((J2DTextBox*)mPane)->setBlackWhite(black, white);
        break;
    }
}

/* 80254568-802545B0 24EEA8 0048+00 0/0 1/0 0/0 .text
 * setBlackWhite__9J2DWindowFQ28JUtility6TColorQ28JUtility6TColor */
bool J2DWindow::setBlackWhite(JUtility::TColor black, JUtility::TColor white) {
    mBlack = black;
    mWhite = white;
    return true;
}

/* 802545B0-80254638 24EEF0 0088+00 0/0 51/51 3/3 .text            paneTrans__8CPaneMgrFff */
void CPaneMgr::paneTrans(f32 x, f32 y) {
    f32 moveX = x + getInitCenterPosX() - getSizeX() * 0.5f;
    f32 moveY = y + getInitCenterPosY() - getSizeY() * 0.5f;
    getPanePtr()->move(moveX, moveY);
}

/* 80254638-802547CC 24EF78 0194+00 0/0 5/5 0/0 .text            paneScale__8CPaneMgrFff */
void CPaneMgr::paneScale(f32 x, f32 y) {
    f32 moveX = getPosX() + getSizeX() * 0.5f;
    f32 moveY = getPosY() + getSizeY() * 0.5f;

    getPanePtr()->resize(mInitSize.x * x, mInitSize.y * y);

    f32 moveX2 = moveX - getSizeX() * 0.5f;
    f32 moveY2 = moveY - getSizeY() * 0.5f;
    getPanePtr()->move(moveX2, moveY2);

    if (mRotateZ != 0.0f) {
        getPanePtr()->rotate(mRotateOffset.x * x, mRotateOffset.y * y, ROTATE_Z, getRotateZ());
    }

    if (mFlags & 1) {
        field_0x20 = (s16*)mpFirstStackSize;
        childPaneSetSize(getPanePtr()->getFirstChildPane(), x, y);
    }
}

/* 802547CC-802548BC 24F10C 00F0+00 0/0 10/10 0/0 .text            scaleAnime__8CPaneMgrFsffUc */
bool CPaneMgr::scaleAnime(s16 param_0, f32 param_1, f32 param_2, u8 param_3) {
    if (mScaleAnime < param_0 - 1) {
        mScaleAnime++;
        f32 rate = rateCalc(param_0, mScaleAnime, param_3);
        f32 tmp = param_1 + rate * (param_2 - param_1);
        getPanePtr()->scale(mInitScale.x * tmp, mInitScale.y * tmp);
    } else {
        mScaleAnime = param_0;
        getPanePtr()->scale(mInitScale.x * param_2, mInitScale.y * param_2);
        return true;
    }
    return false;
}

/* 802548BC-80254C90 24F1FC 03D4+00 0/0 4/4 0/0 .text
 * colorAnime__8CPaneMgrFsQ28JUtility6TColorQ28JUtility6TColorQ28JUtility6TColorQ28JUtility6TColorUc
 */
bool CPaneMgr::colorAnime(s16 anmTimer, JUtility::TColor startBlack, JUtility::TColor endBlack,
                              JUtility::TColor startWhite, JUtility::TColor endWhite, u8 calcType) {
    if (mColorAnime < anmTimer - 1) {
        mColorAnime++;
        f32 rate = rateCalc(anmTimer, mColorAnime, calcType);

        JUtility::TColor black;
        JUtility::TColor white;

        if (startBlack.r != endBlack.r) {
            black.r = startBlack.r + rate * (endBlack.r - startBlack.r);
        } else {
            black.r = endBlack.r;
        }

        if (startBlack.g != endBlack.g) {
            black.g = startBlack.g + rate * (endBlack.g - startBlack.g);
        } else {
            black.g = endBlack.g;
        }

        if (startBlack.b != endBlack.b) {
            black.b = startBlack.b + rate * (endBlack.b - startBlack.b);
        } else {
            black.b = endBlack.b;
        }

        if (startBlack.a != endBlack.a) {
            black.a = startBlack.a + rate * (endBlack.a - startBlack.a);
        } else {
            black.a = endBlack.a;
        }


        if (startWhite.r != endWhite.r) {
            white.r = startWhite.r + rate * (endWhite.r - startWhite.r);
        } else {
            white.r = endWhite.r;
        }

        if (startWhite.g != endWhite.g) {
            white.g  = startWhite.g + rate * (endWhite.g - startWhite.g);
        } else {
            white.g = endWhite.g;
        }

        if (startWhite.b != endWhite.b) {
            white.b = startWhite.b + rate * (endWhite.b - startWhite.b);
        } else {
            white.b = endWhite.b;
        }

        if (startWhite.a != endWhite.a) {
            white.a = startWhite.a + rate * (endWhite.a - startWhite.a);
        } else {
            white.a = endWhite.a;
        }

        setBlackWhite(black, white);
    } else {
        mColorAnime = anmTimer;
        setBlackWhite(endBlack, endWhite);
        return true;
    }

    return false;
}

/* 80254C90-80254EBC 24F5D0 022C+00 1/1 9/9 0/0 .text
 * getGlobalVtx__8CPaneMgrFP7J2DPanePA3_A4_fUcbs                */
Vec CPaneMgr::getGlobalVtx(J2DPane* p_pane, Mtx* param_1, u8 param_2, bool param_3,
                                s16 param_4) {
    Mtx m;
    MtxP mp = (MtxP)param_1;
    J2DPane* parent = p_pane->getParentPane();
    
    J2DOrthoGraph ortho(0.0f, 0.0f, 608.0f, 448.0f, -1.0f, 1.0f);
    ortho.setOrtho(mDoGph_gInf_c::getMinXF(), mDoGph_gInf_c::getMinYF(), mDoGph_gInf_c::getWidthF(), mDoGph_gInf_c::getHeightF(), -1.0f, 1.0f);

    if (parent != NULL) {
        getGlobalVtx(parent, param_1, param_2, param_3, param_4);
        MTXCopy(*param_1, m);
        MTXConcat(m, *p_pane->getMtx(), *param_1);
    } else {
        p_pane->calcMtx();
        MTXCopy(*p_pane->getMtx(), *param_1);
    }

    Vec outVec;
    if (param_2 >= 4) {
        outVec.x = 0.0f;
        outVec.y = 0.0f;
        outVec.z = 0.0f;

        return outVec;
    } else {
        JGeometry::TBox2<f32> bounds = *getBounds(p_pane);
        f32 x2 = (param_2 & 1) ? bounds.f.x : bounds.i.x;
        f32 y2 = (param_2 & 2) ? bounds.f.y : bounds.i.y;

        outVec.x = mp[0][3] + (x2 * mp[0][0] + (y2 * mp[0][1]));
        outVec.y = mp[1][3] + (x2 * mp[1][0] + (y2 * mp[1][1]));
        outVec.z = mp[2][3] + (x2 * mp[2][0] + (y2 * mp[2][1]));

        return outVec;
    }
}

/* 80254EBC-80254FB8 24F7FC 00FC+00 0/0 56/56 1/1 .text tCenter__8CPaneMgrFP7J2DPanebs
 */
Vec CPaneMgr::getGlobalVtxCenter(J2DPane* p_pane, bool param_1, s16) {
    Mtx m;
    Vec vtxCenter;
    Vec v1 = getGlobalVtx(p_pane, &m, 0, param_1, 0);
    Vec v2 = getGlobalVtx(p_pane, &m, 3, param_1, 0);
    
    vtxCenter.x = (v1.x + v2.x) * 0.5f;
    vtxCenter.y = (v1.y + v2.y) * 0.5f;
    vtxCenter.z = (v1.z + v2.z) * 0.5f;

    return vtxCenter;
}

/* ############################################################################################## */
/* 80430748-80430758 05D468 0010+00 2/2 0/0 0/0 .bss             static_mBounds */
static JGeometry::TBox2<f32> static_mBounds(0.0f, 0.0f, 0.0f, 0.0f);

/* 80254FB8-802550E8 24F8F8 0130+00 1/1 0/0 0/0 .text            getBounds__8CPaneMgrFP7J2DPane */
JGeometry::TBox2<f32>* CPaneMgr::getBounds(J2DPane* p_pane) {
    JGeometry::TBox2<f32> bounds(p_pane->getBounds());
    
    J2DPane* parent = p_pane->getParentPane();
    if (parent != NULL) {
        JGeometry::TBox2<f32>* parentBounds = getBounds(parent);
        f32 y = parentBounds->i.y;

        JGeometry::TBox2<f32>* parentBounds2 = getBounds(parent);

        bounds.addPos(JGeometry::TVec2<f32>(parentBounds2->i.x, y));
    }

    f32 transX = -p_pane->getTranslateX();
    f32 transY = -p_pane->getTranslateY();
    bounds.addPos(JGeometry::TVec2<f32>(transX, transY));

    static_mBounds = bounds;
    return &static_mBounds;
}

/* 802550E8-8025512C 24FA28 0044+00 0/0 54/54 3/3 .text dPaneClass_showNullPane__FP9J2DScreen */
void dPaneClass_showNullPane(J2DScreen* p_scrn) {
    if (p_scrn) {
        dPaneClass_showNullPane(p_scrn->search('ROOT'));
    }
}

/* 8025512C-80255184 24FA6C 0058+00 1/1 0/0 0/0 .text            dPaneClass_showNullPane__FP7J2DPane
 */
void dPaneClass_showNullPane(J2DPane* p_pane) {
    if (p_pane) {
        if (!p_pane->isVisible()) {
            p_pane->show();
        }
        dPaneClass_showNullPane(p_pane->getFirstChildPane());
        dPaneClass_showNullPane(p_pane->getNextChildPane());
    }
}

/* 80255184-802552B8 24FAC4 0134+00 0/0 1/1 0/0 .text
 * dPaneClass_setPriority__FPPvP7JKRHeapP9J2DScreenPCcUlP10JKRArchive */
bool dPaneClass_setPriority(void** i_data, JKRHeap* p_heap, J2DScreen* p_screen,
                                char const* resName, u32 param_4, JKRArchive* p_archive) {
    if (p_archive == NULL) {
        return false;
    }

    u32 size = dLib_getExpandSizeFromAramArchive((JKRAramArchive*)p_archive, resName);
    if (size == 0) {
        return false;
    }

    *i_data = p_heap->alloc(size, 0x20);
    u32 len = p_archive->readResource(*i_data, size, resName);

    if (len != 0) {
        JSUMemoryInputStream stream(*i_data, len);
        return p_screen->setPriority(&stream, param_4, p_archive);
    }

    return false;
}