LIBRARY ieee;
USE ieee.std_logic_1164.ALL;

 
ENTITY fulladder_tb IS
END fulladder_tb;
 
ARCHITECTURE behavior OF fulladder_tb IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT fulladder1
    PORT(
         A : IN  std_logic;
         B : IN  std_logic;
         cin : IN  std_logic;
         sum : OUT  std_logic;
         carry : OUT  std_logic
        );
    END COMPONENT;
    

   --Inputs
   signal A : std_logic := '0';
   signal B : std_logic := '0';
   signal cin : std_logic := '0';

 	--Outputs
   signal sum : std_logic;
   signal carry : std_logic;
   -- No clocks detected in port list. Replace <clock> below with 
   -- appropriate port name 
 
   
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: fulladder1 PORT MAP (
          A => A,
          B => B,
          cin => cin,
          sum => sum,
          carry => carry
        );

 

   -- Stimulus process
   stim_proc: process
   begin		
      a<='0';
		b<='0';
		cin<='0';
      wait for 20 ns;

      a<='0';
		b<='0';
		cin<='1';
      wait for 20 ns;
       		
      a<='0';
		b<='1';
		cin<='0';
      wait for 20 ns;
		
		a<='0';
		b<='1';
		cin<='1';
      wait for 20 ns;
     
	  	a<='1';
		b<='0';
		cin<='0';
      wait for 20 ns;
     

      a<='1';
		b<='0';
		cin<='1';
      wait for 20 ns;
     
      a<='1';
		b<='1';
		cin<='0';
      wait for 20 ns;
     

      a<='1';
		b<='1';
		cin<='1';
      wait for 20 ns;
     




      -- insert stimulus here 

      wait;
   end process;

END;
