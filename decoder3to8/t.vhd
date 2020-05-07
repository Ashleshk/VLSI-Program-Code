LIBRARY ieee;
USE ieee.std_logic_1164.ALL;
 
 
ENTITY decoder38_tb IS
END decoder38_tb;
 
ARCHITECTURE behavior OF decoder38_tb IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT decoder38
    PORT(
         a : IN  std_logic_vector(2 downto 0);
         e : IN  std_logic;
         y : OUT  std_logic_vector(7 downto 0)
        );
    END COMPONENT;
    

   --Inputs
   signal a : std_logic_vector(2 downto 0) := (others => '0');
   signal e : std_logic := '0';

 	--Outputs
   signal y : std_logic_vector(7 downto 0);
   
 
BEGIN
 
	
   uut: decoder38 PORT MAP (
          a => a,
          e => e,
          y => y
        );

  
   stim_proc: process
   begin	
     e<='1';
	  wait for 10 ns;
      a<="000";
      wait for 100 ns;	
		a<="001";
      wait for 100 ns;	


      a<="010";
      wait for 100 ns;	


      a<="011";
      wait for 100 ns;	


      a<="100";
      wait for 100 ns;	


      a<="101";
      wait for 100 ns;	

      a<="110";
      wait for 100 ns;	

      a<="111";
      wait for 100 ns;	

      wait;
   end process;

END;
