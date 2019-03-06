ResistorCapacitorInductor(RLC) is a 2 player FPGA game programmed using a combination of SystemVerilog and C. 

The game is made in the likeness of the classic board game shoots-and-ladders, but instead of being a person climbing and sliding, you play as an electron
moving through a circuit. Inductors act as ladders, and capacitors act as slides.

The game utilizes VGA for output, and has animations for board movement. 3D printed controllers are used as accessories to 
control the electrons. 1 or 2 controllers can be used.

The SV module handles VGA output, communications between multiple devices using i2c, and handles the game states using several FSMs.

Quartus' Qsus is used to synthesis a microcontroller within the FPGA, and a portion of the game is programmed in C.

________________________________________________________________________________________________________________________

Skills Utilized: FGPA Development, 3D Printing, C programming, communication protocol development (I2C, Crosswire, VGA), Qsys module development
