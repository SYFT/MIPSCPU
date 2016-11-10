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
static const char *ng0 = "F:/workspace/verilog/CPUSingleCycle/DataMemory.v";
static int ng1[] = {31, 0};
static int ng2[] = {24, 0};
static int ng3[] = {1, 0};
static int ng4[] = {23, 0};
static int ng5[] = {16, 0};
static int ng6[] = {2, 0};
static int ng7[] = {15, 0};
static int ng8[] = {8, 0};
static int ng9[] = {3, 0};
static int ng10[] = {7, 0};
static int ng11[] = {0, 0};



static void Always_32_0(char *t0)
{
    char t14[8];
    char t23[8];
    char t24[8];
    char t25[8];
    char t48[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t11;
    char *t12;
    char *t13;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    char *t31;
    unsigned int t32;
    int t33;
    char *t34;
    unsigned int t35;
    int t36;
    int t37;
    char *t38;
    unsigned int t39;
    int t40;
    int t41;
    unsigned int t42;
    int t43;
    unsigned int t44;
    unsigned int t45;
    int t46;
    int t47;

LAB0:    t1 = (t0 + 1812U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(32, ng0);
    t2 = (t0 + 2152);
    *((int *)t2) = 1;
    t3 = (t0 + 1840);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(33, ng0);
    t4 = (t0 + 784U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB5;

LAB6:
LAB7:    goto LAB2;

LAB5:    xsi_set_current_line(33, ng0);

LAB8:    xsi_set_current_line(34, ng0);
    t11 = (t0 + 1288);
    t12 = (t11 + 36U);
    t13 = *((char **)t12);
    t15 = (t0 + 1288);
    t16 = (t15 + 44U);
    t17 = *((char **)t16);
    t18 = (t0 + 1288);
    t19 = (t18 + 40U);
    t20 = *((char **)t19);
    t21 = (t0 + 600U);
    t22 = *((char **)t21);
    xsi_vlog_generic_get_array_select_value(t14, 8, t13, t17, t20, 2, 1, t22, 32, 2);
    t21 = (t0 + 1196);
    t26 = (t0 + 1196);
    t27 = (t26 + 44U);
    t28 = *((char **)t27);
    t29 = ((char*)((ng1)));
    t30 = ((char*)((ng2)));
    xsi_vlog_convert_partindices(t23, t24, t25, ((int*)(t28)), 2, t29, 32, 1, t30, 32, 1);
    t31 = (t23 + 4);
    t32 = *((unsigned int *)t31);
    t33 = (!(t32));
    t34 = (t24 + 4);
    t35 = *((unsigned int *)t34);
    t36 = (!(t35));
    t37 = (t33 && t36);
    t38 = (t25 + 4);
    t39 = *((unsigned int *)t38);
    t40 = (!(t39));
    t41 = (t37 && t40);
    if (t41 == 1)
        goto LAB9;

LAB10:    xsi_set_current_line(35, ng0);
    t2 = (t0 + 1288);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = (t0 + 1288);
    t11 = (t5 + 44U);
    t12 = *((char **)t11);
    t13 = (t0 + 1288);
    t15 = (t13 + 40U);
    t16 = *((char **)t15);
    t17 = (t0 + 600U);
    t18 = *((char **)t17);
    t17 = ((char*)((ng3)));
    memset(t23, 0, 8);
    xsi_vlog_unsigned_add(t23, 32, t18, 32, t17, 32);
    xsi_vlog_generic_get_array_select_value(t14, 8, t4, t12, t16, 2, 1, t23, 32, 2);
    t19 = (t0 + 1196);
    t20 = (t0 + 1196);
    t21 = (t20 + 44U);
    t22 = *((char **)t21);
    t26 = ((char*)((ng4)));
    t27 = ((char*)((ng5)));
    xsi_vlog_convert_partindices(t24, t25, t48, ((int*)(t22)), 2, t26, 32, 1, t27, 32, 1);
    t28 = (t24 + 4);
    t6 = *((unsigned int *)t28);
    t33 = (!(t6));
    t29 = (t25 + 4);
    t7 = *((unsigned int *)t29);
    t36 = (!(t7));
    t37 = (t33 && t36);
    t30 = (t48 + 4);
    t8 = *((unsigned int *)t30);
    t40 = (!(t8));
    t41 = (t37 && t40);
    if (t41 == 1)
        goto LAB11;

LAB12:    xsi_set_current_line(36, ng0);
    t2 = (t0 + 1288);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = (t0 + 1288);
    t11 = (t5 + 44U);
    t12 = *((char **)t11);
    t13 = (t0 + 1288);
    t15 = (t13 + 40U);
    t16 = *((char **)t15);
    t17 = (t0 + 600U);
    t18 = *((char **)t17);
    t17 = ((char*)((ng6)));
    memset(t23, 0, 8);
    xsi_vlog_unsigned_add(t23, 32, t18, 32, t17, 32);
    xsi_vlog_generic_get_array_select_value(t14, 8, t4, t12, t16, 2, 1, t23, 32, 2);
    t19 = (t0 + 1196);
    t20 = (t0 + 1196);
    t21 = (t20 + 44U);
    t22 = *((char **)t21);
    t26 = ((char*)((ng7)));
    t27 = ((char*)((ng8)));
    xsi_vlog_convert_partindices(t24, t25, t48, ((int*)(t22)), 2, t26, 32, 1, t27, 32, 1);
    t28 = (t24 + 4);
    t6 = *((unsigned int *)t28);
    t33 = (!(t6));
    t29 = (t25 + 4);
    t7 = *((unsigned int *)t29);
    t36 = (!(t7));
    t37 = (t33 && t36);
    t30 = (t48 + 4);
    t8 = *((unsigned int *)t30);
    t40 = (!(t8));
    t41 = (t37 && t40);
    if (t41 == 1)
        goto LAB13;

LAB14:    xsi_set_current_line(37, ng0);
    t2 = (t0 + 1288);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = (t0 + 1288);
    t11 = (t5 + 44U);
    t12 = *((char **)t11);
    t13 = (t0 + 1288);
    t15 = (t13 + 40U);
    t16 = *((char **)t15);
    t17 = (t0 + 600U);
    t18 = *((char **)t17);
    t17 = ((char*)((ng9)));
    memset(t23, 0, 8);
    xsi_vlog_unsigned_add(t23, 32, t18, 32, t17, 32);
    xsi_vlog_generic_get_array_select_value(t14, 8, t4, t12, t16, 2, 1, t23, 32, 2);
    t19 = (t0 + 1196);
    t20 = (t0 + 1196);
    t21 = (t20 + 44U);
    t22 = *((char **)t21);
    t26 = ((char*)((ng10)));
    t27 = ((char*)((ng11)));
    xsi_vlog_convert_partindices(t24, t25, t48, ((int*)(t22)), 2, t26, 32, 1, t27, 32, 1);
    t28 = (t24 + 4);
    t6 = *((unsigned int *)t28);
    t33 = (!(t6));
    t29 = (t25 + 4);
    t7 = *((unsigned int *)t29);
    t36 = (!(t7));
    t37 = (t33 && t36);
    t30 = (t48 + 4);
    t8 = *((unsigned int *)t30);
    t40 = (!(t8));
    t41 = (t37 && t40);
    if (t41 == 1)
        goto LAB15;

LAB16:    goto LAB7;

LAB9:    t42 = *((unsigned int *)t25);
    t43 = (t42 + 0);
    t44 = *((unsigned int *)t23);
    t45 = *((unsigned int *)t24);
    t46 = (t44 - t45);
    t47 = (t46 + 1);
    xsi_vlogvar_wait_assign_value(t21, t14, t43, *((unsigned int *)t24), t47, 0LL);
    goto LAB10;

LAB11:    t9 = *((unsigned int *)t48);
    t43 = (t9 + 0);
    t10 = *((unsigned int *)t24);
    t32 = *((unsigned int *)t25);
    t46 = (t10 - t32);
    t47 = (t46 + 1);
    xsi_vlogvar_wait_assign_value(t19, t14, t43, *((unsigned int *)t25), t47, 0LL);
    goto LAB12;

LAB13:    t9 = *((unsigned int *)t48);
    t43 = (t9 + 0);
    t10 = *((unsigned int *)t24);
    t32 = *((unsigned int *)t25);
    t46 = (t10 - t32);
    t47 = (t46 + 1);
    xsi_vlogvar_wait_assign_value(t19, t14, t43, *((unsigned int *)t25), t47, 0LL);
    goto LAB14;

LAB15:    t9 = *((unsigned int *)t48);
    t43 = (t9 + 0);
    t10 = *((unsigned int *)t24);
    t32 = *((unsigned int *)t25);
    t46 = (t10 - t32);
    t47 = (t46 + 1);
    xsi_vlogvar_wait_assign_value(t19, t14, t43, *((unsigned int *)t25), t47, 0LL);
    goto LAB16;

}

static void Always_40_1(char *t0)
{
    char t11[8];
    char t22[8];
    char t23[8];
    char t42[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t12;
    char *t13;
    char *t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    char *t31;
    unsigned int t32;
    int t33;
    char *t34;
    unsigned int t35;
    int t36;
    int t37;
    unsigned int t38;
    unsigned int t39;
    int t40;
    int t41;

LAB0:    t1 = (t0 + 1956U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(40, ng0);
    t2 = (t0 + 2160);
    *((int *)t2) = 1;
    t3 = (t0 + 1984);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(41, ng0);
    t4 = (t0 + 876U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB5;

LAB6:
LAB7:    goto LAB2;

LAB5:    xsi_set_current_line(41, ng0);

LAB8:    xsi_set_current_line(42, ng0);
    t12 = (t0 + 692U);
    t13 = *((char **)t12);
    memset(t11, 0, 8);
    t12 = (t11 + 4);
    t14 = (t13 + 4);
    t15 = *((unsigned int *)t13);
    t16 = (t15 >> 24);
    *((unsigned int *)t11) = t16;
    t17 = *((unsigned int *)t14);
    t18 = (t17 >> 24);
    *((unsigned int *)t12) = t18;
    t19 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t19 & 255U);
    t20 = *((unsigned int *)t12);
    *((unsigned int *)t12) = (t20 & 255U);
    t21 = (t0 + 1288);
    t24 = (t0 + 1288);
    t25 = (t24 + 44U);
    t26 = *((char **)t25);
    t27 = (t0 + 1288);
    t28 = (t27 + 40U);
    t29 = *((char **)t28);
    t30 = (t0 + 600U);
    t31 = *((char **)t30);
    xsi_vlog_generic_convert_array_indices(t22, t23, t26, t29, 2, 1, t31, 32, 2);
    t30 = (t22 + 4);
    t32 = *((unsigned int *)t30);
    t33 = (!(t32));
    t34 = (t23 + 4);
    t35 = *((unsigned int *)t34);
    t36 = (!(t35));
    t37 = (t33 && t36);
    if (t37 == 1)
        goto LAB9;

LAB10:    xsi_set_current_line(43, ng0);
    t2 = (t0 + 692U);
    t3 = *((char **)t2);
    memset(t11, 0, 8);
    t2 = (t11 + 4);
    t4 = (t3 + 4);
    t6 = *((unsigned int *)t3);
    t7 = (t6 >> 16);
    *((unsigned int *)t11) = t7;
    t8 = *((unsigned int *)t4);
    t9 = (t8 >> 16);
    *((unsigned int *)t2) = t9;
    t10 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t10 & 255U);
    t15 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t15 & 255U);
    t5 = (t0 + 1288);
    t12 = (t0 + 1288);
    t13 = (t12 + 44U);
    t14 = *((char **)t13);
    t21 = (t0 + 1288);
    t24 = (t21 + 40U);
    t25 = *((char **)t24);
    t26 = (t0 + 600U);
    t27 = *((char **)t26);
    t26 = ((char*)((ng3)));
    memset(t42, 0, 8);
    xsi_vlog_unsigned_add(t42, 32, t27, 32, t26, 32);
    xsi_vlog_generic_convert_array_indices(t22, t23, t14, t25, 2, 1, t42, 32, 2);
    t28 = (t22 + 4);
    t16 = *((unsigned int *)t28);
    t33 = (!(t16));
    t29 = (t23 + 4);
    t17 = *((unsigned int *)t29);
    t36 = (!(t17));
    t37 = (t33 && t36);
    if (t37 == 1)
        goto LAB11;

LAB12:    xsi_set_current_line(44, ng0);
    t2 = (t0 + 692U);
    t3 = *((char **)t2);
    memset(t11, 0, 8);
    t2 = (t11 + 4);
    t4 = (t3 + 4);
    t6 = *((unsigned int *)t3);
    t7 = (t6 >> 8);
    *((unsigned int *)t11) = t7;
    t8 = *((unsigned int *)t4);
    t9 = (t8 >> 8);
    *((unsigned int *)t2) = t9;
    t10 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t10 & 255U);
    t15 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t15 & 255U);
    t5 = (t0 + 1288);
    t12 = (t0 + 1288);
    t13 = (t12 + 44U);
    t14 = *((char **)t13);
    t21 = (t0 + 1288);
    t24 = (t21 + 40U);
    t25 = *((char **)t24);
    t26 = (t0 + 600U);
    t27 = *((char **)t26);
    t26 = ((char*)((ng6)));
    memset(t42, 0, 8);
    xsi_vlog_unsigned_add(t42, 32, t27, 32, t26, 32);
    xsi_vlog_generic_convert_array_indices(t22, t23, t14, t25, 2, 1, t42, 32, 2);
    t28 = (t22 + 4);
    t16 = *((unsigned int *)t28);
    t33 = (!(t16));
    t29 = (t23 + 4);
    t17 = *((unsigned int *)t29);
    t36 = (!(t17));
    t37 = (t33 && t36);
    if (t37 == 1)
        goto LAB13;

LAB14:    xsi_set_current_line(45, ng0);
    t2 = (t0 + 692U);
    t3 = *((char **)t2);
    memset(t11, 0, 8);
    t2 = (t11 + 4);
    t4 = (t3 + 4);
    t6 = *((unsigned int *)t3);
    t7 = (t6 >> 0);
    *((unsigned int *)t11) = t7;
    t8 = *((unsigned int *)t4);
    t9 = (t8 >> 0);
    *((unsigned int *)t2) = t9;
    t10 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t10 & 255U);
    t15 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t15 & 255U);
    t5 = (t0 + 1288);
    t12 = (t0 + 1288);
    t13 = (t12 + 44U);
    t14 = *((char **)t13);
    t21 = (t0 + 1288);
    t24 = (t21 + 40U);
    t25 = *((char **)t24);
    t26 = (t0 + 600U);
    t27 = *((char **)t26);
    t26 = ((char*)((ng9)));
    memset(t42, 0, 8);
    xsi_vlog_unsigned_add(t42, 32, t27, 32, t26, 32);
    xsi_vlog_generic_convert_array_indices(t22, t23, t14, t25, 2, 1, t42, 32, 2);
    t28 = (t22 + 4);
    t16 = *((unsigned int *)t28);
    t33 = (!(t16));
    t29 = (t23 + 4);
    t17 = *((unsigned int *)t29);
    t36 = (!(t17));
    t37 = (t33 && t36);
    if (t37 == 1)
        goto LAB15;

