--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   16:32:55 10/24/2019
-- Design Name:   
-- Module Name:   E:/counters/tb_counters.vhd
-- Project Name:  counters
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: UP_COUNTER
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
 
ENTITY tb_counters IS
END tb_counters;
 
ARCHITECTURE behavior OF tb_counters IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT UP_COUNTER
    PORT(
         clk : IN  std_logic;
         reset : IN  std_logic;
         counter : OUT  std_logic_vector(3 downto 0)
        );
    END COMPONENT;
    

   --Inputs
   signal clk : std_logic := '0';
   signal reset : std_logic := '0';

 	--Outputs
   signal counter : std_logic_vector(3 downto 0);

    
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: UP_COUNTER PORT MAP (
          clk => clk,
          reset => reset,
          counter => counter
        );

   -- Clock process definitions
   clk_process :process
   begin
		clk <= '0';
		wait for 10 ns;
		clk <= '1';
		wait for 10 ns;
   end process;
 

   -- Stimulus process
   stim_proc: process
   begin		
      -- hold reset state for 100 ns.
      reset<='1';
		wait for 20 ns;
		reset<='0';
      wait;
   end process;

END;
