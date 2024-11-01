LIBRARY ieee;
USE ieee.std_logic_1164.ALL;
USE ieee.numeric_std.ALL;

ENTITY compteur_auto_clk IS 

	PORT (
	clki : IN STD_LOGIC;
	rst_ni : IN STD_LOGIC;
	start : IN STD_LOGIC;
	a1 : OUT STD_LOGIC;
	b1 : OUT STD_LOGIC;
	c1 : OUT STD_LOGIC;
	d1 : OUT STD_LOGIC;
	e1 : OUT STD_LOGIC;
	f1 : OUT STD_LOGIC;
	g1 : OUT STD_LOGIC;
	a2 : OUT STD_LOGIC;
	b2 : OUT STD_LOGIC;
	c2 : OUT STD_LOGIC;
	d2 : OUT STD_LOGIC;
	e2 : OUT STD_LOGIC;
	f2 : OUT STD_LOGIC;
	g2 : OUT STD_LOGIC;
	a3 : OUT STD_LOGIC;
	b3 : OUT STD_LOGIC;
	c3 : OUT STD_LOGIC;
	d3 : OUT STD_LOGIC;
	e3 : OUT STD_LOGIC;
	f3 : OUT STD_LOGIC;
	g3 : OUT STD_LOGIC);
END compteur_auto_clk;

ARCHITECTURE archi OF compteur_auto_clk IS

COMPONENT clk_reg

	PORT (
	enac : IN STD_LOGIC;
	clk : IN STD_LOGIC;
	rst_n : IN STD_LOGIC;
	fin : OUT STD_LOGIC);
	
END COMPONENT;

COMPONENT compteur_auto
	
	PORT (
	ena : IN STD_LOGIC;
	clk : IN STD_LOGIC;
	rst_n : IN STD_LOGIC;
	max : IN STD_LOGIC_VECTOR(3 DOWNTO 0);
	valeur : OUT STD_LOGIC_VECTOR (3 DOWNTO 0);
	fin : OUT STD_LOGIC);

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

SIGNAL ena_c1 : STD_LOGIC;
SIGNAL ena_c2 : STD_LOGIC;
SIGNAL fin_clk : STD_LOGIC;
SIGNAL valeur1 : STD_LOGIC_VECTOR(3 DOWNTO 0);
SIGNAL valeur2 : STD_LOGIC_VECTOR(3 DOWNTO 0);
SIGNAL valeur3 : STD_LOGIC_VECTOR(3 DOWNTO 0);
CONSTANT max9 : STD_LOGIC_VECTOR (3 DOWNTO 0) := "1001";
CONSTANT max5 : STD_LOGIC_VECTOR (3 DOWNTO 0) := "0101";

BEGIN 

regu : clk_reg
	PORT MAP (
		enac => start,
		clk => clki,
		rst_n => rst_ni,
		fin => fin_clk);
		
Deciseconde : compteur_auto
	PORT MAP (
		ena => (start AND fin_clk),
		clk => clki,
		rst_n => rst_ni,
		max => max9,
		valeur => valeur1,
		fin => ena_c1);
		
Deco_deci : deco_BCD
	PORT MAP (
		bcd => valeur1,
		a => a1,
		b => b1,
		c => c1,
		d => d1,
		e => e1,
		f => f1,
		g => g1);
		
Seconde : compteur_auto
	PORT MAP (
		ena => (fin_clk AND ena_c1 AND start),
		clk => clki,
		rst_n => rst_ni,
		max => max9,
		valeur => valeur2,
		fin => ena_c2);
		
Deco_sec : deco_BCD
	PORT MAP (
		bcd => valeur2,
		a => a2,
		b => b2,
		c => c2,
		d => d2,
		e => e2,
		f => f2,
		g => g2);

Decaseconde : compteur_auto
	PORT MAP (
		ena => (ena_c2 AND ena_c1 AND start),
		clk => clki,
		rst_n => rst_ni,
		max => max5,
		valeur => valeur3,
		fin => OPEN);
		
Deco_deca : deco_BCD
	PORT MAP (
		bcd => valeur3,
		a => a3,
		b => b3,
		c => c3,
		d => d3,
		e => e3,
		f => f3,
		g => g3);

END archi;
		
