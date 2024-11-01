LIBRARY ieee;
USE ieee.std_logic_1164.ALL;
USE ieee.numeric_std.ALL;

ENTITY clk_reg IS 

	PORT (
		clk : IN STD_LOGIC;
		ena : OUT STD_LOGIC);
		
END clk_reg;

ARCHITECTURE ar OF clk_reg IS

SIGNAL clks : STD_LOGIC_VECTOR(22 DOWNTO 0);

BEGIN 

	PROCESS (clk)
	BEGIN 
	IF UNSIGNED(clks) <= 5000000 THEN
		ena <= '0';
		IF rising_edge(clk) THEN 
			clks <= STD_LOGIC_VECTOR(UNSIGNED(clks) +1);
		END IF;
	ELSE 
		ena <= '1';
		clks <= (OTHERS => '0');
	END IF;
	END PROCESS;
END ar;