	RLC_game_system u0 (
		.clk_clk                                 (<connected-to-clk_clk>),                                 //                              clk.clk
		.led_pio_external_connection_export      (<connected-to-led_pio_external_connection_export>),      //      led_pio_external_connection.export
		.reset_reset_n                           (<connected-to-reset_reset_n>),                           //                            reset.reset_n
		.switches_pio_external_connection_export (<connected-to-switches_pio_external_connection_export>), // switches_pio_external_connection.export
		.datain_pio_external_connection_export   (<connected-to-datain_pio_external_connection_export>),   //   datain_pio_external_connection.export
		.keyin_pio_external_connection_export    (<connected-to-keyin_pio_external_connection_export>),    //    keyin_pio_external_connection.export
		.dataout_pio_external_connection_export  (<connected-to-dataout_pio_external_connection_export>)   //  dataout_pio_external_connection.export
	);

