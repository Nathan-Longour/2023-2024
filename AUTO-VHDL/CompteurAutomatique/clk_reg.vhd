LIBRARY ieee;
USE ieee.std_logic_1164.ALL;
USE ieee.numeric_std.ALL;

ENTITY clk_reg IS

	PORT (
	enac : IN STD_LOGIC;
	clk : IN STD_LOGIC;
	rst_n : IN STD_LOGIC;
	valeur : OUT STD_LOGIC_VECTOR (15 DOWNTO 0);
	fin : OUT STD_LOGIC);

END clk_reg;


ARCHITECTURE comportementale OF clk_reg IS

	SIGNAL valeur_interne : STD_LOGIC_VECTOR(15 DOWNTO 0);
	CONSTANT max :  STD_LOGIC_VECTOR(15 DOWNTO 0) := "1100001101001111";
	
BEGIN 

	PROCESS (clk, rst_n)
	BEGIN
		IF rst_n = '0' THEN
			valeur_interne <= (OTHERS => '0');
		ELSE
		IF rising_edge(clk) THEN
		IF enac = '1' THEN
			IF valeur_interne = max THEN
				valeur_interne <= (OTHERS => '0');
			ELSE
				valeur_interne <= STD_LOGIC_VECTOR(UNSIGNED(valeur_interne) +1);
			END IF;
		END IF;
		END IF;
		END IF;
	END PROCESS;
	
valeur <= valeur_interne;
fin <= '1' WHEN valeur_interne = max
ELSE '0';

END comportementale;