LAB16:    goto LAB7;

LAB9:    t38 = *((unsigned int *)t22);
    t39 = *((unsigned int *)t23);
    t40 = (t38 - t39);
    t41 = (t40 + 1);
    xsi_vlogvar_wait_assign_value(t21, t11, 0, *((unsigned int *)t23), t41, 0LL);
    goto LAB10;

LAB11:    t18 = *((unsigned int *)t22);
    t19 = *((unsigned int *)t23);
    t40 = (t18 - t19);
    t41 = (t40 + 1);
    xsi_vlogvar_wait_assign_value(t5, t11, 0, *((unsigned int *)t23), t41, 0LL);
    goto LAB12;

LAB13:    t18 = *((unsigned int *)t22);
    t19 = *((unsigned int *)t23);
    t40 = (t18 - t19);
    t41 = (t40 + 1);
    xsi_vlogvar_wait_assign_value(t5, t11, 0, *((unsigned int *)t23), t41, 0LL);
    goto LAB14;

LAB15:    t18 = *((unsigned int *)t22);
    t19 = *((unsigned int *)t23);
    t40 = (t18 - t19);
    t41 = (t40 + 1);
    xsi_vlogvar_wait_assign_value(t5, t11, 0, *((unsigned int *)t23), t41, 0LL);
    goto LAB16;

}


extern void work_m_00000000001845731488_2461264495_init()
{
	static char *pe[] = {(void *)Always_32_0,(void *)Always_40_1};
	xsi_register_didat("work_m_00000000001845731488_2461264495", "isim/CPU_test_isim_beh.exe.sim/work/m_00000000001845731488_2461264495.didat");
	xsi_register_executes(pe);
}
