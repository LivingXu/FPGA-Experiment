#ifndef _ALTERA_HPS_0_H_
#define _ALTERA_HPS_0_H_

/*
 * This file was automatically generated by the swinfo2header utility.
 * 
 * Created from SOPC Builder system 'soc_system' in
 * file './soc_system.sopcinfo'.
 */

/*
 * This file contains macros for module 'hps_0' and devices
 * connected to the following masters:
 *   h2f_axi_master
 *   h2f_lw_axi_master
 * 
 * Do not include this header file and another header file created for a
 * different module or master group at the same time.
 * Doing so may result in duplicate macro names.
 * Instead, use the system header file which has macros with unique names.
 */

/*
 * Macros for device 'onchip_memory2_0', class 'altera_avalon_onchip_memory2'
 * The macros are prefixed with 'ONCHIP_MEMORY2_0_'.
 * The prefix is the slave descriptor.
 */
#define ONCHIP_MEMORY2_0_COMPONENT_TYPE altera_avalon_onchip_memory2
#define ONCHIP_MEMORY2_0_COMPONENT_NAME onchip_memory2_0
#define ONCHIP_MEMORY2_0_BASE 0x0
#define ONCHIP_MEMORY2_0_SPAN 65536
#define ONCHIP_MEMORY2_0_END 0xffff
#define ONCHIP_MEMORY2_0_ALLOW_IN_SYSTEM_MEMORY_CONTENT_EDITOR 0
#define ONCHIP_MEMORY2_0_ALLOW_MRAM_SIM_CONTENTS_ONLY_FILE 0
#define ONCHIP_MEMORY2_0_CONTENTS_INFO ""
#define ONCHIP_MEMORY2_0_DUAL_PORT 0
#define ONCHIP_MEMORY2_0_GUI_RAM_BLOCK_TYPE AUTO
#define ONCHIP_MEMORY2_0_INIT_CONTENTS_FILE soc_system_onchip_memory2_0
#define ONCHIP_MEMORY2_0_INIT_MEM_CONTENT 1
#define ONCHIP_MEMORY2_0_INSTANCE_ID NONE
#define ONCHIP_MEMORY2_0_NON_DEFAULT_INIT_FILE_ENABLED 0
#define ONCHIP_MEMORY2_0_RAM_BLOCK_TYPE AUTO
#define ONCHIP_MEMORY2_0_READ_DURING_WRITE_MODE DONT_CARE
#define ONCHIP_MEMORY2_0_SINGLE_CLOCK_OP 0
#define ONCHIP_MEMORY2_0_SIZE_MULTIPLE 1
#define ONCHIP_MEMORY2_0_SIZE_VALUE 65536
#define ONCHIP_MEMORY2_0_WRITABLE 1
#define ONCHIP_MEMORY2_0_MEMORY_INFO_DAT_SYM_INSTALL_DIR SIM_DIR
#define ONCHIP_MEMORY2_0_MEMORY_INFO_GENERATE_DAT_SYM 1
#define ONCHIP_MEMORY2_0_MEMORY_INFO_GENERATE_HEX 1
#define ONCHIP_MEMORY2_0_MEMORY_INFO_HAS_BYTE_LANE 0
#define ONCHIP_MEMORY2_0_MEMORY_INFO_HEX_INSTALL_DIR QPF_DIR
#define ONCHIP_MEMORY2_0_MEMORY_INFO_MEM_INIT_DATA_WIDTH 64
#define ONCHIP_MEMORY2_0_MEMORY_INFO_MEM_INIT_FILENAME soc_system_onchip_memory2_0

/*
 * Macros for device 'pio_a_init', class 'altera_avalon_pio'
 * The macros are prefixed with 'PIO_A_INIT_'.
 * The prefix is the slave descriptor.
 */
