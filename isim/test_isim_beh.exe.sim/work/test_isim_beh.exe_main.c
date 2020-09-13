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

#include "xsi.h"

struct XSI_INFO xsi_info;



int main(int argc, char **argv)
{
    xsi_init_design(argc, argv);
    xsi_register_info(&xsi_info);

    xsi_register_min_prec_unit(-12);
    work_m_00000000003088866176_2825973548_init();
    work_m_00000000002808840368_2329252651_init();
    work_m_00000000001807361379_4124867394_init();
    xilinxcorelib_ver_m_00000000001358910285_2937625933_init();
    xilinxcorelib_ver_m_00000000001687936702_1724394411_init();
    xilinxcorelib_ver_m_00000000000277421008_2361416065_init();
    xilinxcorelib_ver_m_00000000001603977570_1163670189_init();
    work_m_00000000000403262735_0695000122_init();
    work_m_00000000000343936917_3316370692_init();
    work_m_00000000001971517015_2147302075_init();
    work_m_00000000004014312115_1771542456_init();
    work_m_00000000002177005777_4084107885_init();
    xilinxcorelib_ver_m_00000000000277421008_0575183187_init();
    xilinxcorelib_ver_m_00000000001603977570_0876925182_init();
    work_m_00000000002489990758_3899544524_init();
    unisims_ver_m_00000000003266096158_2593380106_init();
    unisims_ver_m_00000000001946988858_2297623829_init();
    unisims_ver_m_00000000002399568039_2282143210_init();
    unisims_ver_m_00000000000740258969_3897995058_init();
    unisims_ver_m_00000000000740258969_1625843133_init();
    unisims_ver_m_00000000003131622635_0225263307_init();
    unisims_ver_m_00000000002922998384_3338957284_init();
    work_m_00000000002902999459_1543460699_init();
    work_m_00000000001798573143_0460576820_init();
    work_m_00000000002784150032_1985558087_init();
    work_m_00000000004134447467_2073120511_init();


    xsi_register_tops("work_m_00000000002784150032_1985558087");
    xsi_register_tops("work_m_00000000004134447467_2073120511");


    return xsi_run_simulation(argc, argv);

}
