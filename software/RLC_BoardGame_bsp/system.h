/*
 * system.h - SOPC Builder system and BSP software package information
 *
 * Machine generated for CPU 'cpu' in SOPC Builder design 'RLC_game_system'
 * SOPC Builder design path: ../../RLC_game_system.sopcinfo
 *
 * Generated: Mon May 29 22:23:34 PDT 2017
 */

/*
 * DO NOT MODIFY THIS FILE
 *
 * Changing this file will have subtle consequences
 * which will almost certainly lead to a nonfunctioning
 * system. If you do modify this file, be aware that your
 * changes will be overwritten and lost when this file
 * is generated again.
 *
 * DO NOT MODIFY THIS FILE
 */

/*
 * License Agreement
 *
 * Copyright (c) 2008
 * Altera Corporation, San Jose, California, USA.
 * All rights reserved.
 *
 * Permission is hereby granted, free of charge, to any person obtaining a
 * copy of this software and associated documentation files (the "Software"),
 * to deal in the Software without restriction, including without limitation
 * the rights to use, copy, modify, merge, publish, distribute, sublicense,
 * and/or sell copies of the Software, and to permit persons to whom the
 * Software is furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
 * FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
 * DEALINGS IN THE SOFTWARE.
 *
 * This agreement shall be governed in all respects by the laws of the State
 * of California and by the laws of the United States of America.
 */

#ifndef __SYSTEM_H_
#define __SYSTEM_H_

/* Include definitions from linker script generator */
#include "linker.h"


/*
 * CPU configuration
 *
 */

#define ALT_CPU_ARCHITECTURE "altera_nios2_qsys"
#define ALT_CPU_BIG_ENDIAN 0
#define ALT_CPU_BREAK_ADDR 0x00080820
#define ALT_CPU_CPU_FREQ 50000000u
#define ALT_CPU_CPU_ID_SIZE 1
#define ALT_CPU_CPU_ID_VALUE 0x00000000
#define ALT_CPU_CPU_IMPLEMENTATION "tiny"
#define ALT_CPU_DATA_ADDR_WIDTH 0x14
#define ALT_CPU_DCACHE_LINE_SIZE 0
#define ALT_CPU_DCACHE_LINE_SIZE_LOG2 0
#define ALT_CPU_DCACHE_SIZE 0
#define ALT_CPU_EXCEPTION_ADDR 0x00040020
#define ALT_CPU_FLUSHDA_SUPPORTED
#define ALT_CPU_FREQ 50000000
#define ALT_CPU_HARDWARE_DIVIDE_PRESENT 0
#define ALT_CPU_HARDWARE_MULTIPLY_PRESENT 0
#define ALT_CPU_HARDWARE_MULX_PRESENT 0
#define ALT_CPU_HAS_DEBUG_CORE 1
#define ALT_CPU_HAS_DEBUG_STUB
#define ALT_CPU_HAS_JMPI_INSTRUCTION
#define ALT_CPU_ICACHE_LINE_SIZE 0
#define ALT_CPU_ICACHE_LINE_SIZE_LOG2 0
#define ALT_CPU_ICACHE_SIZE 0
#define ALT_CPU_INST_ADDR_WIDTH 0x14
#define ALT_CPU_NAME "cpu"
#define ALT_CPU_RESET_ADDR 0x00040000


/*
 * CPU configuration (with legacy prefix - don't use these anymore)
 *
 */

#define NIOS2_BIG_ENDIAN 0
#define NIOS2_BREAK_ADDR 0x00080820
#define NIOS2_CPU_FREQ 50000000u
#define NIOS2_CPU_ID_SIZE 1
#define NIOS2_CPU_ID_VALUE 0x00000000
#define NIOS2_CPU_IMPLEMENTATION "tiny"
#define NIOS2_DATA_ADDR_WIDTH 0x14
#define NIOS2_DCACHE_LINE_SIZE 0
#define NIOS2_DCACHE_LINE_SIZE_LOG2 0
#define NIOS2_DCACHE_SIZE 0
#define NIOS2_EXCEPTION_ADDR 0x00040020
#define NIOS2_FLUSHDA_SUPPORTED
#define NIOS2_HARDWARE_DIVIDE_PRESENT 0
#define NIOS2_HARDWARE_MULTIPLY_PRESENT 0
#define NIOS2_HARDWARE_MULX_PRESENT 0
#define NIOS2_HAS_DEBUG_CORE 1
#define NIOS2_HAS_DEBUG_STUB
#define NIOS2_HAS_JMPI_INSTRUCTION
#define NIOS2_ICACHE_LINE_SIZE 0
#define NIOS2_ICACHE_LINE_SIZE_LOG2 0
#define NIOS2_ICACHE_SIZE 0
#define NIOS2_INST_ADDR_WIDTH 0x14
#define NIOS2_RESET_ADDR 0x00040000


