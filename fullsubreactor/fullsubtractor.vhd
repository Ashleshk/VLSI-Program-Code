library ieee;
use ieee.std_logic_1164.ALL;

entity fullsubtractor is
port(a,b,c :in bit; 
diff,borrow :out bit);
end fullsubtractor;

architecture dataflow of fullsubtractor is
begin
diff<=a xor b xor c;
borrow<=((not a)and b)or(not(a xor b) and c);
end dataflow;