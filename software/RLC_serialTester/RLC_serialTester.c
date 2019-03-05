
 /*
  *
  *
  *	IOWR_ALTERA_AVALON_PIO_DATA(targetAddress, aValue);
  *	aValue = IORD_ALTERA_AVALON_PIO_DATA(sourceAddress);
  *		used to write or read from a memory address.
  *
  *           Function                  Description
  *        ===============  =====================================
  *        alt_printf       Only supports %s, %x, and %c ( < 1 Kbyte)
  *        alt_putstr       Smaller overhead than puts with direct drivers
  *                         Note this function doesn't add a newline.
  *        alt_putchar      Smaller overhead than putchar with direct drivers
  *        alt_getchar      Smaller overhead than getchar with direct drivers
  *
  */

#include "sys/alt_stdio.h"
#include <stdio.h>
#include "altera_avalon_pio_regs.h"
#define led_out (void *) 0x000810b0
#define switches_in (volatile char *) 0x000810a0
#define inputData (volatile char *) 0x00081090
#define KEY_321_in (void *) 0x00081080 // 3 bit input
#define outputData (char *) 0x00081070
#define HEX0 (void *) 0x00081060
#define outputClockEn (void *) 0x00081050
#define VGA_reset (void *) 0x00081040
#define VGA_rgb_out (void *) 0x00081030
#define VGA_x_cord (void *) 0x00081020
#define VGA_y_cord (void *) 0x00081010
#define VGA_clock_out (void *) 0x00081000

int main()
{ 
  alt_putstr("Serial communication test application has begun!\n");
  char c;
  int i;
  /* Event loop never exits. */
  while (1){
	  //alt_putstr("OLD Stored inputData is:\n");
	  //c = IORD_ALTERA_AVALON_PIO_DATA(0x00081040);
	  //alt_printf("%x\n",c);
	  alt_putstr("Enter a character to send over serial interface!\n");
	  c = getchar();
	  getchar(); // Consume newline
	  alt_putstr("...\n");
	  alt_putstr("...\n");
	  IOWR_ALTERA_AVALON_PIO_DATA(HEX0, ~0b00011110);
	  IOWR_ALTERA_AVALON_PIO_DATA(outputData, c); //store character in outputData register

	  IOWR_ALTERA_AVALON_PIO_DATA(outputClockEn, 0b1); //begin data transfer
	  for (i = 0; i<350; i++){
	  }
	  //c = IORD_ALTERA_AVALON_PIO_DATA(0x00081000); //check to see if dataTransfer variable is going to 1
	  //alt_printf("%x\n",c);
	  IOWR_ALTERA_AVALON_PIO_DATA(outputClockEn, 0b0); //end data transfer
	  for (i = 0; i<350; i++){
	  }
	  //c = IORD_ALTERA_AVALON_PIO_DATA(0x00081000); //check to see if dataTransfer variable is going to 0
	  //alt_printf("%x\n",c);
	  alt_putstr("Enter 'Y' to read data being stored in outputData register!\n");
	  c = 'Y';
	  if (c == 'Y'){
		  alt_putstr("Stored outputData is:\n");
		  c = IORD_ALTERA_AVALON_PIO_DATA(outputData);
		  alt_printf("%c\n",c);
	  }
	  alt_putstr("Enter 'Y' to read data being stored in inputData register!\n");
	  c = 'Y';
	  if (c == 'Y'){
		  alt_putstr("NEW Stored inputData is:\n");
		  c = IORD_ALTERA_AVALON_PIO_DATA(inputData);
		  alt_printf("%x\n",c);
	  }
	  //VGA test
	  int j;
	  int k;
	  int l;
	  int m;

	  IOWR_ALTERA_AVALON_PIO_DATA(VGA_reset, 0b1); //begin data transfer
	  IOWR_ALTERA_AVALON_PIO_DATA(VGA_reset, 0b0); //begin data transfer

	  IOWR_ALTERA_AVALON_PIO_DATA(VGA_rgb_out, 0b000000001111111100000000); //begin data transfer
	  /*
	  l = IORD_ALTERA_AVALON_PIO_DATA(VGA_y_cord);
	  i = IORD_ALTERA_AVALON_PIO_DATA(VGA_x_cord);
	  j = IORD_ALTERA_AVALON_PIO_DATA(VGA_x_cord);
	  k = IORD_ALTERA_AVALON_PIO_DATA(VGA_x_cord);

	  m = IORD_ALTERA_AVALON_PIO_DATA(VGA_y_cord);
	  alt_printf("%x\n",i);
	  alt_printf("%x\n",j);
	  alt_printf("%x\n",k);
	  alt_printf("%x\n",l);
	  alt_printf("%x\n",m);
	  */
  };

  return 0;
}