/*
 * DataIn_pio configuration
 *
 */

#define ALT_MODULE_CLASS_DataIn_pio altera_avalon_pio
#define DATAIN_PIO_BASE 0x81090
#define DATAIN_PIO_BIT_CLEARING_EDGE_REGISTER 0
#define DATAIN_PIO_BIT_MODIFYING_OUTPUT_REGISTER 0
#define DATAIN_PIO_CAPTURE 0
#define DATAIN_PIO_DATA_WIDTH 8
#define DATAIN_PIO_DO_TEST_BENCH_WIRING 0
#define DATAIN_PIO_DRIVEN_SIM_VALUE 0
#define DATAIN_PIO_EDGE_TYPE "NONE"
#define DATAIN_PIO_FREQ 50000000
#define DATAIN_PIO_HAS_IN 1
#define DATAIN_PIO_HAS_OUT 0
#define DATAIN_PIO_HAS_TRI 0
#define DATAIN_PIO_IRQ -1
#define DATAIN_PIO_IRQ_INTERRUPT_CONTROLLER_ID -1
#define DATAIN_PIO_IRQ_TYPE "NONE"
#define DATAIN_PIO_NAME "/dev/DataIn_pio"
#define DATAIN_PIO_RESET_VALUE 0
#define DATAIN_PIO_SPAN 16
#define DATAIN_PIO_TYPE "altera_avalon_pio"


/*
 * DataOut_pio configuration
 *
 */

#define ALT_MODULE_CLASS_DataOut_pio altera_avalon_pio
#define DATAOUT_PIO_BASE 0x81070
#define DATAOUT_PIO_BIT_CLEARING_EDGE_REGISTER 0
#define DATAOUT_PIO_BIT_MODIFYING_OUTPUT_REGISTER 0
#define DATAOUT_PIO_CAPTURE 0
#define DATAOUT_PIO_DATA_WIDTH 8
#define DATAOUT_PIO_DO_TEST_BENCH_WIRING 0
#define DATAOUT_PIO_DRIVEN_SIM_VALUE 0
#define DATAOUT_PIO_EDGE_TYPE "NONE"
#define DATAOUT_PIO_FREQ 50000000
#define DATAOUT_PIO_HAS_IN 0
#define DATAOUT_PIO_HAS_OUT 1
#define DATAOUT_PIO_HAS_TRI 0
#define DATAOUT_PIO_IRQ -1
#define DATAOUT_PIO_IRQ_INTERRUPT_CONTROLLER_ID -1
#define DATAOUT_PIO_IRQ_TYPE "NONE"
#define DATAOUT_PIO_NAME "/dev/DataOut_pio"
#define DATAOUT_PIO_RESET_VALUE 0
#define DATAOUT_PIO_SPAN 16
#define DATAOUT_PIO_TYPE "altera_avalon_pio"


/*
 * Define for each module class mastered by the CPU
 *
 */

#define __ALTERA_AVALON_JTAG_UART
#define __ALTERA_AVALON_ONCHIP_MEMORY2
#define __ALTERA_AVALON_PIO
#define __ALTERA_NIOS2_QSYS


/*
 * KEYin_pio configuration
 *
 */

#define ALT_MODULE_CLASS_KEYin_pio altera_avalon_pio
#define KEYIN_PIO_BASE 0x81080
#define KEYIN_PIO_BIT_CLEARING_EDGE_REGISTER 0
#define KEYIN_PIO_BIT_MODIFYING_OUTPUT_REGISTER 0
#define KEYIN_PIO_CAPTURE 0
#define KEYIN_PIO_DATA_WIDTH 3
#define KEYIN_PIO_DO_TEST_BENCH_WIRING 0
#define KEYIN_PIO_DRIVEN_SIM_VALUE 0
#define KEYIN_PIO_EDGE_TYPE "NONE"
#define KEYIN_PIO_FREQ 50000000
#define KEYIN_PIO_HAS_IN 1
#define KEYIN_PIO_HAS_OUT 0
#define KEYIN_PIO_HAS_TRI 0
#define KEYIN_PIO_IRQ -1
#define KEYIN_PIO_IRQ_INTERRUPT_CONTROLLER_ID -1
#define KEYIN_PIO_IRQ_TYPE "NONE"
#define KEYIN_PIO_NAME "/dev/KEYin_pio"
#define KEYIN_PIO_RESET_VALUE 0
#define KEYIN_PIO_SPAN 16
#define KEYIN_PIO_TYPE "altera_avalon_pio"


