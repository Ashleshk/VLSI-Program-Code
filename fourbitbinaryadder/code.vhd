
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

entity binaryadd is
    Port ( A : in  STD_LOGIC_VECTOR (3 downto 0);
           B : in  STD_LOGIC_VECTOR (3 downto 0);
           cin : in  STD_LOGIC;
           s : out  STD_LOGIC_VECTOR (3 downto 0);
           carry : out  STD_LOGIC);
end binaryadd;

architecture Behavioral of binaryadd is
signal temp1,temp2,temp3:std_logic;

component fa is 
port( a,b,c:in std_logic;
co:out std_logic;
s:out std_logic);
end component;

begin
fa0:fa port map(a=>A(0),b=>B(0),c=>cin,co=>temp1,s=>s(0));

fa1:fa port map(a=>A(1),b=>B(1),c=>temp1,co=>temp2,s=>s(1));

fa2:fa port map(a=>A(2),b=>B(2),c=>temp2,co=>temp3,s=>s(2));

fa3:fa port map(a=>A(3),b=>B(3),c=>temp3,co=>carry,s=>s(3));

end Behavioral;