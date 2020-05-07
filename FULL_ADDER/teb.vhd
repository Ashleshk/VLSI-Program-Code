Library IEEE;
USE IEEE.Std_logic_1164.all;

entity Testbench_behavioral_adder is
end Testbench_behavioral_adder;
 
architecture  behavioral of Testbench_behavioral_adder is
 component Full_Adder_Behavioral_VHDL 
   port( 
  X1, X2, Cin : in std_logic;  
  S, Cout : out std_logic
  );  
 end component; 
 signal A,B,Cin: std_logic:='0';
 signal S,Cout: std_logic;
begin   
 behavior_adder: Full_Adder_Behavioral_VHDL port map 
   (
    X1 => A,
    X2 => B,
    Cin => Cin,
    S => S,
    Cout => Cout 
   );
  process
  begin
   A <= '1';
   B <= '1';
   Cin <= '1';
   wait for 50 ns; 
   A <= '1';
   B <= '1';
   Cin <= '0';
   wait for 50 ns; 
   A <= '1';
   B <= '0';
   Cin <= '1';
   wait for 50 ns;
   A <= '0';
   B <= '0';
   Cin <= '0';
   wait for 50 ns;
   A <= '0';
   B <= '0';
   Cin <= '1';
   wait for 50 ns;   
   A <= '0';
   B <= '1';
   Cin <= '0';
   wait for 50 ns;
   A <= '0';
   B <= '1';
   Cin <= '1';
   wait for 50 ns;
   A <= '1';
   B <= '0';
   Cin <= '0';
   wait for 50 ns;
  
  end process;
      
end behavioral; 