/*
 * OutputClockEnable_pio configuration
 *
 */

#define ALT_MODULE_CLASS_OutputClockEnable_pio altera_avalon_pio
#define OUTPUTCLOCKENABLE_PIO_BASE 0x81050
#define OUTPUTCLOCKENABLE_PIO_BIT_CLEARING_EDGE_REGISTER 0
#define OUTPUTCLOCKENABLE_PIO_BIT_MODIFYING_OUTPUT_REGISTER 0
#define OUTPUTCLOCKENABLE_PIO_CAPTURE 0
#define OUTPUTCLOCKENABLE_PIO_DATA_WIDTH 1
#define OUTPUTCLOCKENABLE_PIO_DO_TEST_BENCH_WIRING 0
#define OUTPUTCLOCKENABLE_PIO_DRIVEN_SIM_VALUE 0
#define OUTPUTCLOCKENABLE_PIO_EDGE_TYPE "NONE"
#define OUTPUTCLOCKENABLE_PIO_FREQ 50000000
#define OUTPUTCLOCKENABLE_PIO_HAS_IN 0
#define OUTPUTCLOCKENABLE_PIO_HAS_OUT 1
#define OUTPUTCLOCKENABLE_PIO_HAS_TRI 0
#define OUTPUTCLOCKENABLE_PIO_IRQ -1
#define OUTPUTCLOCKENABLE_PIO_IRQ_INTERRUPT_CONTROLLER_ID -1
#define OUTPUTCLOCKENABLE_PIO_IRQ_TYPE "NONE"
#define OUTPUTCLOCKENABLE_PIO_NAME "/dev/OutputClockEnable_pio"
#define OUTPUTCLOCKENABLE_PIO_RESET_VALUE 0
#define OUTPUTCLOCKENABLE_PIO_SPAN 16
#define OUTPUTCLOCKENABLE_PIO_TYPE "altera_avalon_pio"


/*
 * System configuration
 *
 */

#define ALT_DEVICE_FAMILY "Cyclone V"
#define ALT_ENHANCED_INTERRUPT_API_PRESENT
#define ALT_IRQ_BASE NULL
#define ALT_LOG_PORT "/dev/null"
#define ALT_LOG_PORT_BASE 0x0
#define ALT_LOG_PORT_DEV null
#define ALT_LOG_PORT_TYPE ""
#define ALT_NUM_EXTERNAL_INTERRUPT_CONTROLLERS 0
#define ALT_NUM_INTERNAL_INTERRUPT_CONTROLLERS 1
#define ALT_NUM_INTERRUPT_CONTROLLERS 1
#define ALT_STDERR "/dev/jtag_uart"
#define ALT_STDERR_BASE 0x810c0
#define ALT_STDERR_DEV jtag_uart
#define ALT_STDERR_IS_JTAG_UART
#define ALT_STDERR_PRESENT
#define ALT_STDERR_TYPE "altera_avalon_jtag_uart"
#define ALT_STDIN "/dev/jtag_uart"
#define ALT_STDIN_BASE 0x810c0
#define ALT_STDIN_DEV jtag_uart
#define ALT_STDIN_IS_JTAG_UART
#define ALT_STDIN_PRESENT
#define ALT_STDIN_TYPE "altera_avalon_jtag_uart"
#define ALT_STDOUT "/dev/jtag_uart"
#define ALT_STDOUT_BASE 0x810c0
#define ALT_STDOUT_DEV jtag_uart
#define ALT_STDOUT_IS_JTAG_UART
#define ALT_STDOUT_PRESENT
#define ALT_STDOUT_TYPE "altera_avalon_jtag_uart"
#define ALT_SYSTEM_NAME "RLC_game_system"


/*
 * VGA_X_cord configuration
 *
 */

