LIBRARY ieee;
USE ieee.std_logic_1164.ALL;

ENTITY deco_BCD IS 

	PORT (
	
		bcd : IN STD_LOGIC_VECTOR(3 DOWNTO 0);
		a : OUT STD_LOGIC;
		b : OUT STD_LOGIC;
		c : OUT STD_LOGIC;
		d : OUT STD_LOGIC;
		e : OUT STD_LOGIC;
		f : OUT STD_LOGIC;
		g : OUT STD_LOGIC);
		
END deco_BCD;

ARCHITECTURE archi OF deco_BCD IS

BEGIN 

	a <= (NOT(bcd(1)) AND bcd(0) AND NOT(bcd(3)) AND NOT(bcd(2))) OR (bcd(3) AND bcd(2)) OR (bcd(1) AND bcd(3)) OR (bcd(2) AND NOT(bcd(1)) AND NOT(bcd(0)));
	b <= (NOT(bcd(1)) AND bcd(0) AND bcd(2)) OR (bcd(3) AND bcd(2)) OR (bcd(1) AND bcd(3)) OR (bcd(1) AND NOT(bcd(0)) AND bcd(2));
	c <= (bcd(1) AND NOT(bcd(0)) AND NOT(bcd(3)) AND NOT(bcd(2))) OR (bcd(3) AND bcd(2)) OR (bcd(3) AND bcd(1));
	d <= (NOT(bcd(1)) AND NOT(bcd(0)) AND bcd(2)) OR (NOT(bcd(3)) AND NOT(bcd(2)) AND NOT(bcd(1)) AND bcd(0)) OR (bcd(3) AND bcd(2)) OR (bcd(1) AND bcd(3)) OR (bcd(1) AND bcd(0) AND bcd(2));
	e <= (bcd(0)) OR (NOT(bcd(1)) AND bcd(2)) OR (bcd(1) AND bcd(3));
	f <= (bcd(3) AND bcd(2)) OR (bcd(1) AND bcd(3)) OR (bcd(1) AND bcd(0)) OR (bcd(1) AND NOT(bcd(3)) AND NOT(bcd(2))) OR (bcd(0) AND NOT(bcd(3)) AND NOT(bcd(2)));
	g <= (NOT(bcd(1)) AND NOT(bcd(3)) AND NOT(bcd(2))) OR (bcd(3) AND bcd(2)) OR (bcd(1) AND bcd(0) AND bcd(2)) OR (bcd(1) AND bcd(3));
	
END archi;