	component RLC_game_system is
		port (
			clk_clk                                 : in  std_logic                     := 'X';             -- clk
			led_pio_external_connection_export      : out std_logic_vector(7 downto 0);                     -- export
			reset_reset_n                           : in  std_logic                     := 'X';             -- reset_n
			switches_pio_external_connection_export : in  std_logic_vector(7 downto 0)  := (others => 'X'); -- export
			datain_pio_external_connection_export   : in  std_logic_vector(15 downto 0) := (others => 'X'); -- export
			keyin_pio_external_connection_export    : in  std_logic_vector(2 downto 0)  := (others => 'X'); -- export
			dataout_pio_external_connection_export  : out std_logic_vector(15 downto 0)                     -- export
		);
	end component RLC_game_system;

	u0 : component RLC_game_system
		port map (
			clk_clk                                 => CONNECTED_TO_clk_clk,                                 --                              clk.clk
			led_pio_external_connection_export      => CONNECTED_TO_led_pio_external_connection_export,      --      led_pio_external_connection.export
			reset_reset_n                           => CONNECTED_TO_reset_reset_n,                           --                            reset.reset_n
			switches_pio_external_connection_export => CONNECTED_TO_switches_pio_external_connection_export, -- switches_pio_external_connection.export
			datain_pio_external_connection_export   => CONNECTED_TO_datain_pio_external_connection_export,   --   datain_pio_external_connection.export
			keyin_pio_external_connection_export    => CONNECTED_TO_keyin_pio_external_connection_export,    --    keyin_pio_external_connection.export
			dataout_pio_external_connection_export  => CONNECTED_TO_dataout_pio_external_connection_export   --  dataout_pio_external_connection.export
		);