#define ALT_MODULE_CLASS_VGA_X_cord altera_avalon_pio
#define VGA_X_CORD_BASE 0x81020
#define VGA_X_CORD_BIT_CLEARING_EDGE_REGISTER 0
#define VGA_X_CORD_BIT_MODIFYING_OUTPUT_REGISTER 0
#define VGA_X_CORD_CAPTURE 0
#define VGA_X_CORD_DATA_WIDTH 10
#define VGA_X_CORD_DO_TEST_BENCH_WIRING 0
#define VGA_X_CORD_DRIVEN_SIM_VALUE 0
#define VGA_X_CORD_EDGE_TYPE "NONE"
#define VGA_X_CORD_FREQ 50000000
#define VGA_X_CORD_HAS_IN 1
#define VGA_X_CORD_HAS_OUT 0
#define VGA_X_CORD_HAS_TRI 0
#define VGA_X_CORD_IRQ -1
#define VGA_X_CORD_IRQ_INTERRUPT_CONTROLLER_ID -1
#define VGA_X_CORD_IRQ_TYPE "NONE"
#define VGA_X_CORD_NAME "/dev/VGA_X_cord"
#define VGA_X_CORD_RESET_VALUE 0
#define VGA_X_CORD_SPAN 16
#define VGA_X_CORD_TYPE "altera_avalon_pio"


/*
 * VGA_Y_cord configuration
 *
 */

#define ALT_MODULE_CLASS_VGA_Y_cord altera_avalon_pio
#define VGA_Y_CORD_BASE 0x81010
#define VGA_Y_CORD_BIT_CLEARING_EDGE_REGISTER 0
#define VGA_Y_CORD_BIT_MODIFYING_OUTPUT_REGISTER 0
#define VGA_Y_CORD_CAPTURE 0
#define VGA_Y_CORD_DATA_WIDTH 9
#define VGA_Y_CORD_DO_TEST_BENCH_WIRING 0
#define VGA_Y_CORD_DRIVEN_SIM_VALUE 0
#define VGA_Y_CORD_EDGE_TYPE "NONE"
#define VGA_Y_CORD_FREQ 50000000
#define VGA_Y_CORD_HAS_IN 1
#define VGA_Y_CORD_HAS_OUT 0
#define VGA_Y_CORD_HAS_TRI 0
#define VGA_Y_CORD_IRQ -1
#define VGA_Y_CORD_IRQ_INTERRUPT_CONTROLLER_ID -1
#define VGA_Y_CORD_IRQ_TYPE "NONE"
#define VGA_Y_CORD_NAME "/dev/VGA_Y_cord"
#define VGA_Y_CORD_RESET_VALUE 0
#define VGA_Y_CORD_SPAN 16
#define VGA_Y_CORD_TYPE "altera_avalon_pio"


/*
 * VGA_clock_out configuration
 *
 */

#define ALT_MODULE_CLASS_VGA_clock_out altera_avalon_pio
#define VGA_CLOCK_OUT_BASE 0x81000
#define VGA_CLOCK_OUT_BIT_CLEARING_EDGE_REGISTER 0
#define VGA_CLOCK_OUT_BIT_MODIFYING_OUTPUT_REGISTER 0
#define VGA_CLOCK_OUT_CAPTURE 0
#define VGA_CLOCK_OUT_DATA_WIDTH 1
#define VGA_CLOCK_OUT_DO_TEST_BENCH_WIRING 0
#define VGA_CLOCK_OUT_DRIVEN_SIM_VALUE 0
#define VGA_CLOCK_OUT_EDGE_TYPE "NONE"
#define VGA_CLOCK_OUT_FREQ 50000000
#define VGA_CLOCK_OUT_HAS_IN 0
#define VGA_CLOCK_OUT_HAS_OUT 1
#define VGA_CLOCK_OUT_HAS_TRI 0
#define VGA_CLOCK_OUT_IRQ -1
#define VGA_CLOCK_OUT_IRQ_INTERRUPT_CONTROLLER_ID -1
#define VGA_CLOCK_OUT_IRQ_TYPE "NONE"
#define VGA_CLOCK_OUT_NAME "/dev/VGA_clock_out"
#define VGA_CLOCK_OUT_RESET_VALUE 0
#define VGA_CLOCK_OUT_SPAN 16
#define VGA_CLOCK_OUT_TYPE "altera_avalon_pio"


/*
 * VGAout configuration
 *
 */

