library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

entity mux81 is
    Port ( I : in  STD_LOGIC_VECTOR (7 downto 0);
           S : in  STD_LOGIC_VECTOR (2 downto 0);
           Y : out  STD_LOGIC);
end mux81;

architecture Behavioral of mux81 is

begin
with s select
 y<= I(0) when "000",
     I(1) when "001",
	  I(2) when "010",
	  I(3) when "011",
	  I(4) when "100",
	  I(5) when "101",
	  I(6) when "110",
	  I(7) when others;

end Behavioral;