#define PIO_A_INIT_COMPONENT_TYPE altera_avalon_pio
#define PIO_A_INIT_COMPONENT_NAME pio_a_init
#define PIO_A_INIT_BASE 0x0
#define PIO_A_INIT_SPAN 16
#define PIO_A_INIT_END 0xf
#define PIO_A_INIT_BIT_CLEARING_EDGE_REGISTER 0
#define PIO_A_INIT_BIT_MODIFYING_OUTPUT_REGISTER 0
#define PIO_A_INIT_CAPTURE 0
#define PIO_A_INIT_DATA_WIDTH 32
#define PIO_A_INIT_DO_TEST_BENCH_WIRING 0
#define PIO_A_INIT_DRIVEN_SIM_VALUE 0
#define PIO_A_INIT_EDGE_TYPE NONE
#define PIO_A_INIT_FREQ 50000000
#define PIO_A_INIT_HAS_IN 1
#define PIO_A_INIT_HAS_OUT 1
#define PIO_A_INIT_HAS_TRI 0
#define PIO_A_INIT_IRQ_TYPE NONE
#define PIO_A_INIT_RESET_VALUE 0

/*
 * Macros for device 'pio_b_init', class 'altera_avalon_pio'
 * The macros are prefixed with 'PIO_B_INIT_'.
 * The prefix is the slave descriptor.
 */
#define PIO_B_INIT_COMPONENT_TYPE altera_avalon_pio
#define PIO_B_INIT_COMPONENT_NAME pio_b_init
#define PIO_B_INIT_BASE 0x40
#define PIO_B_INIT_SPAN 16
#define PIO_B_INIT_END 0x4f
#define PIO_B_INIT_BIT_CLEARING_EDGE_REGISTER 0
#define PIO_B_INIT_BIT_MODIFYING_OUTPUT_REGISTER 0
#define PIO_B_INIT_CAPTURE 0
#define PIO_B_INIT_DATA_WIDTH 32
#define PIO_B_INIT_DO_TEST_BENCH_WIRING 0
#define PIO_B_INIT_DRIVEN_SIM_VALUE 0
#define PIO_B_INIT_EDGE_TYPE NONE
#define PIO_B_INIT_FREQ 50000000
#define PIO_B_INIT_HAS_IN 1
#define PIO_B_INIT_HAS_OUT 1
#define PIO_B_INIT_HAS_TRI 0
#define PIO_B_INIT_IRQ_TYPE NONE
#define PIO_B_INIT_RESET_VALUE 0

/*
 * Macros for device 'pio_c_init', class 'altera_avalon_pio'
 * The macros are prefixed with 'PIO_C_INIT_'.
 * The prefix is the slave descriptor.
 */
#define PIO_C_INIT_COMPONENT_TYPE altera_avalon_pio
#define PIO_C_INIT_COMPONENT_NAME pio_c_init
#define PIO_C_INIT_BASE 0x80
#define PIO_C_INIT_SPAN 16
#define PIO_C_INIT_END 0x8f
#define PIO_C_INIT_BIT_CLEARING_EDGE_REGISTER 0
#define PIO_C_INIT_BIT_MODIFYING_OUTPUT_REGISTER 0
#define PIO_C_INIT_CAPTURE 0
#define PIO_C_INIT_DATA_WIDTH 32
#define PIO_C_INIT_DO_TEST_BENCH_WIRING 0
#define PIO_C_INIT_DRIVEN_SIM_VALUE 0
#define PIO_C_INIT_EDGE_TYPE NONE
#define PIO_C_INIT_FREQ 50000000
#define PIO_C_INIT_HAS_IN 1
#define PIO_C_INIT_HAS_OUT 1
#define PIO_C_INIT_HAS_TRI 0
#define PIO_C_INIT_IRQ_TYPE NONE
#define PIO_C_INIT_RESET_VALUE 0

/*
 * Macros for device 'pio_d_init', class 'altera_avalon_pio'
 * The macros are prefixed with 'PIO_D_INIT_'.
 * The prefix is the slave descriptor.
 */
