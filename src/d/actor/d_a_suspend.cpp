/**
 * @file d_a_suspend.cpp
 * 
*/

#include "d/actor/d_a_suspend.h"
#include "d/d_procname.h"

/* 804D5118-804D51E0 000078 00C8+00 1/1 0/0 0/0 .text            create__7daSus_cFv */
int daSus_c::create() {
    s8 roomNo = fopAcM_GetRoomNo(this);

    if (roomNo < 0) {
        roomNo = getRoom();
    }

    u8 sw = getSw();
    u8 arg0 = getArg0();
    u8 arg1 = getArg1();

    if (getScale() != 0) {
        scale.x *= 1250.0f;
        scale.y *= 2500.0f;
        scale.z *= 1250.0f;
    } else {
        scale.x *= 125.0f;
        scale.y *= 250.0f;
        scale.z *= 125.0f;
    }

    newData(roomNo, current.pos, scale, sw, arg0, arg1);
    return cPhs_COMPLEATE_e;
}

/* 804D51E0-804D5234 000140 0054+00 1/0 0/0 0/0 .text            daSus_create__FP7daSus_c */
static int daSus_create(daSus_c* i_this) {
    fopAcM_SetupActor(i_this, daSus_c);

    return i_this->create();
}
/* ############################################################################################## */
/* 804D524C-804D526C -00001 0020+00 1/0 0/0 0/0 .data            daSus_METHODS */
static actor_method_class daSus_METHODS = {
    (process_method_func)daSus_create, NULL, NULL, NULL, NULL,
};

/* 804D526C-804D529C -00001 0030+00 0/0 0/0 1/0 .data            g_profile_SUSPEND */
extern actor_process_profile_definition g_profile_SUSPEND = {
    fpcLy_CURRENT_e,
    11,
    fpcPi_CURRENT_e,
    PROC_SUSPEND,
    &g_fpcLf_Method.base,
    sizeof(daSus_c),
    0,
    0,
    &g_fopAc_Method.base,
    763,
    &daSus_METHODS,
    0x60000,
    5,
    fopAc_CULLBOX_0_e,
};
