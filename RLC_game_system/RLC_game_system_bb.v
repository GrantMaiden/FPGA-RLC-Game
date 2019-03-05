
module RLC_game_system (
	clk_clk,
	led_pio_external_connection_export,
	reset_reset_n,
	switches_pio_external_connection_export,
	datain_pio_external_connection_export,
	keyin_pio_external_connection_export,
	dataout_pio_external_connection_export);	

	input		clk_clk;
	output	[7:0]	led_pio_external_connection_export;
	input		reset_reset_n;
	input	[7:0]	switches_pio_external_connection_export;
	input	[15:0]	datain_pio_external_connection_export;
	input	[2:0]	keyin_pio_external_connection_export;
	output	[15:0]	dataout_pio_external_connection_export;
endmodule