#define ALT_MODULE_CLASS_VGAout altera_avalon_pio
#define VGAOUT_BASE 0x81030
#define VGAOUT_BIT_CLEARING_EDGE_REGISTER 0
#define VGAOUT_BIT_MODIFYING_OUTPUT_REGISTER 0
#define VGAOUT_CAPTURE 0
#define VGAOUT_DATA_WIDTH 24
#define VGAOUT_DO_TEST_BENCH_WIRING 0
#define VGAOUT_DRIVEN_SIM_VALUE 0
#define VGAOUT_EDGE_TYPE "NONE"
#define VGAOUT_FREQ 50000000
#define VGAOUT_HAS_IN 0
#define VGAOUT_HAS_OUT 1
#define VGAOUT_HAS_TRI 0
#define VGAOUT_IRQ -1
#define VGAOUT_IRQ_INTERRUPT_CONTROLLER_ID -1
#define VGAOUT_IRQ_TYPE "NONE"
#define VGAOUT_NAME "/dev/VGAout"
#define VGAOUT_RESET_VALUE 0
#define VGAOUT_SPAN 16
#define VGAOUT_TYPE "altera_avalon_pio"


/*
 * VGAreset configuration
 *
 */

#define ALT_MODULE_CLASS_VGAreset altera_avalon_pio
#define VGARESET_BASE 0x81040
#define VGARESET_BIT_CLEARING_EDGE_REGISTER 0
#define VGARESET_BIT_MODIFYING_OUTPUT_REGISTER 0
#define VGARESET_CAPTURE 0
#define VGARESET_DATA_WIDTH 1
#define VGARESET_DO_TEST_BENCH_WIRING 0
#define VGARESET_DRIVEN_SIM_VALUE 0
#define VGARESET_EDGE_TYPE "NONE"
#define VGARESET_FREQ 50000000
#define VGARESET_HAS_IN 0
#define VGARESET_HAS_OUT 1
#define VGARESET_HAS_TRI 0
#define VGARESET_IRQ -1
#define VGARESET_IRQ_INTERRUPT_CONTROLLER_ID -1
#define VGARESET_IRQ_TYPE "NONE"
#define VGARESET_NAME "/dev/VGAreset"
#define VGARESET_RESET_VALUE 0
#define VGARESET_SPAN 16
#define VGARESET_TYPE "altera_avalon_pio"


/*
 * hal configuration
 *
 */

#define ALT_MAX_FD 32
#define ALT_SYS_CLK none
#define ALT_TIMESTAMP_CLK none


/*
 * jtag_uart configuration
 *
 */

#define ALT_MODULE_CLASS_jtag_uart altera_avalon_jtag_uart
#define JTAG_UART_BASE 0x810c0
#define JTAG_UART_IRQ 5
#define JTAG_UART_IRQ_INTERRUPT_CONTROLLER_ID 0
#define JTAG_UART_NAME "/dev/jtag_uart"
#define JTAG_UART_READ_DEPTH 64
#define JTAG_UART_READ_THRESHOLD 8
#define JTAG_UART_SPAN 8
#define JTAG_UART_TYPE "altera_avalon_jtag_uart"
#define JTAG_UART_WRITE_DEPTH 64
#define JTAG_UART_WRITE_THRESHOLD 8


/*
 * led_pio configuration
 *
 */

#define ALT_MODULE_CLASS_led_pio altera_avalon_pio
#define LED_PIO_BASE 0x810b0
#define LED_PIO_BIT_CLEARING_EDGE_REGISTER 0
#define LED_PIO_BIT_MODIFYING_OUTPUT_REGISTER 0
#define LED_PIO_CAPTURE 0
#define LED_PIO_DATA_WIDTH 8
#define LED_PIO_DO_TEST_BENCH_WIRING 0
#define LED_PIO_DRIVEN_SIM_VALUE 0
#define LED_PIO_EDGE_TYPE "NONE"
#define LED_PIO_FREQ 50000000
#define LED_PIO_HAS_IN 0
#define LED_PIO_HAS_OUT 1
#define LED_PIO_HAS_TRI 0
#define LED_PIO_IRQ -1
#define LED_PIO_IRQ_INTERRUPT_CONTROLLER_ID -1
#define LED_PIO_IRQ_TYPE "NONE"
#define LED_PIO_NAME "/dev/led_pio"
#define LED_PIO_RESET_VALUE 0
#define LED_PIO_SPAN 16
#define LED_PIO_TYPE "altera_avalon_pio"


/*
 * onchip_mem configuration
 *
 */

