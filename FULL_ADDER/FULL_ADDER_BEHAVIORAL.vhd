library ieee; 
 use ieee.std_logic_1164.all;  
 use IEEE.STD_LOGIC_unsigned.ALL;
use IEEE.NUMERIC_STD.ALL;
 entity Full_Adder_Behavioral_VHDL is  
   port( 
  X1, X2, Cin : in std_logic;  
  S, Cout : out std_logic
  );  
 end Full_Adder_Behavioral_VHDL;  
 architecture Behavioral of Full_Adder_Behavioral_VHDL is   
 signal tmp: std_logic_vector(1 downto 0);
 begin  
   process(X1,X2,Cin)
   begin 
 tmp <= ('0'& X1) + ('0'& X2) +('0'& Cin) ;
   end process;
   S <= tmp(0);
   Cout <= tmp(1);
 end Behavioral; 