#define PIO_D_INIT_COMPONENT_TYPE altera_avalon_pio
#define PIO_D_INIT_COMPONENT_NAME pio_d_init
#define PIO_D_INIT_BASE 0xc0
#define PIO_D_INIT_SPAN 16
#define PIO_D_INIT_END 0xcf
#define PIO_D_INIT_BIT_CLEARING_EDGE_REGISTER 0
#define PIO_D_INIT_BIT_MODIFYING_OUTPUT_REGISTER 0
#define PIO_D_INIT_CAPTURE 0
#define PIO_D_INIT_DATA_WIDTH 32
#define PIO_D_INIT_DO_TEST_BENCH_WIRING 0
#define PIO_D_INIT_DRIVEN_SIM_VALUE 0
#define PIO_D_INIT_EDGE_TYPE NONE
#define PIO_D_INIT_FREQ 50000000
#define PIO_D_INIT_HAS_IN 1
#define PIO_D_INIT_HAS_OUT 1
#define PIO_D_INIT_HAS_TRI 0
#define PIO_D_INIT_IRQ_TYPE NONE
#define PIO_D_INIT_RESET_VALUE 0

/*
 * Macros for device 'pio_e_init', class 'altera_avalon_pio'
 * The macros are prefixed with 'PIO_E_INIT_'.
 * The prefix is the slave descriptor.
 */
#define PIO_E_INIT_COMPONENT_TYPE altera_avalon_pio
#define PIO_E_INIT_COMPONENT_NAME pio_e_init
#define PIO_E_INIT_BASE 0x100
#define PIO_E_INIT_SPAN 16
#define PIO_E_INIT_END 0x10f
#define PIO_E_INIT_BIT_CLEARING_EDGE_REGISTER 0
#define PIO_E_INIT_BIT_MODIFYING_OUTPUT_REGISTER 0
#define PIO_E_INIT_CAPTURE 0
#define PIO_E_INIT_DATA_WIDTH 32
#define PIO_E_INIT_DO_TEST_BENCH_WIRING 0
#define PIO_E_INIT_DRIVEN_SIM_VALUE 0
#define PIO_E_INIT_EDGE_TYPE NONE
#define PIO_E_INIT_FREQ 50000000
#define PIO_E_INIT_HAS_IN 1
#define PIO_E_INIT_HAS_OUT 1
#define PIO_E_INIT_HAS_TRI 0
#define PIO_E_INIT_IRQ_TYPE NONE
#define PIO_E_INIT_RESET_VALUE 0

/*
 * Macros for device 'pio_f_init', class 'altera_avalon_pio'
 * The macros are prefixed with 'PIO_F_INIT_'.
 * The prefix is the slave descriptor.
 */
#define PIO_F_INIT_COMPONENT_TYPE altera_avalon_pio
#define PIO_F_INIT_COMPONENT_NAME pio_f_init
#define PIO_F_INIT_BASE 0x140
#define PIO_F_INIT_SPAN 16
#define PIO_F_INIT_END 0x14f
#define PIO_F_INIT_BIT_CLEARING_EDGE_REGISTER 0
#define PIO_F_INIT_BIT_MODIFYING_OUTPUT_REGISTER 0
#define PIO_F_INIT_CAPTURE 0
#define PIO_F_INIT_DATA_WIDTH 32
#define PIO_F_INIT_DO_TEST_BENCH_WIRING 0
#define PIO_F_INIT_DRIVEN_SIM_VALUE 0
#define PIO_F_INIT_EDGE_TYPE NONE
#define PIO_F_INIT_FREQ 50000000
#define PIO_F_INIT_HAS_IN 1
#define PIO_F_INIT_HAS_OUT 1
#define PIO_F_INIT_HAS_TRI 0
#define PIO_F_INIT_IRQ_TYPE NONE
#define PIO_F_INIT_RESET_VALUE 0

/*
 * Macros for device 'pio_g_init', class 'altera_avalon_pio'
 * The macros are prefixed with 'PIO_G_INIT_'.
 * The prefix is the slave descriptor.
 */
