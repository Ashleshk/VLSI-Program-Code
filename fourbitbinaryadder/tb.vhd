LIBRARY ieee;
USE ieee.std_logic_1164.ALL;
 
 
ENTITY binary_tb IS
END binary_tb;
 
ARCHITECTURE behavior OF binary_tb IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT binaryadd
    PORT(
         A : IN  std_logic_vector(3 downto 0);
         B : IN  std_logic_vector(3 downto 0);
         cin : IN  std_logic;
         s : OUT  std_logic_vector(3 downto 0);
         carry : OUT  std_logic
        );
    END COMPONENT;
    

   --Inputs
   signal A : std_logic_vector(3 downto 0) := (others => '0');
   signal B : std_logic_vector(3 downto 0) := (others => '0');
   signal cin : std_logic := '0';

 	--Outputs
   signal s : std_logic_vector(3 downto 0);
   signal carry : std_logic;
    
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: binaryadd PORT MAP (
          A => A,
          B => B,
          cin => cin,
          s => s,
          carry => carry
        );

  

   -- Stimulus process
   stim_proc_A: process
   begin		
	A<="0100";
	 wait for 80 ns;	
  A<="0111";
  wait;
    end process;

   stim_proc_B: process
     begin		
	  B<="1111";
	  wait for 80 ns;	
     B<="0011";
     wait;
  end process;
  
   stim_proc_cin: process
     begin		
	  cin<='0';
	 wait for 80 ns;	
    wait;
    end process;




END;
