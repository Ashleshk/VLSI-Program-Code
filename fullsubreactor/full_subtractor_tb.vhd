--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   17:37:22 10/24/2019
-- Design Name:   
-- Module Name:   E:/fullsubreactor/full_subtractor_tb.vhd
-- Project Name:  fullsubreactor
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: fullsubtractor
-- 
-- Dependencies:
-- 
-- Revision:
-- Revision 0.01 - File Created
-- Additional Comments:
--
-- Notes: 
-- This testbench has been automatically generated using types std_logic and
-- std_logic_vector for the ports of the unit under test.  Xilinx recommends
-- that these types always be used for the top-level I/O of a design in order
-- to guarantee that the testbench will bind correctly to the post-implementation 
-- simulation model.
--------------------------------------------------------------------------------
LIBRARY ieee;
USE ieee.std_logic_1164.ALL;
 
-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--USE ieee.numeric_std.ALL;
 
ENTITY full_subtractor_tb IS
END full_subtractor_tb;
 
ARCHITECTURE behavior OF full_subtractor_tb IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT fullsubtractor
    PORT(
         a : IN  std_logic;
         b : IN  std_logic;
         c : IN  std_logic;
         diff : OUT  std_logic;
         borrow : OUT  std_logic
        );
    END COMPONENT;
    

   --Inputs
   signal a : std_logic := '0';
   signal b : std_logic := '0';
   signal c : std_logic := '0';

 	--Outputs
   signal diff : std_logic;
   signal borrow : std_logic;
   -- No clocks detected in port list. Replace <clock> below with 
   -- appropriate port name 
  
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: fullsubtractor PORT MAP (
          a => a,
          b => b,
          c => c,
          diff => diff,
          borrow => borrow
        );

    
 

   stim_proc: process
 begin  

 a <= '0';
 b <= '0';
 c <= '0';
 wait for 50 ns;

 a <= '0';
 b <= '0';
 c <= '1';
 wait for 50 ns;

 a <= '0';
 b <= '1';
 c <= '0';
 wait for 50 ns;

 a <= '0';
 b <= '1';
 c <= '1';
 wait for 50 ns;

 a <= '1';
 b <= '0';
 c <= '0';
 wait for 50 ns;

 a <= '1';
 b <= '0';
 c <= '1';
 wait for 50 ns;

 a <= '1';
 b <= '1';
 c <= '0';
 wait for 50 ns;

 a <= '1';
 b <= '1';
 c <= '1'; 
 wait;
  
 end process;

END;
