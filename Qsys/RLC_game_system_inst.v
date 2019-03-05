	RLC_game_system u0 (
		.clk_clk                                          (<connected-to-clk_clk>),                                          //                                       clk.clk
		.led_pio_external_connection_export               (<connected-to-led_pio_external_connection_export>),               //               led_pio_external_connection.export
		.reset_reset_n                                    (<connected-to-reset_reset_n>),                                    //                                     reset.reset_n
		.switches_pio_external_connection_export          (<connected-to-switches_pio_external_connection_export>),          //          switches_pio_external_connection.export
		.datain_pio_external_connection_export            (<connected-to-datain_pio_external_connection_export>),            //            datain_pio_external_connection.export
		.keyin_pio_external_connection_export             (<connected-to-keyin_pio_external_connection_export>),             //             keyin_pio_external_connection.export
		.dataout_pio_external_connection_export           (<connected-to-dataout_pio_external_connection_export>),           //           dataout_pio_external_connection.export
		.seven_seg_pio_external_connection_export         (<connected-to-seven_seg_pio_external_connection_export>),         //         seven_seg_pio_external_connection.export
		.outputclockenable_pio_external_connection_export (<connected-to-outputclockenable_pio_external_connection_export>), // outputclockenable_pio_external_connection.export
		.vgareset_external_connection_export              (<connected-to-vgareset_external_connection_export>),              //              vgareset_external_connection.export
		.vgaout_external_connection_export                (<connected-to-vgaout_external_connection_export>),                //                vgaout_external_connection.export
		.vga_x_cord_external_connection_export            (<connected-to-vga_x_cord_external_connection_export>),            //            vga_x_cord_external_connection.export
		.vga_y_cord_external_connection_export            (<connected-to-vga_y_cord_external_connection_export>),            //            vga_y_cord_external_connection.export
		.vga_clock_out_external_connection_export         (<connected-to-vga_clock_out_external_connection_export>)          //         vga_clock_out_external_connection.export
	);