#define PIO_G_INIT_COMPONENT_TYPE altera_avalon_pio
#define PIO_G_INIT_COMPONENT_NAME pio_g_init
#define PIO_G_INIT_BASE 0x180
#define PIO_G_INIT_SPAN 16
#define PIO_G_INIT_END 0x18f
#define PIO_G_INIT_BIT_CLEARING_EDGE_REGISTER 0
#define PIO_G_INIT_BIT_MODIFYING_OUTPUT_REGISTER 0
#define PIO_G_INIT_CAPTURE 0
#define PIO_G_INIT_DATA_WIDTH 32
#define PIO_G_INIT_DO_TEST_BENCH_WIRING 0
#define PIO_G_INIT_DRIVEN_SIM_VALUE 0
#define PIO_G_INIT_EDGE_TYPE NONE
#define PIO_G_INIT_FREQ 50000000
#define PIO_G_INIT_HAS_IN 1
#define PIO_G_INIT_HAS_OUT 1
#define PIO_G_INIT_HAS_TRI 0
#define PIO_G_INIT_IRQ_TYPE NONE
#define PIO_G_INIT_RESET_VALUE 0

/*
 * Macros for device 'pio_h_init', class 'altera_avalon_pio'
 * The macros are prefixed with 'PIO_H_INIT_'.
 * The prefix is the slave descriptor.
 */
#define PIO_H_INIT_COMPONENT_TYPE altera_avalon_pio
#define PIO_H_INIT_COMPONENT_NAME pio_h_init
#define PIO_H_INIT_BASE 0x1c0
#define PIO_H_INIT_SPAN 16
#define PIO_H_INIT_END 0x1cf
#define PIO_H_INIT_BIT_CLEARING_EDGE_REGISTER 0
#define PIO_H_INIT_BIT_MODIFYING_OUTPUT_REGISTER 0
#define PIO_H_INIT_CAPTURE 0
#define PIO_H_INIT_DATA_WIDTH 32
#define PIO_H_INIT_DO_TEST_BENCH_WIRING 0
#define PIO_H_INIT_DRIVEN_SIM_VALUE 0
#define PIO_H_INIT_EDGE_TYPE NONE
#define PIO_H_INIT_FREQ 50000000
#define PIO_H_INIT_HAS_IN 1
#define PIO_H_INIT_HAS_OUT 1
#define PIO_H_INIT_HAS_TRI 0
#define PIO_H_INIT_IRQ_TYPE NONE
#define PIO_H_INIT_RESET_VALUE 0

/*
 * Macros for device 'sysid_qsys', class 'altera_avalon_sysid_qsys'
 * The macros are prefixed with 'SYSID_QSYS_'.
 * The prefix is the slave descriptor.
 */
#define SYSID_QSYS_COMPONENT_TYPE altera_avalon_sysid_qsys
#define SYSID_QSYS_COMPONENT_NAME sysid_qsys
#define SYSID_QSYS_BASE 0x10000
#define SYSID_QSYS_SPAN 8
#define SYSID_QSYS_END 0x10007
#define SYSID_QSYS_ID 2899645186
#define SYSID_QSYS_TIMESTAMP 1544245569

/*
 * Macros for device 'jtag_uart', class 'altera_avalon_jtag_uart'
 * The macros are prefixed with 'JTAG_UART_'.
 * The prefix is the slave descriptor.
 */
#define JTAG_UART_COMPONENT_TYPE altera_avalon_jtag_uart
#define JTAG_UART_COMPONENT_NAME jtag_uart
#define JTAG_UART_BASE 0x20000
#define JTAG_UART_SPAN 8
#define JTAG_UART_END 0x20007
#define JTAG_UART_IRQ 2
#define JTAG_UART_READ_DEPTH 64
#define JTAG_UART_READ_THRESHOLD 8
#define JTAG_UART_WRITE_DEPTH 64
#define JTAG_UART_WRITE_THRESHOLD 8


#endif /* _ALTERA_HPS_0_H_ */