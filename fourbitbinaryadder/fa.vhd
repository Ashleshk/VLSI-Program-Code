library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

entity fa is
    Port ( a : in  STD_LOGIC;
           b : in  STD_LOGIC;
           c : in  STD_LOGIC;
           co : out  STD_LOGIC;
           s : out  STD_LOGIC);
end fa;

architecture Behavioral of fa is

begin
s<=a xor b xor c;
co<=(a and b) or (c and (a or b));

end Behavioral;
