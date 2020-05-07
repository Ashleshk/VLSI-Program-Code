library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

entity decoder38 is
    Port ( a : in  STD_LOGIC_VECTOR (2 downto 0);
           e : in  STD_LOGIC;
           y : out STD_LOGIC_VECTOR (7 downto 0));
end decoder38;

architecture Behavioral of decoder38 is

begin
process(a,e)
begin
if e='1' then

if a="000"    then y <= "00000001";
elsif a="001" then y <= "00000010";
elsif a="010" then y <= "00000100";
elsif a="011" then y <= "00001000";
elsif a="100" then y <= "00010000";
elsif a="101" then y <= "00100000";
elsif a="110" then y <= "01000000";
elsif a="111" then y <= "10000000";
else null;
end if;
end if;

end process;

end Behavioral;