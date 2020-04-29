-- ==============================================================
-- Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2 (64-bit)
-- Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
-- ==============================================================
library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity shift_sin_table_rom is 
    generic(
             DWIDTH     : integer := 9; 
             AWIDTH     : integer := 7; 
             MEM_SIZE    : integer := 65
    ); 
    port (
          addr0      : in std_logic_vector(AWIDTH-1 downto 0); 
          ce0       : in std_logic; 
          q0         : out std_logic_vector(DWIDTH-1 downto 0);
          clk       : in std_logic
    ); 
end entity; 


architecture rtl of shift_sin_table_rom is 

signal addr0_tmp : std_logic_vector(AWIDTH-1 downto 0); 
type mem_array is array (0 to MEM_SIZE-1) of std_logic_vector (DWIDTH-1 downto 0); 
signal mem : mem_array := (
    0 => "000000000", 1 => "000000110", 2 => "000001100", 3 => "000010010", 
    4 => "000011001", 5 => "000011111", 6 => "000100101", 7 => "000101011", 
    8 => "000110001", 9 => "000111000", 10 => "000111110", 11 => "001000100", 
    12 => "001001010", 13 => "001010000", 14 => "001010110", 15 => "001011100", 
    16 => "001100001", 17 => "001100111", 18 => "001101101", 19 => "001110011", 
    20 => "001111000", 21 => "001111110", 22 => "010000011", 23 => "010001000", 
    24 => "010001110", 25 => "010010011", 26 => "010011000", 27 => "010011101", 
    28 => "010100010", 29 => "010100111", 30 => "010101011", 31 => "010110000", 
    32 => "010110101", 33 => "010111001", 34 => "010111101", 35 => "011000001", 
    36 => "011000101", 37 => "011001001", 38 => "011001101", 39 => "011010001", 
    40 => "011010100", 41 => "011011000", 42 => "011011011", 43 => "011011110", 
    44 => "011100001", 45 => "011100100", 46 => "011100111", 47 => "011101010", 
    48 => "011101100", 49 => "011101110", 50 => "011110001", 51 => "011110011", 
    52 => "011110100", 53 => "011110110", 54 => "011111000", 55 => "011111001", 
    56 => "011111011", 57 => "011111100", 58 => "011111101", 59 to 60=> "011111110", 
    61 to 63=> "011111111", 64 => "100000000" );

attribute syn_rom_style : string;
attribute syn_rom_style of mem : signal is "select_rom";
attribute ROM_STYLE : string;
attribute ROM_STYLE of mem : signal is "distributed";

begin 


memory_access_guard_0: process (addr0) 
begin
      addr0_tmp <= addr0;
--synthesis translate_off
      if (CONV_INTEGER(addr0) > mem_size-1) then
           addr0_tmp <= (others => '0');
      else 
           addr0_tmp <= addr0;
      end if;
--synthesis translate_on
end process;

p_rom_access: process (clk)  
begin 
    if (clk'event and clk = '1') then
        if (ce0 = '1') then 
            q0 <= mem(CONV_INTEGER(addr0_tmp)); 
        end if;
    end if;
end process;

end rtl;

Library IEEE;
use IEEE.std_logic_1164.all;

entity shift_sin_table is
    generic (
        DataWidth : INTEGER := 9;
        AddressRange : INTEGER := 65;
        AddressWidth : INTEGER := 7);
    port (
        reset : IN STD_LOGIC;
        clk : IN STD_LOGIC;
        address0 : IN STD_LOGIC_VECTOR(AddressWidth - 1 DOWNTO 0);
        ce0 : IN STD_LOGIC;
        q0 : OUT STD_LOGIC_VECTOR(DataWidth - 1 DOWNTO 0));
end entity;

architecture arch of shift_sin_table is
    component shift_sin_table_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    shift_sin_table_rom_U :  component shift_sin_table_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;


