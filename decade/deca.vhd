
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use ieee.std_logic_unsigned.all;

entity decade is
    Port ( clk : in  STD_LOGIC;
           rst : in  STD_LOGIC;
           y : out  STD_LOGIC_VECTOR (3 downto 0));
end decade;

architecture Behavioral of decade is

begin
process(clk,rst)
 variable temp:std_logic_vector(3 downto 0);
 begin
 if rst='1' then
    temp := "0000";
	 y <= "0000";
 elsif clk'event and clk='1' then
   if temp < 9 then
	temp := temp + 1;
	else
	temp := "0000";
   end if;
	y <= temp;
	end if;
	end process;

end Behavioral;
