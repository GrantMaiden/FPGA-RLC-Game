
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
//#include "stdio.h"
#include "altera_avalon_pio_regs.h"
//#define inputData (volatile char *) 0x0002010
//#define outputData (char *) 0x00081030


int main()
{ 
  alt_putstr("Serial communication test application has begun!\n");
  char c;
  /* Event loop never exits. */
  while (1){
	  alt_putstr("Enter a character to send over serial interface!\n");
	  c = 'G';
	  IOWR_ALTERA_AVALON_PIO_DATA(0x00081020, c); //store character in outputData register
	  IOWR_ALTERA_AVALON_PIO_DATA(0x00081000, 0b1); //begin data transfer
	  IOWR_ALTERA_AVALON_PIO_DATA(0x00081000, 0b0); //disable data transfer
	  alt_putstr("Enter 'Y' to read data being stored in outputData register!\n");
	  c = 'Y';
	  if (c == 'Y'){
		  alt_putstr("Stored outputData is:\n");
		  c = IORD_ALTERA_AVALON_PIO_DATA(0x00081020);
		  alt_printf("%c\n",c);
	  }
	  alt_putstr("Enter 'Y' to read data being stored in inputData register!\n");
	  c = 'Y';
	  if (c == 'Y'){
		  alt_putstr("Stored inputData is:\n");
		  c = IORD_ALTERA_AVALON_PIO_DATA(0x00081040);
		  alt_printf("%c\n",c);
	  }
  };

  return 0;
}
