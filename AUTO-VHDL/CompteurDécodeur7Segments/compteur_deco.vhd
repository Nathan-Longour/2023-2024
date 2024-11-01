LIBRARY ieee;
USE ieee.std_logic_1164.ALL;
USE ieee.numeric_std.ALL;

ENTITY compteur_deco IS 

	PORT (
	clki : IN STD_LOGIC;
	rst_ni : IN STD_LOGIC;
	enai : IN STD_LOGIC;
	maxi : IN STD_LOGIC_VECTOR (3 DOWNTO 0);
	af : OUT STD_LOGIC;
	bf : OUT STD_LOGIC;
	cf : OUT STD_LOGIC;
	df : OUT STD_LOGIC;
	ef : OUT STD_LOGIC;
	ff : OUT STD_LOGIC;
	gf : OUT STD_LOGIC);

END compteur_deco;

ARCHITECTURE archi OF compteur_deco IS

COMPONENT compteur_max
	PORT (
		clk : IN STD_LOGIC;
		ena : IN STD_LOGIC;
		rst_n : IN STD_LOGIC;
		max : IN STD_LOGIC_VECTOR (3 DOWNTO 0);
		valeur : OUT STD_LOGIC_VECTOR (3 DOWNTO 0));
END COMPONENT;

COMPONENT deco_BCD 
	PORT (
		bcd : IN STD_LOGIC_VECTOR(3 DOWNTO 0);
		a : OUT STD_LOGIC;
		b : OUT STD_LOGIC;
		c : OUT STD_LOGIC;
		d : OUT STD_LOGIC;
		e : OUT STD_LOGIC;
		f : OUT STD_LOGIC;
		g : OUT STD_LOGIC);
END COMPONENT;

SIGNAL val_int : STD_LOGIC_VECTOR(3 DOWNTO 0);

BEGIN

compteur : compteur_max
	PORT MAP (
		ena => enai,
		clk => clki,
		rst_n => rst_ni,
		max => maxi,
		valeur => val_int);
		
decodeur : deco_BCD 
	PORT MAP (
		bcd => val_int,
		a => af,
		b => bf,
		c => cf,
		d => df,
		e => ef,
		f => ff,
		g => gf);
END archi;


