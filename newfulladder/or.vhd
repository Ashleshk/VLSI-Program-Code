library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
entity or_gate is
    Port ( p : in  STD_LOGIC;
           q : in  STD_LOGIC;
           r : out  STD_LOGIC);
end or_gate;

architecture Behavioral of or_gate is

begin
r<=p or q;

end Behavioral;
