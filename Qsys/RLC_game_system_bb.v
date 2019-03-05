
module RLC_game_system (
	clk_clk,
	led_pio_external_connection_export,
	reset_reset_n,
	switches_pio_external_connection_export,
	datain_pio_external_connection_export,
	keyin_pio_external_connection_export,
	dataout_pio_external_connection_export,
	seven_seg_pio_external_connection_export,
	outputclockenable_pio_external_connection_export,
	vgareset_external_connection_export,
	vgaout_external_connection_export,
	vga_x_cord_external_connection_export,
	vga_y_cord_external_connection_export,
	vga_clock_out_external_connection_export);	

	input		clk_clk;
	output	[7:0]	led_pio_external_connection_export;
	input		reset_reset_n;
	input	[7:0]	switches_pio_external_connection_export;
	input	[7:0]	datain_pio_external_connection_export;
	input	[2:0]	keyin_pio_external_connection_export;
	output	[7:0]	dataout_pio_external_connection_export;
	output	[6:0]	seven_seg_pio_external_connection_export;
	output		outputclockenable_pio_external_connection_export;
	output		vgareset_external_connection_export;
	output	[23:0]	vgaout_external_connection_export;
	input	[9:0]	vga_x_cord_external_connection_export;
	input	[8:0]	vga_y_cord_external_connection_export;
	output		vga_clock_out_external_connection_export;
endmodule
