	component RLC_game_system is
		port (
			clk_clk                                          : in  std_logic                     := 'X';             -- clk
			led_pio_external_connection_export               : out std_logic_vector(7 downto 0);                     -- export
			reset_reset_n                                    : in  std_logic                     := 'X';             -- reset_n
			switches_pio_external_connection_export          : in  std_logic_vector(7 downto 0)  := (others => 'X'); -- export
			datain_pio_external_connection_export            : in  std_logic_vector(7 downto 0)  := (others => 'X'); -- export
			keyin_pio_external_connection_export             : in  std_logic_vector(2 downto 0)  := (others => 'X'); -- export
			dataout_pio_external_connection_export           : out std_logic_vector(7 downto 0);                     -- export
			seven_seg_pio_external_connection_export         : out std_logic_vector(6 downto 0);                     -- export
			outputclockenable_pio_external_connection_export : out std_logic;                                        -- export
			vgareset_external_connection_export              : out std_logic;                                        -- export
			vgaout_external_connection_export                : out std_logic_vector(23 downto 0);                    -- export
			vga_x_cord_external_connection_export            : in  std_logic_vector(9 downto 0)  := (others => 'X'); -- export
			vga_y_cord_external_connection_export            : in  std_logic_vector(8 downto 0)  := (others => 'X'); -- export
			vga_clock_out_external_connection_export         : out std_logic                                         -- export
		);
	end component RLC_game_system;

	u0 : component RLC_game_system
		port map (
			clk_clk                                          => CONNECTED_TO_clk_clk,                                          --                                       clk.clk
			led_pio_external_connection_export               => CONNECTED_TO_led_pio_external_connection_export,               --               led_pio_external_connection.export
			reset_reset_n                                    => CONNECTED_TO_reset_reset_n,                                    --                                     reset.reset_n
			switches_pio_external_connection_export          => CONNECTED_TO_switches_pio_external_connection_export,          --          switches_pio_external_connection.export
			datain_pio_external_connection_export            => CONNECTED_TO_datain_pio_external_connection_export,            --            datain_pio_external_connection.export
			keyin_pio_external_connection_export             => CONNECTED_TO_keyin_pio_external_connection_export,             --             keyin_pio_external_connection.export
			dataout_pio_external_connection_export           => CONNECTED_TO_dataout_pio_external_connection_export,           --           dataout_pio_external_connection.export
			seven_seg_pio_external_connection_export         => CONNECTED_TO_seven_seg_pio_external_connection_export,         --         seven_seg_pio_external_connection.export
			outputclockenable_pio_external_connection_export => CONNECTED_TO_outputclockenable_pio_external_connection_export, -- outputclockenable_pio_external_connection.export
			vgareset_external_connection_export              => CONNECTED_TO_vgareset_external_connection_export,              --              vgareset_external_connection.export
			vgaout_external_connection_export                => CONNECTED_TO_vgaout_external_connection_export,                --                vgaout_external_connection.export
			vga_x_cord_external_connection_export            => CONNECTED_TO_vga_x_cord_external_connection_export,            --            vga_x_cord_external_connection.export
			vga_y_cord_external_connection_export            => CONNECTED_TO_vga_y_cord_external_connection_export,            --            vga_y_cord_external_connection.export
			vga_clock_out_external_connection_export         => CONNECTED_TO_vga_clock_out_external_connection_export          --         vga_clock_out_external_connection.export
		);

