/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                       */
/*  \   \        Copyright (c) 2003-2009 Xilinx, Inc.                */
/*  /   /          All Right Reserved.                                 */
/* /---/   /\                                                         */
/* \   \  /  \                                                      */
/*  \___\/\___\                                                    */
/***********************************************************************/

/* This file is designed for use with ISim build 0x8ef4fb42 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "F:/workspace/FinishedProjects/CPUSingleCycle/ControlUnit.v";
static unsigned int ng1[] = {2U, 0U};
static unsigned int ng2[] = {0U, 0U};
static unsigned int ng3[] = {1U, 0U};
static unsigned int ng4[] = {35U, 0U};
static int ng5[] = {1, 0};
static unsigned int ng6[] = {43U, 0U};
static unsigned int ng7[] = {4U, 0U};
static unsigned int ng8[] = {13U, 0U};
static int ng9[] = {0, 0};
static unsigned int ng10[] = {12U, 0U};
static unsigned int ng11[] = {8U, 0U};
static unsigned int ng12[] = {63U, 0U};
static unsigned int ng13[] = {32U, 0U};



static void Always_45_0(char *t0)
{
    char t7[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    int t6;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    unsigned int t13;
    int t14;

LAB0:    t1 = (t0 + 2364U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(45, ng0);
    t2 = (t0 + 2560);
    *((int *)t2) = 1;
    t3 = (t0 + 2392);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(45, ng0);

LAB5:    xsi_set_current_line(47, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t0 + 920);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 2);
    xsi_set_current_line(48, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1564);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(49, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1196);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(50, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1288);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(51, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1380);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(52, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 1472);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(53, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 1012);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(54, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 1656);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(55, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1748);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(56, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1104);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(57, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 1840);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(59, ng0);
    t2 = (t0 + 600U);
    t3 = *((char **)t2);

LAB6:    t2 = ((char*)((ng4)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 6, t2, 6);
    if (t6 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng6)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 6, t2, 6);
    if (t6 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng7)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 6, t2, 6);
    if (t6 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng8)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 6, t2, 6);
    if (t6 == 1)
        goto LAB13;

LAB14:    t2 = ((char*)((ng10)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 6, t2, 6);
    if (t6 == 1)
        goto LAB15;

LAB16:    t2 = ((char*)((ng11)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 6, t2, 6);
    if (t6 == 1)
        goto LAB17;

LAB18:    t2 = ((char*)((ng1)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 6, t2, 6);
    if (t6 == 1)
        goto LAB19;

LAB20:    t2 = ((char*)((ng12)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 6, t2, 6);
    if (t6 == 1)
        goto LAB21;

LAB22:    t2 = ((char*)((ng13)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 6, t2, 6);
    if (t6 == 1)
        goto LAB23;

LAB24:
LAB25:    goto LAB2;

LAB7:    xsi_set_current_line(60, ng0);

LAB26:    xsi_set_current_line(61, ng0);
    t4 = ((char*)((ng2)));
    t5 = (t0 + 920);
    t8 = (t0 + 920);
    t9 = (t8 + 44U);
    t10 = *((char **)t9);
    t11 = ((char*)((ng5)));
    xsi_vlog_generic_convert_bit_index(t7, t10, 2, t11, 32, 1);
    t12 = (t7 + 4);
    t13 = *((unsigned int *)t12);
    t14 = (!(t13));
    if (t14 == 1)
        goto LAB27;

LAB28:    xsi_set_current_line(62, ng0);
    t2 = ((char*)((ng3)));
    t4 = (t0 + 1564);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);
    xsi_set_current_line(63, ng0);
    t2 = ((char*)((ng2)));
    t4 = (t0 + 1472);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);
    xsi_set_current_line(64, ng0);
    t2 = ((char*)((ng3)));
    t4 = (t0 + 1288);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);
    xsi_set_current_line(65, ng0);
    t2 = ((char*)((ng2)));
    t4 = (t0 + 1012);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);
    goto LAB25;

LAB9:    xsi_set_current_line(68, ng0);

LAB29:    xsi_set_current_line(69, ng0);
    t4 = ((char*)((ng2)));
    t5 = (t0 + 920);
    t8 = (t0 + 920);
    t9 = (t8 + 44U);
    t10 = *((char **)t9);
    t11 = ((char*)((ng5)));
    xsi_vlog_generic_convert_bit_index(t7, t10, 2, t11, 32, 1);
    t12 = (t7 + 4);
    t13 = *((unsigned int *)t12);
    t14 = (!(t13));
    if (t14 == 1)
        goto LAB30;

LAB31:    xsi_set_current_line(70, ng0);
    t2 = ((char*)((ng3)));
    t4 = (t0 + 1564);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);
    xsi_set_current_line(71, ng0);
    t2 = ((char*)((ng3)));
    t4 = (t0 + 1380);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);
    xsi_set_current_line(72, ng0);
    t2 = ((char*)((ng2)));
    t4 = (t0 + 1656);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);
    goto LAB25;

LAB11:    xsi_set_current_line(75, ng0);

LAB32:    xsi_set_current_line(76, ng0);
    t4 = ((char*)((ng3)));
    t5 = (t0 + 920);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 2);
    xsi_set_current_line(77, ng0);
    t2 = ((char*)((ng3)));
    t4 = (t0 + 1196);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);
    xsi_set_current_line(78, ng0);
    t2 = ((char*)((ng2)));
    t4 = (t0 + 1656);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);
    goto LAB25;

LAB13:    xsi_set_current_line(81, ng0);

LAB33:    xsi_set_current_line(82, ng0);
    t4 = ((char*)((ng3)));
    t5 = (t0 + 920);
    t8 = (t0 + 920);
    t9 = (t8 + 44U);
    t10 = *((char **)t9);
    t11 = ((char*)((ng9)));
    xsi_vlog_generic_convert_bit_index(t7, t10, 2, t11, 32, 1);
    t12 = (t7 + 4);
    t13 = *((unsigned int *)t12);
    t14 = (!(t13));
    if (t14 == 1)
        goto LAB34;

LAB35:    xsi_set_current_line(83, ng0);
    t2 = ((char*)((ng3)));
    t4 = (t0 + 1564);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);
    xsi_set_current_line(84, ng0);
    t2 = ((char*)((ng3)));
    t4 = (t0 + 1748);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);
    xsi_set_current_line(85, ng0);
    t2 = ((char*)((ng2)));
    t4 = (t0 + 1012);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);
    goto LAB25;

LAB15:    xsi_set_current_line(88, ng0);

LAB36:    xsi_set_current_line(89, ng0);
    t4 = ((char*)((ng3)));
    t5 = (t0 + 920);
    t8 = (t0 + 920);
    t9 = (t8 + 44U);
    t10 = *((char **)t9);
    t11 = ((char*)((ng9)));
    xsi_vlog_generic_convert_bit_index(t7, t10, 2, t11, 32, 1);
    t12 = (t7 + 4);
    t13 = *((unsigned int *)t12);
    t14 = (!(t13));
    if (t14 == 1)
        goto LAB37;

LAB38:    xsi_set_current_line(90, ng0);
    t2 = ((char*)((ng3)));
    t4 = (t0 + 1564);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);
    xsi_set_current_line(91, ng0);
    t2 = ((char*)((ng3)));
    t4 = (t0 + 1748);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);
    xsi_set_current_line(92, ng0);
    t2 = ((char*)((ng2)));
    t4 = (t0 + 1012);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);
    goto LAB25;

LAB17:    xsi_set_current_line(95, ng0);

LAB39:    xsi_set_current_line(96, ng0);
    t4 = ((char*)((ng3)));
    t5 = (t0 + 920);
    t8 = (t0 + 920);
    t9 = (t8 + 44U);
    t10 = *((char **)t9);
    t11 = ((char*)((ng9)));
    xsi_vlog_generic_convert_bit_index(t7, t10, 2, t11, 32, 1);
    t12 = (t7 + 4);
    t13 = *((unsigned int *)t12);
    t14 = (!(t13));
    if (t14 == 1)
        goto LAB40;

LAB41:    xsi_set_current_line(97, ng0);
    t2 = ((char*)((ng3)));
    t4 = (t0 + 1564);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);
    xsi_set_current_line(98, ng0);
    t2 = ((char*)((ng2)));
    t4 = (t0 + 1012);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);
    goto LAB25;

LAB19:    xsi_set_current_line(101, ng0);

LAB42:    xsi_set_current_line(102, ng0);
    t4 = ((char*)((ng3)));
    t5 = (t0 + 1104);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(103, ng0);
    t2 = ((char*)((ng2)));
    t4 = (t0 + 1472);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);
    xsi_set_current_line(104, ng0);
    t2 = ((char*)((ng2)));
    t4 = (t0 + 1380);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);
    xsi_set_current_line(105, ng0);
    t2 = ((char*)((ng2)));
    t4 = (t0 + 1288);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);
    xsi_set_current_line(106, ng0);
    t2 = ((char*)((ng3)));
    t4 = (t0 + 1656);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 1, 0LL);
    goto LAB25;

LAB21:    xsi_set_current_line(109, ng0);

LAB43:    xsi_set_current_line(110, ng0);
    t4 = ((char*)((ng2)));
    t5 = (t0 + 1840);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(111, ng0);
    t2 = ((char*)((ng2)));
    t4 = (t0 + 1656);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);
    goto LAB25;

LAB23:    xsi_set_current_line(114, ng0);

LAB44:    goto LAB25;

LAB27:    xsi_vlogvar_assign_value(t5, t4, 0, *((unsigned int *)t7), 1);
    goto LAB28;

LAB30:    xsi_vlogvar_assign_value(t5, t4, 0, *((unsigned int *)t7), 1);
    goto LAB31;

LAB34:    xsi_vlogvar_assign_value(t5, t4, 0, *((unsigned int *)t7), 1);
    goto LAB35;

LAB37:    xsi_vlogvar_assign_value(t5, t4, 0, *((unsigned int *)t7), 1);
    goto LAB38;

LAB40:    xsi_vlogvar_assign_value(t5, t4, 0, *((unsigned int *)t7), 1);
    goto LAB41;

}


extern void work_m_00000000003179188335_1938225339_init()
{
	static char *pe[] = {(void *)Always_45_0};
	xsi_register_didat("work_m_00000000003179188335_1938225339", "isim/CPU_test_isim_beh.exe.sim/work/m_00000000003179188335_1938225339.didat");
	xsi_register_executes(pe);
}