#define ALT_MODULE_CLASS_onchip_mem altera_avalon_onchip_memory2
#define ONCHIP_MEM_ALLOW_IN_SYSTEM_MEMORY_CONTENT_EDITOR 0
#define ONCHIP_MEM_ALLOW_MRAM_SIM_CONTENTS_ONLY_FILE 0
#define ONCHIP_MEM_BASE 0x40000
#define ONCHIP_MEM_CONTENTS_INFO ""
#define ONCHIP_MEM_DUAL_PORT 0
#define ONCHIP_MEM_GUI_RAM_BLOCK_TYPE "AUTO"
#define ONCHIP_MEM_INIT_CONTENTS_FILE "RLC_game_system_onchip_mem"
#define ONCHIP_MEM_INIT_MEM_CONTENT 1
#define ONCHIP_MEM_INSTANCE_ID "NONE"
#define ONCHIP_MEM_IRQ -1
#define ONCHIP_MEM_IRQ_INTERRUPT_CONTROLLER_ID -1
#define ONCHIP_MEM_NAME "/dev/onchip_mem"
#define ONCHIP_MEM_NON_DEFAULT_INIT_FILE_ENABLED 0
#define ONCHIP_MEM_RAM_BLOCK_TYPE "AUTO"
#define ONCHIP_MEM_READ_DURING_WRITE_MODE "DONT_CARE"
#define ONCHIP_MEM_SINGLE_CLOCK_OP 0
#define ONCHIP_MEM_SIZE_MULTIPLE 1
#define ONCHIP_MEM_SIZE_VALUE 200000
#define ONCHIP_MEM_SPAN 200000
#define ONCHIP_MEM_TYPE "altera_avalon_onchip_memory2"
#define ONCHIP_MEM_WRITABLE 1


/*
 * seven_seg_pio configuration
 *
 */

#define ALT_MODULE_CLASS_seven_seg_pio altera_avalon_pio
#define SEVEN_SEG_PIO_BASE 0x81060
#define SEVEN_SEG_PIO_BIT_CLEARING_EDGE_REGISTER 0
#define SEVEN_SEG_PIO_BIT_MODIFYING_OUTPUT_REGISTER 0
#define SEVEN_SEG_PIO_CAPTURE 0
#define SEVEN_SEG_PIO_DATA_WIDTH 7
#define SEVEN_SEG_PIO_DO_TEST_BENCH_WIRING 0
#define SEVEN_SEG_PIO_DRIVEN_SIM_VALUE 0
#define SEVEN_SEG_PIO_EDGE_TYPE "NONE"
#define SEVEN_SEG_PIO_FREQ 50000000
#define SEVEN_SEG_PIO_HAS_IN 0
#define SEVEN_SEG_PIO_HAS_OUT 1
#define SEVEN_SEG_PIO_HAS_TRI 0
#define SEVEN_SEG_PIO_IRQ -1
#define SEVEN_SEG_PIO_IRQ_INTERRUPT_CONTROLLER_ID -1
#define SEVEN_SEG_PIO_IRQ_TYPE "NONE"
#define SEVEN_SEG_PIO_NAME "/dev/seven_seg_pio"
#define SEVEN_SEG_PIO_RESET_VALUE 0
#define SEVEN_SEG_PIO_SPAN 16
#define SEVEN_SEG_PIO_TYPE "altera_avalon_pio"


/*
 * switches_pio configuration
 *
 */

#define ALT_MODULE_CLASS_switches_pio altera_avalon_pio
#define SWITCHES_PIO_BASE 0x810a0
#define SWITCHES_PIO_BIT_CLEARING_EDGE_REGISTER 0
#define SWITCHES_PIO_BIT_MODIFYING_OUTPUT_REGISTER 0
#define SWITCHES_PIO_CAPTURE 0
#define SWITCHES_PIO_DATA_WIDTH 8
#define SWITCHES_PIO_DO_TEST_BENCH_WIRING 0
#define SWITCHES_PIO_DRIVEN_SIM_VALUE 0
#define SWITCHES_PIO_EDGE_TYPE "NONE"
#define SWITCHES_PIO_FREQ 50000000
#define SWITCHES_PIO_HAS_IN 1
#define SWITCHES_PIO_HAS_OUT 0
#define SWITCHES_PIO_HAS_TRI 0
#define SWITCHES_PIO_IRQ -1
#define SWITCHES_PIO_IRQ_INTERRUPT_CONTROLLER_ID -1
#define SWITCHES_PIO_IRQ_TYPE "NONE"
#define SWITCHES_PIO_NAME "/dev/switches_pio"
#define SWITCHES_PIO_RESET_VALUE 0
#define SWITCHES_PIO_SPAN 16
#define SWITCHES_PIO_TYPE "altera_avalon_pio"

#endif /* __SYSTEM_H_ */
