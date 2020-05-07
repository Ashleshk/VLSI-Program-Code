LIBRARY ieee;
USE ieee.std_logic_1164.ALL;
 
ENTITY mux_tb IS
END mux_tb;
 
ARCHITECTURE behavior OF mux_tb IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT mux81
    PORT(
         I : IN  std_logic_vector(7 downto 0);
         S : IN  std_logic_vector(2 downto 0);
         Y : OUT  std_logic
        );
    END COMPONENT;
    

   --Inputs
   signal I : std_logic_vector(7 downto 0) := (others => '0');
   signal S : std_logic_vector(2 downto 0) := (others => '0');

 	--Outputs
   signal Y : std_logic;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: mux81 PORT MAP (
          I => I,
          S => S,
          Y => Y
        );

   

   -- Stimulus process
   stim_proc: process
   begin
      I(0)<='1';	
		I(1)<='0';
		I(2)<='0';
		I(3)<='1';
		I(4)<='1';
		I(5)<='0';
		I(6)<='1';
		I(7)<='0';
		
		S<="000";
      wait for 100 ns;	
		S<="001";
      wait for 100 ns;	


		S<="010";
      wait for 100 ns;	


		S<="011";
      wait for 100 ns;	


		S<="100";
      wait for 100 ns;	

		S<="101";
      wait for 100 ns;	

		S<="110";
      wait for 100 ns;	

		S<="111";
      wait for 100 ns;	



      wait;
   end process;

END;

