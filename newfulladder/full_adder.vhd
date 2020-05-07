library ieee;
use ieee.std_logic_1164.all;
use ieee.std_logic_unsigned.all;



entity fulladder1 is
Port ( A : in  STD_LOGIC;
B : in  STD_LOGIC;
cin : in  STD_LOGIC;
sum : out  STD_LOGIC;
carry : out  STD_LOGIC);
end fulladder1;

architecture Behavioral of fulladder1 is
signal temp1,temp2,temp3: STD_LOGIC ;
component ha is
Port ( a : in  STD_LOGIC;
b : in  STD_LOGIC;
s : out  STD_LOGIC;
c : out  STD_LOGIC);
end component;

component or_gate is
port(
p,q:in std_logic;
r:out std_logic);
end component;


begin
HA1:ha port map(a=>A,b=>B,c=>temp1,s=>temp2);
HA2:ha port map (a=>temp2,b=>cin,c=>temp3,s=>sum);
org:or_gate port map(p=>temp1,q=>temp3,r=>carry);

end Behavioral;



