LIBRARY ieee;
USE ieee.std_logic_1164.ALL;
USE ieee.numeric_std.ALL;

ENTITY compteur_auto IS

	PORT (
	ena : IN STD_LOGIC;
	clk : IN STD_LOGIC;
	rst_n : IN STD_LOGIC;
	max : IN STD_LOGIC_VECTOR(3 DOWNTO 0);
	valeur : OUT STD_LOGIC_VECTOR (3 DOWNTO 0);
	auto : OUT STD_LOGIC);

END compteur_auto;


ARCHITECTURE comportementale OF compteur_auto IS

	SIGNAL valeur_interne : STD_LOGIC_VECTOR(3 DOWNTO 0);
	
BEGIN 

	PROCESS (clk, rst_n)
	BEGIN
		IF rst_n = '0' THEN
			valeur_interne <= (OTHERS => '0');
		ELSE
		IF rising_edge(clk) THEN
		IF ena = '1' THEN
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
auto <= '1' WHEN valeur_interne = max
ELSE '0';

END comportementale;